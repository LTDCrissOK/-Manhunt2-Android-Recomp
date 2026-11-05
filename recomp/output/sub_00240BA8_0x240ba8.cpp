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

// Function: sub_00240BA8
// Address: 0x240ba8 - 0x240de8
void sub_00240BA8_0x240ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240BA8_0x240ba8");
#endif

    switch (ctx->pc) {
        case 0x240bd8u: goto label_240bd8;
        case 0x240c18u: goto label_240c18;
        case 0x240c3cu: goto label_240c3c;
        case 0x240c58u: goto label_240c58;
        case 0x240c80u: goto label_240c80;
        case 0x240ca8u: goto label_240ca8;
        case 0x240d00u: goto label_240d00;
        case 0x240d0cu: goto label_240d0c;
        case 0x240d38u: goto label_240d38;
        case 0x240d48u: goto label_240d48;
        case 0x240d58u: goto label_240d58;
        case 0x240d68u: goto label_240d68;
        case 0x240d78u: goto label_240d78;
        case 0x240da8u: goto label_240da8;
        case 0x240dc4u: goto label_240dc4;
        default: break;
    }

    ctx->pc = 0x240ba8u;

    // 0x240ba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240bac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x240bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x240bb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240bb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x240bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240bb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x240bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x240bbc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x240bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x240bc0: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x240bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x240bc4: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x240bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x240bc8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x240BC8u;
    {
        const bool branch_taken_0x240bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BC8u;
        // 0x240bcc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bc8) {
            ctx->pc = 0x240BF8u;
            goto label_240bf8;
        }
    }
    ctx->pc = 0x240BD0u;
    // 0x240bd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240bd4: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x240bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_240bd8:
    // 0x240bd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x240bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240bdc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x240BDCu;
    {
        const bool branch_taken_0x240bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240bdc) {
            ctx->pc = 0x240BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240BDCu;
            // 0x240be0: 0x9442002a  lhu         $v0, 0x2A($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240BFCu;
            goto label_240bfc;
        }
    }
    ctx->pc = 0x240BE4u;
    // 0x240be4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x240be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x240be8: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x240be8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x240bec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x240BECu;
    {
        const bool branch_taken_0x240bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BECu;
        // 0x240bf0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bec) {
            ctx->pc = 0x240BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240bd8;
        }
    }
    ctx->pc = 0x240BF4u;
    // 0x240bf4: 0x8c8201e8  lw          $v0, 0x1E8($a0)
    ctx->pc = 0x240bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
label_240bf8:
    // 0x240bf8: 0x9442002a  lhu         $v0, 0x2A($v0)
    ctx->pc = 0x240bf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
label_240bfc:
    // 0x240bfc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x240bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x240c00: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x240C00u;
    {
        const bool branch_taken_0x240c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C00u;
        // 0x240c04: 0x8ce401e4  lw          $a0, 0x1E4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c00) {
            ctx->pc = 0x240C44u;
            goto label_240c44;
        }
    }
    ctx->pc = 0x240C08u;
    // 0x240c08: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x240C08u;
    {
        const bool branch_taken_0x240c08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x240C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C08u;
        // 0x240c0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c08) {
            ctx->pc = 0x240C34u;
            goto label_240c34;
        }
    }
    ctx->pc = 0x240C10u;
    // 0x240c10: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x240c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
    // 0x240c14: 0x0  nop
    ctx->pc = 0x240c14u;
    // NOP
label_240c18:
    // 0x240c18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x240c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240c1c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240C1Cu;
    {
        const bool branch_taken_0x240c1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x240C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C1Cu;
        // 0x240c20: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c1c) {
            ctx->pc = 0x240C34u;
            goto label_240c34;
        }
    }
    ctx->pc = 0x240C24u;
    // 0x240c24: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x240c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x240c28: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x240C28u;
    {
        const bool branch_taken_0x240c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C28u;
        // 0x240c2c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c28) {
            ctx->pc = 0x240C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240c18;
        }
    }
    ctx->pc = 0x240C30u;
    // 0x240c30: 0x8ce401e8  lw          $a0, 0x1E8($a3)
    ctx->pc = 0x240c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_240c34:
    // 0x240c34: 0xc0915d4  jal         func_245750
    ctx->pc = 0x240C34u;
    SET_GPR_U32(ctx, 31, 0x240C3Cu);
    ctx->pc = 0x240C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C34u;
    // 0x240c38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245750u, 0x240C34u, 0x240C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C3Cu;
label_240c3c:
    // 0x240c3c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x240C3Cu;
    {
        const bool branch_taken_0x240c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C3Cu;
        // 0x240c40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c3c) {
            ctx->pc = 0x240DD4u;
            goto label_240dd4;
        }
    }
    ctx->pc = 0x240C44u;
label_240c44:
    // 0x240c44: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x240C44u;
    {
        const bool branch_taken_0x240c44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x240C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C44u;
        // 0x240c48: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c44) {
            ctx->pc = 0x240C74u;
            goto label_240c74;
        }
    }
    ctx->pc = 0x240C4Cu;
    // 0x240c4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x240c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c50: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x240c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
    // 0x240c54: 0x0  nop
    ctx->pc = 0x240c54u;
    // NOP
label_240c58:
    // 0x240c58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x240c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240c5c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240C5Cu;
    {
        const bool branch_taken_0x240c5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x240C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C5Cu;
        // 0x240c60: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c5c) {
            ctx->pc = 0x240C74u;
            goto label_240c74;
        }
    }
    ctx->pc = 0x240C64u;
    // 0x240c64: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x240c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x240c68: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x240C68u;
    {
        const bool branch_taken_0x240c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C68u;
        // 0x240c6c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c68) {
            ctx->pc = 0x240C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240c58;
        }
    }
    ctx->pc = 0x240C70u;
    // 0x240c70: 0x8ce401e8  lw          $a0, 0x1E8($a3)
    ctx->pc = 0x240c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_240c74:
    // 0x240c74: 0x24a55750  addiu       $a1, $a1, 0x5750
    ctx->pc = 0x240c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22352));
    // 0x240c78: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x240C78u;
    SET_GPR_U32(ctx, 31, 0x240C80u);
    ctx->pc = 0x240C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C78u;
    // 0x240c7c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x240C78u, 0x240C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C80u;
label_240c80:
    // 0x240c80: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x240c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x240c84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240c88: 0xac6200d4  sw          $v0, 0xD4($v1)
    ctx->pc = 0x240c88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 2));
    // 0x240c8c: 0x8e250334  lw          $a1, 0x334($s1)
    ctx->pc = 0x240c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x240c90: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x240c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x240c94: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x240C94u;
    {
        const bool branch_taken_0x240c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240c94) {
            ctx->pc = 0x240C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240C94u;
            // 0x240c98: 0x9442002a  lhu         $v0, 0x2A($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240CC8u;
            goto label_240cc8;
        }
    }
    ctx->pc = 0x240C9Cu;
    // 0x240c9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x240c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ca0: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x240ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
    // 0x240ca4: 0x0  nop
    ctx->pc = 0x240ca4u;
    // NOP
label_240ca8:
    // 0x240ca8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x240ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240cac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240CACu;
    {
        const bool branch_taken_0x240cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CACu;
        // 0x240cb0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cac) {
            ctx->pc = 0x240CC4u;
            goto label_240cc4;
        }
    }
    ctx->pc = 0x240CB4u;
    // 0x240cb4: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x240cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x240cb8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x240CB8u;
    {
        const bool branch_taken_0x240cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CB8u;
        // 0x240cbc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cb8) {
            ctx->pc = 0x240CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240ca8;
        }
    }
    ctx->pc = 0x240CC0u;
    // 0x240cc0: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x240cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_240cc4:
    // 0x240cc4: 0x9442002a  lhu         $v0, 0x2A($v0)
    ctx->pc = 0x240cc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
label_240cc8:
    // 0x240cc8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x240cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x240ccc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x240CCCu;
    {
        const bool branch_taken_0x240ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CCCu;
        // 0x240cd0: 0x240405af  addiu       $a0, $zero, 0x5AF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1455));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ccc) {
            ctx->pc = 0x240D00u;
            goto label_240d00;
        }
    }
    ctx->pc = 0x240CD4u;
    // 0x240cd4: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x240cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x240cd8: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x240cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x240cdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x240cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x240ce0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x240ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x240ce4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x240ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240ce8: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240CE8u;
    {
        const bool branch_taken_0x240ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x240CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CE8u;
        // 0x240cec: 0x240205ae  addiu       $v0, $zero, 0x5AE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1454));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ce8) {
            ctx->pc = 0x240D00u;
            goto label_240d00;
        }
    }
    ctx->pc = 0x240CF0u;
    // 0x240cf0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240CF0u;
    {
        const bool branch_taken_0x240cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CF0u;
        // 0x240cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cf0) {
            ctx->pc = 0x240D00u;
            goto label_240d00;
        }
    }
    ctx->pc = 0x240CF8u;
    // 0x240cf8: 0xc08e40c  jal         func_239030
    ctx->pc = 0x240CF8u;
    SET_GPR_U32(ctx, 31, 0x240D00u);
    ctx->pc = 0x240CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240CF8u;
    // 0x240cfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239030u, 0x240CF8u, 0x240D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D00u;
label_240d00:
    // 0x240d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d04: 0xc08dc16  jal         func_237058
    ctx->pc = 0x240D04u;
    SET_GPR_U32(ctx, 31, 0x240D0Cu);
    ctx->pc = 0x240D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D04u;
    // 0x240d08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x240D04u, 0x240D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D0Cu;
label_240d0c:
    // 0x240d0c: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x240d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x240d10: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x240d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x240d14: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x240d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x240d18: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x240D18u;
    {
        const bool branch_taken_0x240d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x240d18) {
            ctx->pc = 0x240D30u;
            goto label_240d30;
        }
    }
    ctx->pc = 0x240D20u;
    // 0x240d20: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x240d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x240d24: 0x284205b5  slti        $v0, $v0, 0x5B5
    ctx->pc = 0x240d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1461) ? 1 : 0);
    // 0x240d28: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x240D28u;
    {
        const bool branch_taken_0x240d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240d28) {
            ctx->pc = 0x240D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240D28u;
            // 0x240d2c: 0x8e300334  lw          $s0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240D3Cu;
            goto label_240d3c;
        }
    }
    ctx->pc = 0x240D30u;
label_240d30:
    // 0x240d30: 0xc091d94  jal         func_247650
    ctx->pc = 0x240D30u;
    SET_GPR_U32(ctx, 31, 0x240D38u);
    ctx->pc = 0x240D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D30u;
    // 0x240d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247650u, 0x240D30u, 0x240D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D38u;
label_240d38:
    // 0x240d38: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x240d38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_240d3c:
    // 0x240d3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x240d3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d40: 0xc0f7d10  jal         func_3DF440
    ctx->pc = 0x240D40u;
    SET_GPR_U32(ctx, 31, 0x240D48u);
    ctx->pc = 0x240D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D40u;
    // 0x240d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF440u, 0x240D40u, 0x240D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D48u;
label_240d48:
    // 0x240d48: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x240D48u;
    {
        const bool branch_taken_0x240d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240d48) {
            ctx->pc = 0x240D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240D48u;
            // 0x240d4c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240D80u;
            goto label_240d80;
        }
    }
    ctx->pc = 0x240D50u;
    // 0x240d50: 0xc0f7d1a  jal         func_3DF468
    ctx->pc = 0x240D50u;
    SET_GPR_U32(ctx, 31, 0x240D58u);
    ctx->pc = 0x240D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D50u;
    // 0x240d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF468u, 0x240D50u, 0x240D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D58u;
label_240d58:
    // 0x240d58: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x240D58u;
    {
        const bool branch_taken_0x240d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240d58) {
            ctx->pc = 0x240D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240D58u;
            // 0x240d5c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240D80u;
            goto label_240d80;
        }
    }
    ctx->pc = 0x240D60u;
    // 0x240d60: 0xc0f7d24  jal         func_3DF490
    ctx->pc = 0x240D60u;
    SET_GPR_U32(ctx, 31, 0x240D68u);
    ctx->pc = 0x240D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D60u;
    // 0x240d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF490u, 0x240D60u, 0x240D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D68u;
label_240d68:
    // 0x240d68: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x240D68u;
    {
        const bool branch_taken_0x240d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240d68) {
            ctx->pc = 0x240D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240D68u;
            // 0x240d6c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240D80u;
            goto label_240d80;
        }
    }
    ctx->pc = 0x240D70u;
    // 0x240d70: 0xc0f7d32  jal         func_3DF4C8
    ctx->pc = 0x240D70u;
    SET_GPR_U32(ctx, 31, 0x240D78u);
    ctx->pc = 0x240D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D70u;
    // 0x240d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF4C8u, 0x240D70u, 0x240D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D78u;
label_240d78:
    // 0x240d78: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x240D78u;
    {
        const bool branch_taken_0x240d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240d78) {
            ctx->pc = 0x240D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240D78u;
            // 0x240d7c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240D80u;
            goto label_240d80;
        }
    }
    ctx->pc = 0x240D80u;
label_240d80:
    // 0x240d80: 0x5240000b  beql        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x240D80u;
    {
        const bool branch_taken_0x240d80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x240d80) {
            ctx->pc = 0x240D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240D80u;
            // 0x240d84: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240DB0u;
            goto label_240db0;
        }
    }
    ctx->pc = 0x240D88u;
    // 0x240d88: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x240d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x240d8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x240d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x240d90: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x240D90u;
    {
        const bool branch_taken_0x240d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240d90) {
            ctx->pc = 0x240D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240D90u;
            // 0x240d94: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240DC8u;
            goto label_240dc8;
        }
    }
    ctx->pc = 0x240D98u;
    // 0x240d98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x240d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240da0: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x240DA0u;
    SET_GPR_U32(ctx, 31, 0x240DA8u);
    ctx->pc = 0x240DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240DA0u;
    // 0x240da4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x240DA0u, 0x240DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240DA8u;
label_240da8:
    // 0x240da8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x240DA8u;
    {
        const bool branch_taken_0x240da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DA8u;
        // 0x240dac: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240da8) {
            ctx->pc = 0x240DC8u;
            goto label_240dc8;
        }
    }
    ctx->pc = 0x240DB0u;
label_240db0:
    // 0x240db0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x240db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x240db4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x240DB4u;
    {
        const bool branch_taken_0x240db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240db4) {
            ctx->pc = 0x240DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240DB4u;
            // 0x240db8: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240DC8u;
            goto label_240dc8;
        }
    }
    ctx->pc = 0x240DBCu;
    // 0x240dbc: 0xc08dbbc  jal         func_236EF0
    ctx->pc = 0x240DBCu;
    SET_GPR_U32(ctx, 31, 0x240DC4u);
    ctx->pc = 0x240DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240DBCu;
    // 0x240dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236EF0u, 0x240DBCu, 0x240DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240DC4u;
label_240dc4:
    // 0x240dc4: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x240dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_240dc8:
    // 0x240dc8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x240dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x240dcc: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x240dccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x240dd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_240dd4:
    // 0x240dd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x240dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240dd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x240dd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240ddc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x240ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x240de0: 0x3e00008  jr          $ra
    ctx->pc = 0x240DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DE0u;
        // 0x240de4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240DE8u;
}
