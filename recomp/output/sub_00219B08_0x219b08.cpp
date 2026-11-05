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

// Function: sub_00219B08
// Address: 0x219b08 - 0x219c30
void sub_00219B08_0x219b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219B08_0x219b08");
#endif

    switch (ctx->pc) {
        case 0x219b30u: goto label_219b30;
        case 0x219b40u: goto label_219b40;
        case 0x219b5cu: goto label_219b5c;
        case 0x219b68u: goto label_219b68;
        case 0x219b78u: goto label_219b78;
        case 0x219b8cu: goto label_219b8c;
        case 0x219b98u: goto label_219b98;
        case 0x219ba0u: goto label_219ba0;
        case 0x219ba8u: goto label_219ba8;
        case 0x219bb0u: goto label_219bb0;
        case 0x219bc8u: goto label_219bc8;
        case 0x219bd4u: goto label_219bd4;
        case 0x219be8u: goto label_219be8;
        case 0x219bf8u: goto label_219bf8;
        case 0x219c04u: goto label_219c04;
        case 0x219c10u: goto label_219c10;
        default: break;
    }

    ctx->pc = 0x219b08u;

    // 0x219b08: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x219b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x219b0c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x219b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x219b10: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x219b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x219b14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b18: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x219b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x219b1c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x219b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x219b20: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x219b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x219b24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x219b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x219b28: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x219B28u;
    SET_GPR_U32(ctx, 31, 0x219B30u);
    ctx->pc = 0x219B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B28u;
    // 0x219b2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x219B28u, 0x219B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B30u;
label_219b30:
    // 0x219b30: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x219b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x219b34: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x219b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x219b38: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x219B38u;
    SET_GPR_U32(ctx, 31, 0x219B40u);
    ctx->pc = 0x219B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B38u;
    // 0x219b3c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x219B38u, 0x219B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B40u;
label_219b40:
    // 0x219b40: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x219b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x219b44: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x219b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x219b48: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x219b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x219b4c: 0x24513570  addiu       $s1, $v0, 0x3570
    ctx->pc = 0x219b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 13680));
    // 0x219b50: 0x2472fe40  addiu       $s2, $v1, -0x1C0
    ctx->pc = 0x219b50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
    // 0x219b54: 0xc09eb20  jal         func_27AC80
    ctx->pc = 0x219B54u;
    SET_GPR_U32(ctx, 31, 0x219B5Cu);
    ctx->pc = 0x219B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B54u;
    // 0x219b58: 0x2484edf0  addiu       $a0, $a0, -0x1210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x219B54u, 0x219B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B5Cu;
label_219b5c:
    // 0x219b5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x219b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b60: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x219B60u;
    SET_GPR_U32(ctx, 31, 0x219B68u);
    ctx->pc = 0x219B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B60u;
    // 0x219b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x219B60u, 0x219B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B68u;
label_219b68:
    // 0x219b68: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x219b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x219b6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b70: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x219B70u;
    SET_GPR_U32(ctx, 31, 0x219B78u);
    ctx->pc = 0x219B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B70u;
    // 0x219b74: 0x24a5ee70  addiu       $a1, $a1, -0x1190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x219B70u, 0x219B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B78u;
label_219b78:
    // 0x219b78: 0x16000019  bnez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x219B78u;
    {
        const bool branch_taken_0x219b78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x219B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B78u;
        // 0x219b7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b78) {
            ctx->pc = 0x219BE0u;
            goto label_219be0;
        }
    }
    ctx->pc = 0x219B80u;
    // 0x219b80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b84: 0xc09dd98  jal         func_277660
    ctx->pc = 0x219B84u;
    SET_GPR_U32(ctx, 31, 0x219B8Cu);
    ctx->pc = 0x219B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B84u;
    // 0x219b88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x219B84u, 0x219B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B8Cu;
label_219b8c:
    // 0x219b8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x219B8Cu;
    {
        const bool branch_taken_0x219b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B8Cu;
        // 0x219b90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b8c) {
            ctx->pc = 0x219BE0u;
            goto label_219be0;
        }
    }
    ctx->pc = 0x219B94u;
    // 0x219b94: 0x0  nop
    ctx->pc = 0x219b94u;
    // NOP
label_219b98:
    // 0x219b98: 0xc08670c  jal         func_219C30
    ctx->pc = 0x219B98u;
    SET_GPR_U32(ctx, 31, 0x219BA0u);
    ctx->pc = 0x219B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B98u;
    // 0x219b9c: 0x3c110046  lui         $s1, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219C30u, 0x219B98u, 0x219BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219BA0u;
label_219ba0:
    // 0x219ba0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x219BA0u;
    {
        const bool branch_taken_0x219ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BA0u;
        // 0x219ba4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ba0) {
            ctx->pc = 0x219BC8u;
            goto label_219bc8;
        }
    }
    ctx->pc = 0x219BA8u;
label_219ba8:
    // 0x219ba8: 0xc089420  jal         func_225080
    ctx->pc = 0x219BA8u;
    SET_GPR_U32(ctx, 31, 0x219BB0u);
    ctx->pc = 0x219BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219BA8u;
    // 0x219bac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225080u, 0x219BA8u, 0x219BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219BB0u;
label_219bb0:
    // 0x219bb0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x219BB0u;
    {
        const bool branch_taken_0x219bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BB0u;
        // 0x219bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bb0) {
            ctx->pc = 0x219BCCu;
            goto label_219bcc;
        }
    }
    ctx->pc = 0x219BB8u;
    // 0x219bb8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x219bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219bbc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x219bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x219bc0: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x219BC0u;
    SET_GPR_U32(ctx, 31, 0x219BC8u);
    ctx->pc = 0x219BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219BC0u;
    // 0x219bc4: 0x26251750  addiu       $a1, $s1, 0x1750 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x219BC0u, 0x219BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219BC8u;
label_219bc8:
    // 0x219bc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_219bcc:
    // 0x219bcc: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x219BCCu;
    SET_GPR_U32(ctx, 31, 0x219BD4u);
    ctx->pc = 0x219BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219BCCu;
    // 0x219bd0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x219BCCu, 0x219BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219BD4u;
label_219bd4:
    // 0x219bd4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x219BD4u;
    {
        const bool branch_taken_0x219bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BD4u;
        // 0x219bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bd4) {
            ctx->pc = 0x219BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219ba8;
        }
    }
    ctx->pc = 0x219BDCu;
    // 0x219bdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_219be0:
    // 0x219be0: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x219BE0u;
    SET_GPR_U32(ctx, 31, 0x219BE8u);
    ctx->pc = 0x219BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219BE0u;
    // 0x219be4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x219BE0u, 0x219BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219BE8u;
label_219be8:
    // 0x219be8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x219BE8u;
    {
        const bool branch_taken_0x219be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BE8u;
        // 0x219bec: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219be8) {
            ctx->pc = 0x219B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219b98;
        }
    }
    ctx->pc = 0x219BF0u;
    // 0x219bf0: 0xc09ddec  jal         func_2777B0
    ctx->pc = 0x219BF0u;
    SET_GPR_U32(ctx, 31, 0x219BF8u);
    ctx->pc = 0x219BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219BF0u;
    // 0x219bf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x219BF0u, 0x219BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219BF8u;
label_219bf8:
    // 0x219bf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x219bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219bfc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x219BFCu;
    SET_GPR_U32(ctx, 31, 0x219C04u);
    ctx->pc = 0x219C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219BFCu;
    // 0x219c00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x219BFCu, 0x219C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219C04u;
label_219c04:
    // 0x219c04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x219c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c08: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x219C08u;
    SET_GPR_U32(ctx, 31, 0x219C10u);
    ctx->pc = 0x219C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219C08u;
    // 0x219c0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x219C08u, 0x219C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219C10u;
label_219c10:
    // 0x219c10: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x219c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x219c14: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x219c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x219c18: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x219c18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x219c1c: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x219c1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x219c20: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x219c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x219c24: 0x3e00008  jr          $ra
    ctx->pc = 0x219C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C24u;
        // 0x219c28: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219C2Cu;
    // 0x219c2c: 0x0  nop
    ctx->pc = 0x219c2cu;
    // NOP
    ctx->pc = 0x219c30u;
}
