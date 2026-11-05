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

// Function: sub_00140538
// Address: 0x140538 - 0x1405d8
void sub_00140538_0x140538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140538_0x140538");
#endif

    switch (ctx->pc) {
        case 0x140594u: goto label_140594;
        default: break;
    }

    ctx->pc = 0x140538u;

    // 0x140538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14053c: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x14053cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x140540: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x140540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x140544: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x140544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x140548: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x140548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14054c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14054cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140550: 0x8e030620  lw          $v1, 0x620($s0)
    ctx->pc = 0x140550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1568)));
    // 0x140554: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140558: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x140558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14055c: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x14055cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x140560: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x140560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x140564: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140568: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x140568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14056c: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x14056cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x140570: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x140570u;
    {
        const bool branch_taken_0x140570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140570) {
            ctx->pc = 0x140574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140570u;
            // 0x140574: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140580u;
            goto label_140580;
        }
    }
    ctx->pc = 0x140578u;
    // 0x140578: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x140578u;
    {
        const bool branch_taken_0x140578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140578u;
        // 0x14057c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140578) {
            ctx->pc = 0x140588u;
            goto label_140588;
        }
    }
    ctx->pc = 0x140580u;
label_140580:
    // 0x140580: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x140580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140584: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x140584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_140588:
    // 0x140588: 0x8e060624  lw          $a2, 0x624($s0)
    ctx->pc = 0x140588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1572)));
    // 0x14058c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x14058Cu;
    SET_GPR_U32(ctx, 31, 0x140594u);
    ctx->pc = 0x140590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14058Cu;
    // 0x140590: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x14058Cu, 0x140594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140594u;
label_140594:
    // 0x140594: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x140594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140598: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x140598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14059c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x14059cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1405a0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1405a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1405a4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1405a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1405a8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1405a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1405ac: 0xc600062c  lwc1        $f0, 0x62C($s0)
    ctx->pc = 0x1405acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1405b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1405b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1405b4: 0x0  nop
    ctx->pc = 0x1405b4u;
    // NOP
    // 0x1405b8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1405B8u;
    {
        const bool branch_taken_0x1405b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1405BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405B8u;
        // 0x1405bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1405b8) {
            ctx->pc = 0x1405C4u;
            goto label_1405c4;
        }
    }
    ctx->pc = 0x1405C0u;
    // 0x1405c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1405c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1405c4:
    // 0x1405c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1405c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1405c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1405c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1405cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1405CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1405D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405CCu;
        // 0x1405d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1405CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1405D4u;
    // 0x1405d4: 0x0  nop
    ctx->pc = 0x1405d4u;
    // NOP
    ctx->pc = 0x1405d8u;
}
