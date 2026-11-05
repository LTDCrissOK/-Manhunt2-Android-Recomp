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

// Function: sub_001A60C8
// Address: 0x1a60c8 - 0x1a6178
void sub_001A60C8_0x1a60c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A60C8_0x1a60c8");
#endif

    switch (ctx->pc) {
        case 0x1a616cu: goto label_1a616c;
        default: break;
    }

    ctx->pc = 0x1a60c8u;

    // 0x1a60c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a60c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a60cc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a60ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a60d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a60d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a60d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a60d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a60d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a60d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a60dc: 0xc4e0018c  lwc1        $f0, 0x18C($a3)
    ctx->pc = 0x1a60dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a60e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a60e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a60e4: 0x0  nop
    ctx->pc = 0x1a60e4u;
    // NOP
    // 0x1a60e8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1A60E8u;
    {
        const bool branch_taken_0x1a60e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A60ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60E8u;
        // 0x1a60ec: 0x8ce20150  lw          $v0, 0x150($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60e8) {
            ctx->pc = 0x1A6124u;
            goto label_1a6124;
        }
    }
    ctx->pc = 0x1A60F0u;
    // 0x1a60f0: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x1a60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x1a60f4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a60f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a60f8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A60F8u;
    {
        const bool branch_taken_0x1a60f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A60FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60F8u;
        // 0x1a60fc: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60f8) {
            ctx->pc = 0x1A6134u;
            goto label_1a6134;
        }
    }
    ctx->pc = 0x1A6100u;
    // 0x1a6100: 0x8ce40158  lw          $a0, 0x158($a3)
    ctx->pc = 0x1a6100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x1a6104: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a6104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a6108: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1a6108u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a610c: 0x24426a00  addiu       $v0, $v0, 0x6A00
    ctx->pc = 0x1a610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27136));
    // 0x1a6110: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a6110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a6114: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a6114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a6118: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A6118u;
    {
        const bool branch_taken_0x1a6118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6118u;
        // 0x1a611c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6118) {
            ctx->pc = 0x1A6170u;
            goto label_1a6170;
        }
    }
    ctx->pc = 0x1A6120u;
    // 0x1a6120: 0x8ce20150  lw          $v0, 0x150($a3)
    ctx->pc = 0x1a6120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
label_1a6124:
    // 0x1a6124: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x1a6124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x1a6128: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a6128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a612c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A612Cu;
    {
        const bool branch_taken_0x1a612c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a612c) {
            ctx->pc = 0x1A6130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A612Cu;
            // 0x1a6130: 0xc4e101bc  lwc1        $f1, 0x1BC($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6148u;
            goto label_1a6148;
        }
    }
    ctx->pc = 0x1A6134u;
label_1a6134:
    // 0x1a6134: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a6134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a6138: 0x8ce40148  lw          $a0, 0x148($a3)
    ctx->pc = 0x1a6138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 328)));
    // 0x1a613c: 0x8c432b00  lw          $v1, 0x2B00($v0)
    ctx->pc = 0x1a613cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B00u));
    // 0x1a6140: 0xac83040c  sw          $v1, 0x40C($a0)
    ctx->pc = 0x1a6140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1036), GPR_U32(ctx, 3));
    // 0x1a6144: 0xc4e101bc  lwc1        $f1, 0x1BC($a3)
    ctx->pc = 0x1a6144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6148:
    // 0x1a6148: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a6148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a614c: 0x0  nop
    ctx->pc = 0x1a614cu;
    // NOP
    // 0x1a6150: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a6150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6154: 0x0  nop
    ctx->pc = 0x1a6154u;
    // NOP
    // 0x1a6158: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6158u;
    {
        const bool branch_taken_0x1a6158 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6158u;
        // 0x1a615c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6158) {
            ctx->pc = 0x1A616Cu;
            goto label_1a616c;
        }
    }
    ctx->pc = 0x1A6160u;
    // 0x1a6160: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1a6160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6164: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6164u;
    SET_GPR_U32(ctx, 31, 0x1A616Cu);
    ctx->pc = 0x1A6168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6164u;
    // 0x1a6168: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6164u, 0x1A616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A616Cu;
label_1a616c:
    // 0x1a616c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a616cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6170:
    // 0x1a6170: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6170u;
        // 0x1a6174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6178u;
}
