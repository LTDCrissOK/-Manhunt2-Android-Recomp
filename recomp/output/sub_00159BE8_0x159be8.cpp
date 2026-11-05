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

// Function: sub_00159BE8
// Address: 0x159be8 - 0x159d00
void sub_00159BE8_0x159be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159BE8_0x159be8");
#endif

    switch (ctx->pc) {
        case 0x159c1cu: goto label_159c1c;
        case 0x159c50u: goto label_159c50;
        case 0x159c88u: goto label_159c88;
        case 0x159cc0u: goto label_159cc0;
        case 0x159cecu: goto label_159cec;
        default: break;
    }

    ctx->pc = 0x159be8u;

    // 0x159be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x159bec: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x159becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x159bf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159bf4: 0x24420ca8  addiu       $v0, $v0, 0xCA8
    ctx->pc = 0x159bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3240));
    // 0x159bf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x159bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x159bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x159bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159c00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x159c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x159c04: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x159c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x159c08: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x159c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x159c0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159C0Cu;
    {
        const bool branch_taken_0x159c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x159C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C0Cu;
        // 0x159c10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c0c) {
            ctx->pc = 0x159C1Cu;
            goto label_159c1c;
        }
    }
    ctx->pc = 0x159C14u;
    // 0x159c14: 0xc056758  jal         func_159D60
    ctx->pc = 0x159C14u;
    SET_GPR_U32(ctx, 31, 0x159C1Cu);
    ctx->pc = 0x159D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159D60u, 0x159C14u, 0x159C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159C1Cu;
label_159c1c:
    // 0x159c1c: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x159c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x159c20: 0x26040a24  addiu       $a0, $s0, 0xA24
    ctx->pc = 0x159c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2596));
    // 0x159c24: 0x26060320  addiu       $a2, $s0, 0x320
    ctx->pc = 0x159c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x159c28: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x159c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x159c2c: 0x26080210  addiu       $t0, $s0, 0x210
    ctx->pc = 0x159c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x159c30: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x159c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x159c34: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x159C34u;
    {
        const bool branch_taken_0x159c34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x159C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C34u;
        // 0x159c38: 0x3c090043  lui         $t1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c34) {
            ctx->pc = 0x159C68u;
            goto label_159c68;
        }
    }
    ctx->pc = 0x159C3Cu;
    // 0x159c3c: 0x26030b64  addiu       $v1, $s0, 0xB64
    ctx->pc = 0x159c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2916));
    // 0x159c40: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x159C40u;
    {
        const bool branch_taken_0x159c40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x159c40) {
            ctx->pc = 0x159C68u;
            goto label_159c68;
        }
    }
    ctx->pc = 0x159C48u;
    // 0x159c48: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x159c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x159c4c: 0x0  nop
    ctx->pc = 0x159c4cu;
    // NOP
label_159c50:
    // 0x159c50: 0x0  nop
    ctx->pc = 0x159c50u;
    // NOP
    // 0x159c54: 0x0  nop
    ctx->pc = 0x159c54u;
    // NOP
    // 0x159c58: 0x0  nop
    ctx->pc = 0x159c58u;
    // NOP
    // 0x159c5c: 0x0  nop
    ctx->pc = 0x159c5cu;
    // NOP
    // 0x159c60: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x159C60u;
    {
        const bool branch_taken_0x159c60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x159c60) {
            ctx->pc = 0x159C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159C60u;
            // 0x159c64: 0x2463ffec  addiu       $v1, $v1, -0x14 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159c50;
        }
    }
    ctx->pc = 0x159C68u;
label_159c68:
    // 0x159c68: 0x50c0000e  beql        $a2, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x159C68u;
    {
        const bool branch_taken_0x159c68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x159c68) {
            ctx->pc = 0x159C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159C68u;
            // 0x159c6c: 0x24420698  addiu       $v0, $v0, 0x698 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1688));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159CA4u;
            goto label_159ca4;
        }
    }
    ctx->pc = 0x159C70u;
    // 0x159c70: 0x26030a20  addiu       $v1, $s0, 0xA20
    ctx->pc = 0x159c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2592));
    // 0x159c74: 0x50c3000b  beql        $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x159C74u;
    {
        const bool branch_taken_0x159c74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x159c74) {
            ctx->pc = 0x159C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159C74u;
            // 0x159c78: 0x24420698  addiu       $v0, $v0, 0x698 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1688));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159CA4u;
            goto label_159ca4;
        }
    }
    ctx->pc = 0x159C7Cu;
    // 0x159c7c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x159c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159c80: 0x2463ff90  addiu       $v1, $v1, -0x70
    ctx->pc = 0x159c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967184));
    // 0x159c84: 0x0  nop
    ctx->pc = 0x159c84u;
    // NOP
label_159c88:
    // 0x159c88: 0x0  nop
    ctx->pc = 0x159c88u;
    // NOP
    // 0x159c8c: 0x0  nop
    ctx->pc = 0x159c8cu;
    // NOP
    // 0x159c90: 0x0  nop
    ctx->pc = 0x159c90u;
    // NOP
    // 0x159c94: 0x0  nop
    ctx->pc = 0x159c94u;
    // NOP
    // 0x159c98: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x159C98u;
    {
        const bool branch_taken_0x159c98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x159c98) {
            ctx->pc = 0x159C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159C98u;
            // 0x159c9c: 0x2463ff90  addiu       $v1, $v1, -0x70 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967184));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159c88;
        }
    }
    ctx->pc = 0x159CA0u;
    // 0x159ca0: 0x24420698  addiu       $v0, $v0, 0x698
    ctx->pc = 0x159ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1688));
label_159ca4:
    // 0x159ca4: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x159CA4u;
    {
        const bool branch_taken_0x159ca4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x159CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CA4u;
        // 0x159ca8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ca4) {
            ctx->pc = 0x159CD8u;
            goto label_159cd8;
        }
    }
    ctx->pc = 0x159CACu;
    // 0x159cac: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x159cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159cb0: 0x50e2000a  beql        $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x159CB0u;
    {
        const bool branch_taken_0x159cb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x159cb0) {
            ctx->pc = 0x159CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159CB0u;
            // 0x159cb4: 0x25220638  addiu       $v0, $t1, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159CDCu;
            goto label_159cdc;
        }
    }
    ctx->pc = 0x159CB8u;
    // 0x159cb8: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x159cb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159cbc: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x159cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_159cc0:
    // 0x159cc0: 0x0  nop
    ctx->pc = 0x159cc0u;
    // NOP
    // 0x159cc4: 0x0  nop
    ctx->pc = 0x159cc4u;
    // NOP
    // 0x159cc8: 0x0  nop
    ctx->pc = 0x159cc8u;
    // NOP
    // 0x159ccc: 0x0  nop
    ctx->pc = 0x159cccu;
    // NOP
    // 0x159cd0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x159CD0u;
    {
        const bool branch_taken_0x159cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x159CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CD0u;
        // 0x159cd4: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159cd0) {
            ctx->pc = 0x159CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159cc0;
        }
    }
    ctx->pc = 0x159CD8u;
label_159cd8:
    // 0x159cd8: 0x25220638  addiu       $v0, $t1, 0x638
    ctx->pc = 0x159cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1592));
label_159cdc:
    // 0x159cdc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159CDCu;
    {
        const bool branch_taken_0x159cdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x159CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CDCu;
        // 0x159ce0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159cdc) {
            ctx->pc = 0x159CECu;
            goto label_159cec;
        }
    }
    ctx->pc = 0x159CE4u;
    // 0x159ce4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x159CE4u;
    SET_GPR_U32(ctx, 31, 0x159CECu);
    ctx->pc = 0x159CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159CE4u;
    // 0x159ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x159CE4u, 0x159CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159CECu;
label_159cec:
    // 0x159cec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x159cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159cf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x159cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x159cf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x159cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x159CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CF8u;
        // 0x159cfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159D00u;
}
