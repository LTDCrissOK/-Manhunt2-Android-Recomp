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

// Function: sub_002F9788
// Address: 0x2f9788 - 0x2f9828
void sub_002F9788_0x2f9788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9788_0x2f9788");
#endif

    switch (ctx->pc) {
        case 0x2f97ccu: goto label_2f97cc;
        default: break;
    }

    ctx->pc = 0x2f9788u;

    // 0x2f9788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f9788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f978c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f978cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f9790: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f9790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f9794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f9794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f9798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f979c: 0x8e0304f4  lw          $v1, 0x4F4($s0)
    ctx->pc = 0x2f979cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1268)));
    // 0x2f97a0: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x2f97a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x2f97a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F97A4u;
    {
        const bool branch_taken_0x2f97a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F97A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F97A4u;
        // 0x2f97a8: 0x8e1100b8  lw          $s1, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f97a4) {
            ctx->pc = 0x2F97B8u;
            goto label_2f97b8;
        }
    }
    ctx->pc = 0x2F97ACu;
    // 0x2f97ac: 0x38620005  xori        $v0, $v1, 0x5
    ctx->pc = 0x2f97acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x2f97b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F97B0u;
    {
        const bool branch_taken_0x2f97b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f97b0) {
            ctx->pc = 0x2F97C4u;
            goto label_2f97c4;
        }
    }
    ctx->pc = 0x2F97B8u;
label_2f97b8:
    // 0x2f97b8: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x2f97b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x2f97bc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F97BCu;
    {
        const bool branch_taken_0x2f97bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F97C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F97BCu;
        // 0x2f97c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f97bc) {
            ctx->pc = 0x2F9810u;
            goto label_2f9810;
        }
    }
    ctx->pc = 0x2F97C4u;
label_2f97c4:
    // 0x2f97c4: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x2F97C4u;
    SET_GPR_U32(ctx, 31, 0x2F97CCu);
    ctx->pc = 0x2F97C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F97C4u;
    // 0x2f97c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2F97C4u, 0x2F97CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F97CCu;
label_2f97cc:
    // 0x2f97cc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F97CCu;
    {
        const bool branch_taken_0x2f97cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F97CCu;
        // 0x2f97d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f97cc) {
            ctx->pc = 0x2F9810u;
            goto label_2f9810;
        }
    }
    ctx->pc = 0x2F97D4u;
    // 0x2f97d4: 0x8e0211f0  lw          $v0, 0x11F0($s0)
    ctx->pc = 0x2f97d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4592)));
    // 0x2f97d8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2F97D8u;
    {
        const bool branch_taken_0x2f97d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f97d8) {
            ctx->pc = 0x2F97DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F97D8u;
            // 0x2f97dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9810u;
            goto label_2f9810;
        }
    }
    ctx->pc = 0x2F97E0u;
    // 0x2f97e0: 0xc60112b8  lwc1        $f1, 0x12B8($s0)
    ctx->pc = 0x2f97e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f97e4: 0xc6201588  lwc1        $f0, 0x1588($s1)
    ctx->pc = 0x2f97e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f97e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f97e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f97ec: 0x0  nop
    ctx->pc = 0x2f97ecu;
    // NOP
    // 0x2f97f0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2F97F0u;
    {
        const bool branch_taken_0x2f97f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F97F0u;
        // 0x2f97f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f97f0) {
            ctx->pc = 0x2F9810u;
            goto label_2f9810;
        }
    }
    ctx->pc = 0x2F97F8u;
    // 0x2f97f8: 0xc620158c  lwc1        $f0, 0x158C($s1)
    ctx->pc = 0x2f97f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f97fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f97fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f9800: 0x0  nop
    ctx->pc = 0x2f9800u;
    // NOP
    // 0x2f9804: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9804u;
    {
        const bool branch_taken_0x2f9804 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9804u;
        // 0x2f9808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9804) {
            ctx->pc = 0x2F9810u;
            goto label_2f9810;
        }
    }
    ctx->pc = 0x2F980Cu;
    // 0x2f980c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f980cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f9810:
    // 0x2f9810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f9810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9814: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f9814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f9818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f9818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f981c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F981Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F981Cu;
        // 0x2f9820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F981Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9824u;
    // 0x2f9824: 0x0  nop
    ctx->pc = 0x2f9824u;
    // NOP
    ctx->pc = 0x2f9828u;
}
