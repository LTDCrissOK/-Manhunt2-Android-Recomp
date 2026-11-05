#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AB500
// Address: 0x2ab500 - 0x2ab598
void sub_002AB500_0x2ab500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB500_0x2ab500");
#endif

    switch (ctx->pc) {
        case 0x2ab518u: goto label_2ab518;
        default: break;
    }

    ctx->pc = 0x2ab500u;

    // 0x2ab500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ab504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ab508: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ab508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ab50c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab510: 0xc0aadb4  jal         func_2AB6D0
    ctx->pc = 0x2AB510u;
    SET_GPR_U32(ctx, 31, 0x2AB518u);
    ctx->pc = 0x2AB514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB510u;
    // 0x2ab514: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB6D0u, 0x2AB510u, 0x2AB518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB518u;
label_2ab518:
    // 0x2ab518: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ab518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2ab51c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2ab51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2ab520: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ab520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ab524: 0xc4412b4c  lwc1        $f1, 0x2B4C($v0)
    ctx->pc = 0x2ab524u;
    { uint32_t bits = FAST_READ32(0x482B4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab528: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ab528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ab52c: 0x9083a9d0  lbu         $v1, -0x5630($a0)
    ctx->pc = 0x2ab52cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FA9D0u));
    // 0x2ab530: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ab530u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ab534: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2AB534u;
    {
        const bool branch_taken_0x2ab534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB534u;
        // 0x2ab538: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab534) {
            ctx->pc = 0x2AB560u;
            goto label_2ab560;
        }
    }
    ctx->pc = 0x2AB53Cu;
    // 0x2ab53c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2ab53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab540: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ab540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ab544: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2ab544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab548: 0x0  nop
    ctx->pc = 0x2ab548u;
    // NOP
    // 0x2ab54c: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x2AB54Cu;
    {
        const bool branch_taken_0x2ab54c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ab54c) {
            ctx->pc = 0x2AB550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB54Cu;
            // 0x2ab550: 0xe6000090  swc1        $f0, 0x90($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB588u;
            goto label_2ab588;
        }
    }
    ctx->pc = 0x2AB554u;
    // 0x2ab554: 0xe6020090  swc1        $f2, 0x90($s0)
    ctx->pc = 0x2ab554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ab558: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2AB558u;
    {
        const bool branch_taken_0x2ab558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB558u;
        // 0x2ab55c: 0xa080a9d0  sb          $zero, -0x5630($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294945232), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab558) {
            ctx->pc = 0x2AB588u;
            goto label_2ab588;
        }
    }
    ctx->pc = 0x2AB560u;
label_2ab560:
    // 0x2ab560: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2ab560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab564: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ab564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab568: 0x0  nop
    ctx->pc = 0x2ab568u;
    // NOP
    // 0x2ab56c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB56Cu;
    {
        const bool branch_taken_0x2ab56c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB56Cu;
        // 0x2ab570: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab56c) {
            ctx->pc = 0x2AB580u;
            goto label_2ab580;
        }
    }
    ctx->pc = 0x2AB574u;
    // 0x2ab574: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2ab574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x2ab578: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB578u;
    {
        const bool branch_taken_0x2ab578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB578u;
        // 0x2ab57c: 0xa082a9d0  sb          $v0, -0x5630($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294945232), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab578) {
            ctx->pc = 0x2AB588u;
            goto label_2ab588;
        }
    }
    ctx->pc = 0x2AB580u;
label_2ab580:
    // 0x2ab580: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ab580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ab584: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ab584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_2ab588:
    // 0x2ab588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ab588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab58c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ab58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab590: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB590u;
        // 0x2ab594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB598u;
}
