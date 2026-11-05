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

// Function: sub_001C3D30
// Address: 0x1c3d30 - 0x1c3dd0
void sub_001C3D30_0x1c3d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3D30_0x1c3d30");
#endif

    switch (ctx->pc) {
        case 0x1c3d50u: goto label_1c3d50;
        case 0x1c3d90u: goto label_1c3d90;
        case 0x1c3d98u: goto label_1c3d98;
        default: break;
    }

    ctx->pc = 0x1c3d30u;

    // 0x1c3d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c3d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c3d34: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1c3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1c3d38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c3d3c: 0x2444f180  addiu       $a0, $v0, -0xE80
    ctx->pc = 0x1c3d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963584));
    // 0x1c3d40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c3d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c3d44: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1c3d44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x48F184u));
    // 0x1c3d48: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1c3d48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x48F18Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F18Cu, _value); } while (0);
    // 0x1c3d4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c3d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3d50:
    // 0x1c3d50: 0x24a4f180  addiu       $a0, $a1, -0xE80
    ctx->pc = 0x1c3d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963584));
    // 0x1c3d54: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1c3d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c3d58: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3D58u;
    {
        const bool branch_taken_0x1c3d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D58u;
        // 0x1c3d5c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d58) {
            ctx->pc = 0x1C3D64u;
            goto label_1c3d64;
        }
    }
    ctx->pc = 0x1C3D60u;
    // 0x1c3d60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c3d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3d64:
    // 0x1c3d64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3D64u;
    {
        const bool branch_taken_0x1c3d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d64) {
            ctx->pc = 0x1C3D74u;
            goto label_1c3d74;
        }
    }
    ctx->pc = 0x1C3D6Cu;
    // 0x1c3d6c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c3d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c3d70: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1c3d70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1c3d74:
    // 0x1c3d74: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C3D74u;
    {
        const bool branch_taken_0x1c3d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d74) {
            ctx->pc = 0x1C3D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3D74u;
            // 0x1c3d78: 0xa0600021  sb          $zero, 0x21($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 33), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3d50;
        }
    }
    ctx->pc = 0x1C3D7Cu;
    // 0x1c3d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c3d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c3d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c3d84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3D84u;
    {
        const bool branch_taken_0x1c3d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D84u;
        // 0x1c3d88: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d84) {
            ctx->pc = 0x1C3DA8u;
            goto label_1c3da8;
        }
    }
    ctx->pc = 0x1C3D8Cu;
    // 0x1c3d8c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c3d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c3d90:
    // 0x1c3d90: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1C3D90u;
    SET_GPR_U32(ctx, 31, 0x1C3D98u);
    ctx->pc = 0x1C3D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D90u;
    // 0x1c3d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1C3D90u, 0x1C3D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D98u;
label_1c3d98:
    // 0x1c3d98: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c3d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c3d9c: 0x0  nop
    ctx->pc = 0x1c3d9cu;
    // NOP
    // 0x1c3da0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C3DA0u;
    {
        const bool branch_taken_0x1c3da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3da0) {
            ctx->pc = 0x1C3DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3DA0u;
            // 0x1c3da4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3d90;
        }
    }
    ctx->pc = 0x1C3DA8u;
label_1c3da8:
    // 0x1c3da8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1c3da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1c3dac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c3dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c3db0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c3db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c3db4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c3db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1c3db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3dbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c3dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DC0u;
        // 0x1c3dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3DC8u;
    // 0x1c3dc8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1c3dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c3dcc: 0x0  nop
    ctx->pc = 0x1c3dccu;
    // NOP
    ctx->pc = 0x1c3dd0u;
}
