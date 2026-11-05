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

// Function: sub_00151AB8
// Address: 0x151ab8 - 0x151c20
void sub_00151AB8_0x151ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151AB8_0x151ab8");
#endif

    switch (ctx->pc) {
        case 0x151ae4u: goto label_151ae4;
        case 0x151af0u: goto label_151af0;
        case 0x151b00u: goto label_151b00;
        case 0x151b0cu: goto label_151b0c;
        case 0x151b20u: goto label_151b20;
        case 0x151b30u: goto label_151b30;
        case 0x151b3cu: goto label_151b3c;
        case 0x151b48u: goto label_151b48;
        case 0x151b74u: goto label_151b74;
        case 0x151b88u: goto label_151b88;
        case 0x151b94u: goto label_151b94;
        case 0x151ba0u: goto label_151ba0;
        case 0x151bccu: goto label_151bcc;
        case 0x151bdcu: goto label_151bdc;
        case 0x151be4u: goto label_151be4;
        case 0x151bf0u: goto label_151bf0;
        case 0x151bfcu: goto label_151bfc;
        default: break;
    }

    ctx->pc = 0x151ab8u;

    // 0x151ab8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x151ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x151abc: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x151abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x151ac0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x151ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x151ac4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x151ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ac8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x151ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151acc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x151accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x151ad0: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x151ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x151ad4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x151ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x151ad8: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x151ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x151adc: 0xc0f700e  jal         func_3DC038
    ctx->pc = 0x151ADCu;
    SET_GPR_U32(ctx, 31, 0x151AE4u);
    ctx->pc = 0x151AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151ADCu;
    // 0x151ae0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC038u, 0x151ADCu, 0x151AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151AE4u;
label_151ae4:
    // 0x151ae4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x151ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ae8: 0xc0f7028  jal         func_3DC0A0
    ctx->pc = 0x151AE8u;
    SET_GPR_U32(ctx, 31, 0x151AF0u);
    ctx->pc = 0x151AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151AE8u;
    // 0x151aec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC0A0u, 0x151AE8u, 0x151AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151AF0u;
label_151af0:
    // 0x151af0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x151af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x151af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151af8: 0xc0f6686  jal         func_3D9A18
    ctx->pc = 0x151AF8u;
    SET_GPR_U32(ctx, 31, 0x151B00u);
    ctx->pc = 0x151AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151AF8u;
    // 0x151afc: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9A18u, 0x151AF8u, 0x151B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151B00u;
label_151b00:
    // 0x151b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b04: 0xc0f66a0  jal         func_3D9A80
    ctx->pc = 0x151B04u;
    SET_GPR_U32(ctx, 31, 0x151B0Cu);
    ctx->pc = 0x151B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B04u;
    // 0x151b08: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9A80u, 0x151B04u, 0x151B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151B0Cu;
label_151b0c:
    // 0x151b0c: 0x8e530468  lw          $s3, 0x468($s2)
    ctx->pc = 0x151b0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1128)));
    // 0x151b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x151b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x151b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b18: 0xc040c2c  jal         func_1030B0
    ctx->pc = 0x151B18u;
    SET_GPR_U32(ctx, 31, 0x151B20u);
    ctx->pc = 0x151B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B18u;
    // 0x151b1c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1030B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1030B0u, 0x151B18u, 0x151B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151B20u;
label_151b20:
    // 0x151b20: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x151B20u;
    {
        const bool branch_taken_0x151b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B20u;
        // 0x151b24: 0x26500918  addiu       $s0, $s2, 0x918 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b20) {
            ctx->pc = 0x151BD4u;
            goto label_151bd4;
        }
    }
    ctx->pc = 0x151B28u;
    // 0x151b28: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x151B28u;
    {
        const bool branch_taken_0x151b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151b28) {
            ctx->pc = 0x151B6Cu;
            goto label_151b6c;
        }
    }
    ctx->pc = 0x151B30u;
label_151b30:
    // 0x151b30: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x151b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x151b34: 0xc0f7044  jal         func_3DC110
    ctx->pc = 0x151B34u;
    SET_GPR_U32(ctx, 31, 0x151B3Cu);
    ctx->pc = 0x151B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B34u;
    // 0x151b38: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC110u, 0x151B34u, 0x151B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151B3Cu;
label_151b3c:
    // 0x151b3c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x151b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151b40: 0xc058258  jal         func_160960
    ctx->pc = 0x151B40u;
    SET_GPR_U32(ctx, 31, 0x151B48u);
    ctx->pc = 0x151B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B40u;
    // 0x151b44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160960u, 0x151B40u, 0x151B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151B48u;
label_151b48:
    // 0x151b48: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x151B48u;
    {
        const bool branch_taken_0x151b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B48u;
        // 0x151b4c: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b48) {
            ctx->pc = 0x151B6Cu;
            goto label_151b6c;
        }
    }
    ctx->pc = 0x151B50u;
    // 0x151b50: 0x92420938  lbu         $v0, 0x938($s2)
    ctx->pc = 0x151b50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2360)));
    // 0x151b54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x151b58: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x151b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x151b5c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x151b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x151b60: 0x92430938  lbu         $v1, 0x938($s2)
    ctx->pc = 0x151b60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2360)));
    // 0x151b64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x151b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x151b68: 0xa2430938  sb          $v1, 0x938($s2)
    ctx->pc = 0x151b68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2360), (uint8_t)GPR_U32(ctx, 3));
label_151b6c:
    // 0x151b6c: 0xc0f6770  jal         func_3D9DC0
    ctx->pc = 0x151B6Cu;
    SET_GPR_U32(ctx, 31, 0x151B74u);
    ctx->pc = 0x151B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B6Cu;
    // 0x151b70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9DC0u, 0x151B6Cu, 0x151B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151B74u;
label_151b74:
    // 0x151b74: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x151B74u;
    {
        const bool branch_taken_0x151b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B74u;
        // 0x151b78: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b74) {
            ctx->pc = 0x151B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151b30;
        }
    }
    ctx->pc = 0x151B7Cu;
    // 0x151b7c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x151B7Cu;
    {
        const bool branch_taken_0x151b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B7Cu;
        // 0x151b80: 0x2650093c  addiu       $s0, $s2, 0x93C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b7c) {
            ctx->pc = 0x151BC4u;
            goto label_151bc4;
        }
    }
    ctx->pc = 0x151B84u;
    // 0x151b84: 0x0  nop
    ctx->pc = 0x151b84u;
    // NOP
label_151b88:
    // 0x151b88: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x151b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x151b8c: 0xc0f66dc  jal         func_3D9B70
    ctx->pc = 0x151B8Cu;
    SET_GPR_U32(ctx, 31, 0x151B94u);
    ctx->pc = 0x151B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B8Cu;
    // 0x151b90: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9B70u, 0x151B8Cu, 0x151B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151B94u;
label_151b94:
    // 0x151b94: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x151b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x151b98: 0xc058242  jal         func_160908
    ctx->pc = 0x151B98u;
    SET_GPR_U32(ctx, 31, 0x151BA0u);
    ctx->pc = 0x151B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B98u;
    // 0x151b9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160908u, 0x151B98u, 0x151BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151BA0u;
label_151ba0:
    // 0x151ba0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x151BA0u;
    {
        const bool branch_taken_0x151ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151BA0u;
        // 0x151ba4: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ba0) {
            ctx->pc = 0x151BC4u;
            goto label_151bc4;
        }
    }
    ctx->pc = 0x151BA8u;
    // 0x151ba8: 0x9242095c  lbu         $v0, 0x95C($s2)
    ctx->pc = 0x151ba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2396)));
    // 0x151bac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x151bb0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x151bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x151bb4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x151bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x151bb8: 0x9243095c  lbu         $v1, 0x95C($s2)
    ctx->pc = 0x151bb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2396)));
    // 0x151bbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x151bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x151bc0: 0xa243095c  sb          $v1, 0x95C($s2)
    ctx->pc = 0x151bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2396), (uint8_t)GPR_U32(ctx, 3));
label_151bc4:
    // 0x151bc4: 0xc0f6772  jal         func_3D9DC8
    ctx->pc = 0x151BC4u;
    SET_GPR_U32(ctx, 31, 0x151BCCu);
    ctx->pc = 0x151BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151BC4u;
    // 0x151bc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9DC8u, 0x151BC4u, 0x151BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151BCCu;
label_151bcc:
    // 0x151bcc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x151BCCu;
    {
        const bool branch_taken_0x151bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151BCCu;
        // 0x151bd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151bcc) {
            ctx->pc = 0x151B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151b88;
        }
    }
    ctx->pc = 0x151BD4u;
label_151bd4:
    // 0x151bd4: 0xc0f706e  jal         func_3DC1B8
    ctx->pc = 0x151BD4u;
    SET_GPR_U32(ctx, 31, 0x151BDCu);
    ctx->pc = 0x151BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151BD4u;
    // 0x151bd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC1B8u, 0x151BD4u, 0x151BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151BDCu;
label_151bdc:
    // 0x151bdc: 0xc0f6726  jal         func_3D9C98
    ctx->pc = 0x151BDCu;
    SET_GPR_U32(ctx, 31, 0x151BE4u);
    ctx->pc = 0x151BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151BDCu;
    // 0x151be0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9C98u, 0x151BDCu, 0x151BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151BE4u;
label_151be4:
    // 0x151be4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x151be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151be8: 0xc0f6676  jal         func_3D99D8
    ctx->pc = 0x151BE8u;
    SET_GPR_U32(ctx, 31, 0x151BF0u);
    ctx->pc = 0x151BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151BE8u;
    // 0x151bec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D99D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D99D8u, 0x151BE8u, 0x151BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151BF0u;
label_151bf0:
    // 0x151bf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x151bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151bf4: 0xc0f6ffe  jal         func_3DBFF8
    ctx->pc = 0x151BF4u;
    SET_GPR_U32(ctx, 31, 0x151BFCu);
    ctx->pc = 0x151BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151BF4u;
    // 0x151bf8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBFF8u, 0x151BF4u, 0x151BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151BFCu;
label_151bfc:
    // 0x151bfc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x151bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151c00: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x151c00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151c04: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x151c04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151c08: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x151c08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x151c0c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x151c0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x151c10: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x151c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x151c14: 0x3e00008  jr          $ra
    ctx->pc = 0x151C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C14u;
        // 0x151c18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151C1Cu;
    // 0x151c1c: 0x0  nop
    ctx->pc = 0x151c1cu;
    // NOP
    ctx->pc = 0x151c20u;
}
