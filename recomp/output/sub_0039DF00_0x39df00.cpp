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

// Function: sub_0039DF00
// Address: 0x39df00 - 0x39df98
void sub_0039DF00_0x39df00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039DF00_0x39df00");
#endif

    switch (ctx->pc) {
        case 0x39df18u: goto label_39df18;
        case 0x39df3cu: goto label_39df3c;
        case 0x39df6cu: goto label_39df6c;
        default: break;
    }

    ctx->pc = 0x39df00u;

    // 0x39df00: 0x3e00008  jr          $ra
    ctx->pc = 0x39DF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39DF08u;
    // 0x39df08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39df08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39df0c: 0x0  nop
    ctx->pc = 0x39df0cu;
    // NOP
    // 0x39df10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39df10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39df14: 0x0  nop
    ctx->pc = 0x39df14u;
    // NOP
label_39df18:
    // 0x39df18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39df18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39df1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39df1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39df20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39df20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39df24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39df24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39df28: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x39df28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39df2c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39DF2Cu;
    {
        const bool branch_taken_0x39df2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF2Cu;
        // 0x39df30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39df2c) {
            ctx->pc = 0x39DF58u;
            goto label_39df58;
        }
    }
    ctx->pc = 0x39DF34u;
    // 0x39df34: 0xc0e66ac  jal         func_399AB0
    ctx->pc = 0x39DF34u;
    SET_GPR_U32(ctx, 31, 0x39DF3Cu);
    ctx->pc = 0x399AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AB0u, 0x39DF34u, 0x39DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DF3Cu;
label_39df3c:
    // 0x39df3c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39df40: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x39DF40u;
    {
        const bool branch_taken_0x39df40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39df40) {
            ctx->pc = 0x39DF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DF40u;
            // 0x39df44: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DF5Cu;
            goto label_39df5c;
        }
    }
    ctx->pc = 0x39DF48u;
    // 0x39df48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x39df48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39df4c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x39df4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x39df50: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x39df50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x39df54: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x39df54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_39df58:
    // 0x39df58: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x39df58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_39df5c:
    // 0x39df5c: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x39DF5Cu;
    {
        const bool branch_taken_0x39df5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39df5c) {
            ctx->pc = 0x39DF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DF5Cu;
            // 0x39df60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DF8Cu;
            goto label_39df8c;
        }
    }
    ctx->pc = 0x39DF64u;
    // 0x39df64: 0xc0e9cb2  jal         func_3A72C8
    ctx->pc = 0x39DF64u;
    SET_GPR_U32(ctx, 31, 0x39DF6Cu);
    ctx->pc = 0x3A72C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A72C8u, 0x39DF64u, 0x39DF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DF6Cu;
label_39df6c:
    // 0x39df6c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39df70: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x39DF70u;
    {
        const bool branch_taken_0x39df70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39df70) {
            ctx->pc = 0x39DF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DF70u;
            // 0x39df74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DF8Cu;
            goto label_39df8c;
        }
    }
    ctx->pc = 0x39DF78u;
    // 0x39df78: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x39df78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x39df7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x39df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39df80: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x39df80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x39df84: 0xa6030060  sh          $v1, 0x60($s0)
    ctx->pc = 0x39df84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x39df88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39df88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39df8c:
    // 0x39df8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39df8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39df90: 0x3e00008  jr          $ra
    ctx->pc = 0x39DF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF90u;
        // 0x39df94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39DF98u;
}
