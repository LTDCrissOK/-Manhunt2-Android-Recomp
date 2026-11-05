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

// Function: sub_002FFC40
// Address: 0x2ffc40 - 0x2ffce8
void sub_002FFC40_0x2ffc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFC40_0x2ffc40");
#endif

    switch (ctx->pc) {
        case 0x2ffcb0u: goto label_2ffcb0;
        default: break;
    }

    ctx->pc = 0x2ffc40u;

    // 0x2ffc40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ffc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ffc44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ffc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ffc48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ffc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ffc4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ffc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ffc50: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2ffc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ffc54: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FFC54u;
    {
        const bool branch_taken_0x2ffc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffc54) {
            ctx->pc = 0x2FFC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFC54u;
            // 0x2ffc58: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFC6Cu;
            goto label_2ffc6c;
        }
    }
    ctx->pc = 0x2FFC5Cu;
    // 0x2ffc5c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2ffc5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ffc60: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x2ffc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x2ffc64: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FFC64u;
    {
        const bool branch_taken_0x2ffc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC64u;
        // 0x2ffc68: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc64) {
            ctx->pc = 0x2FFCCCu;
            goto label_2ffccc;
        }
    }
    ctx->pc = 0x2FFC6Cu;
label_2ffc6c:
    // 0x2ffc6c: 0x24515870  addiu       $s1, $v0, 0x5870
    ctx->pc = 0x2ffc6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x2ffc70: 0x8e26008c  lw          $a2, 0x8C($s1)
    ctx->pc = 0x2ffc70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x2ffc74: 0x28c204b0  slti        $v0, $a2, 0x4B0
    ctx->pc = 0x2ffc74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1200) ? 1 : 0);
    // 0x2ffc78: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FFC78u;
    {
        const bool branch_taken_0x2ffc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC78u;
        // 0x2ffc7c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc78) {
            ctx->pc = 0x2FFCCCu;
            goto label_2ffccc;
        }
    }
    ctx->pc = 0x2FFC80u;
    // 0x2ffc80: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2ffc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2ffc84: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2ffc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ffc88: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x2ffc88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ffc8c: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x2ffc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
    // 0x2ffc90: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2ffc90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc94: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x2ffc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ffc98: 0x2630008c  addiu       $s0, $s1, 0x8C
    ctx->pc = 0x2ffc98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
    // 0x2ffc9c: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x2ffc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2ffca0: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x2ffca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2ffca4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ffca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ffca8: 0xc07a814  jal         func_1EA050
    ctx->pc = 0x2FFCA8u;
    SET_GPR_U32(ctx, 31, 0x2FFCB0u);
    ctx->pc = 0x2FFCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFCA8u;
    // 0x2ffcac: 0x8c670014  lw          $a3, 0x14($v1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA050u, 0x2FFCA8u, 0x2FFCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFCB0u;
label_2ffcb0:
    // 0x2ffcb0: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x2ffcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x2ffcb4: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x2ffcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2ffcb8: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x2ffcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x2ffcbc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2ffcbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2ffcc0: 0x202180a  movz        $v1, $s0, $v0
    ctx->pc = 0x2ffcc0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x2ffcc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ffcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ffcc8: 0xae240090  sw          $a0, 0x90($s1)
    ctx->pc = 0x2ffcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 4));
label_2ffccc:
    // 0x2ffccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ffcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffcd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ffcd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffcd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ffcd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ffcd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ffcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffcdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCDCu;
        // 0x2ffce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFCE4u;
    // 0x2ffce4: 0x0  nop
    ctx->pc = 0x2ffce4u;
    // NOP
    ctx->pc = 0x2ffce8u;
}
