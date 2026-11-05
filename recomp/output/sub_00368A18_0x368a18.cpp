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

// Function: sub_00368A18
// Address: 0x368a18 - 0x368b58
void sub_00368A18_0x368a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368A18_0x368a18");
#endif

    switch (ctx->pc) {
        case 0x368a3cu: goto label_368a3c;
        case 0x368a44u: goto label_368a44;
        case 0x368a4cu: goto label_368a4c;
        case 0x368a54u: goto label_368a54;
        case 0x368a80u: goto label_368a80;
        case 0x368a88u: goto label_368a88;
        case 0x368a90u: goto label_368a90;
        case 0x368aa0u: goto label_368aa0;
        case 0x368aa8u: goto label_368aa8;
        case 0x368ac0u: goto label_368ac0;
        case 0x368ac8u: goto label_368ac8;
        case 0x368ad0u: goto label_368ad0;
        case 0x368ad8u: goto label_368ad8;
        case 0x368ae0u: goto label_368ae0;
        case 0x368af0u: goto label_368af0;
        case 0x368af8u: goto label_368af8;
        case 0x368b00u: goto label_368b00;
        case 0x368b08u: goto label_368b08;
        case 0x368b34u: goto label_368b34;
        default: break;
    }

    ctx->pc = 0x368a18u;

    // 0x368a18: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x368a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x368a1c: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x368a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x368a20: 0x8c439e40  lw          $v1, -0x61C0($v0)
    ctx->pc = 0x368a20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9E40u));
    // 0x368a24: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x368a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x368a28: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x368a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x368a2c: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x368A2Cu;
    {
        const bool branch_taken_0x368a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x368A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368A2Cu;
        // 0x368a30: 0xffbf0120  sd          $ra, 0x120($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368a2c) {
            ctx->pc = 0x368AE8u;
            goto label_368ae8;
        }
    }
    ctx->pc = 0x368A34u;
    // 0x368a34: 0xc0f3272  jal         func_3CC9C8
    ctx->pc = 0x368A34u;
    SET_GPR_U32(ctx, 31, 0x368A3Cu);
    ctx->pc = 0x368A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368A34u;
    // 0x368a38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC9C8u, 0x368A34u, 0x368A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368A3Cu;
label_368a3c:
    // 0x368a3c: 0xc0f3eaa  jal         func_3CFAA8
    ctx->pc = 0x368A3Cu;
    SET_GPR_U32(ctx, 31, 0x368A44u);
    ctx->pc = 0x368A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368A3Cu;
    // 0x368a40: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CFAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CFAA8u, 0x368A3Cu, 0x368A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368A44u;
label_368a44:
    // 0x368a44: 0xc0f3864  jal         func_3CE190
    ctx->pc = 0x368A44u;
    SET_GPR_U32(ctx, 31, 0x368A4Cu);
    ctx->pc = 0x368A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368A44u;
    // 0x368a48: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE190u, 0x368A44u, 0x368A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368A4Cu;
label_368a4c:
    // 0x368a4c: 0xc0ee1f0  jal         func_3B87C0
    ctx->pc = 0x368A4Cu;
    SET_GPR_U32(ctx, 31, 0x368A54u);
    ctx->pc = 0x368A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368A4Cu;
    // 0x368a50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B87C0u, 0x368A4Cu, 0x368A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368A54u;
label_368a54:
    // 0x368a54: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x368a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x368a58: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x368a58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x368a5c: 0x8c68cbac  lw          $t0, -0x3454($v1)
    ctx->pc = 0x368a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3FCBACu));
    // 0x368a60: 0x3c07004c  lui         $a3, 0x4C
    ctx->pc = 0x368a60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)76 << 16));
    // 0x368a64: 0x3c090047  lui         $t1, 0x47
    ctx->pc = 0x368a64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)71 << 16));
    // 0x368a68: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x368a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x368a6c: 0x24c67978  addiu       $a2, $a2, 0x7978
    ctx->pc = 0x368a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31096));
    // 0x368a70: 0x24e7ec20  addiu       $a3, $a3, -0x13E0
    ctx->pc = 0x368a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962208));
    // 0x368a74: 0x25297980  addiu       $t1, $t1, 0x7980
    ctx->pc = 0x368a74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 31104));
    // 0x368a78: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x368A78u;
    SET_GPR_U32(ctx, 31, 0x368A80u);
    ctx->pc = 0x368A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368A78u;
    // 0x368a7c: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x368A78u, 0x368A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368A80u;
label_368a80:
    // 0x368a80: 0xc09dbf8  jal         func_276FE0
    ctx->pc = 0x368A80u;
    SET_GPR_U32(ctx, 31, 0x368A88u);
    ctx->pc = 0x368A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368A80u;
    // 0x368a84: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FE0u, 0x368A80u, 0x368A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368A88u;
label_368a88:
    // 0x368a88: 0xc0f3fc2  jal         func_3CFF08
    ctx->pc = 0x368A88u;
    SET_GPR_U32(ctx, 31, 0x368A90u);
    ctx->pc = 0x368A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368A88u;
    // 0x368a8c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CFF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CFF08u, 0x368A88u, 0x368A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368A90u;
label_368a90:
    // 0x368a90: 0x0  nop
    ctx->pc = 0x368a90u;
    // NOP
    // 0x368a94: 0x0  nop
    ctx->pc = 0x368a94u;
    // NOP
    // 0x368a98: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x368A98u;
    {
        const bool branch_taken_0x368a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x368a98) {
            ctx->pc = 0x368A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368a88;
        }
    }
    ctx->pc = 0x368AA0u;
label_368aa0:
    // 0x368aa0: 0xc0f3fae  jal         func_3CFEB8
    ctx->pc = 0x368AA0u;
    SET_GPR_U32(ctx, 31, 0x368AA8u);
    ctx->pc = 0x3CFEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CFEB8u, 0x368AA0u, 0x368AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368AA8u;
label_368aa8:
    // 0x368aa8: 0x0  nop
    ctx->pc = 0x368aa8u;
    // NOP
    // 0x368aac: 0x0  nop
    ctx->pc = 0x368aacu;
    // NOP
    // 0x368ab0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x368AB0u;
    {
        const bool branch_taken_0x368ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x368ab0) {
            ctx->pc = 0x368AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368aa0;
        }
    }
    ctx->pc = 0x368AB8u;
    // 0x368ab8: 0xc0f3272  jal         func_3CC9C8
    ctx->pc = 0x368AB8u;
    SET_GPR_U32(ctx, 31, 0x368AC0u);
    ctx->pc = 0x368ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368AB8u;
    // 0x368abc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC9C8u, 0x368AB8u, 0x368AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368AC0u;
label_368ac0:
    // 0x368ac0: 0xc0f3eaa  jal         func_3CFAA8
    ctx->pc = 0x368AC0u;
    SET_GPR_U32(ctx, 31, 0x368AC8u);
    ctx->pc = 0x3CFAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CFAA8u, 0x368AC0u, 0x368AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368AC8u;
label_368ac8:
    // 0x368ac8: 0xc0f3864  jal         func_3CE190
    ctx->pc = 0x368AC8u;
    SET_GPR_U32(ctx, 31, 0x368AD0u);
    ctx->pc = 0x3CE190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE190u, 0x368AC8u, 0x368AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368AD0u;
label_368ad0:
    // 0x368ad0: 0xc0ee1f0  jal         func_3B87C0
    ctx->pc = 0x368AD0u;
    SET_GPR_U32(ctx, 31, 0x368AD8u);
    ctx->pc = 0x368AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368AD0u;
    // 0x368ad4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B87C0u, 0x368AD0u, 0x368AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368AD8u;
label_368ad8:
    // 0x368ad8: 0xc0ee3d6  jal         func_3B8F58
    ctx->pc = 0x368AD8u;
    SET_GPR_U32(ctx, 31, 0x368AE0u);
    ctx->pc = 0x368ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368AD8u;
    // 0x368adc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8F58u, 0x368AD8u, 0x368AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368AE0u;
label_368ae0:
    // 0x368ae0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x368AE0u;
    {
        const bool branch_taken_0x368ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368AE0u;
        // 0x368ae4: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368ae0) {
            ctx->pc = 0x368B0Cu;
            goto label_368b0c;
        }
    }
    ctx->pc = 0x368AE8u;
label_368ae8:
    // 0x368ae8: 0xc0f3272  jal         func_3CC9C8
    ctx->pc = 0x368AE8u;
    SET_GPR_U32(ctx, 31, 0x368AF0u);
    ctx->pc = 0x368AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368AE8u;
    // 0x368aec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC9C8u, 0x368AE8u, 0x368AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368AF0u;
label_368af0:
    // 0x368af0: 0xc0f3dde  jal         func_3CF778
    ctx->pc = 0x368AF0u;
    SET_GPR_U32(ctx, 31, 0x368AF8u);
    ctx->pc = 0x368AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368AF0u;
    // 0x368af4: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CF778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF778u, 0x368AF0u, 0x368AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368AF8u;
label_368af8:
    // 0x368af8: 0xc0f3eaa  jal         func_3CFAA8
    ctx->pc = 0x368AF8u;
    SET_GPR_U32(ctx, 31, 0x368B00u);
    ctx->pc = 0x368AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368AF8u;
    // 0x368afc: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CFAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CFAA8u, 0x368AF8u, 0x368B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368B00u;
label_368b00:
    // 0x368b00: 0xc0f3864  jal         func_3CE190
    ctx->pc = 0x368B00u;
    SET_GPR_U32(ctx, 31, 0x368B08u);
    ctx->pc = 0x3CE190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE190u, 0x368B00u, 0x368B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368B08u;
label_368b08:
    // 0x368b08: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x368b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_368b0c:
    // 0x368b0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x368b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x368b10: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x368b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x368b14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x368b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368b18: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x368b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x368b1c: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x368b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x368b20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x368b20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368b24: 0x24090280  addiu       $t1, $zero, 0x280
    ctx->pc = 0x368b24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x368b28: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x368b28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x368b2c: 0xc0dca7c  jal         func_3729F0
    ctx->pc = 0x368B2Cu;
    SET_GPR_U32(ctx, 31, 0x368B34u);
    ctx->pc = 0x368B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368B2Cu;
    // 0x368b30: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3729F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3729F0u, 0x368B2Cu, 0x368B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368B34u;
label_368b34:
    // 0x368b34: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x368b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x368b38: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x368b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x368b3c: 0xae22cb78  sw          $v0, -0x3488($s1)
    ctx->pc = 0x368b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953848), GPR_U32(ctx, 2));
    // 0x368b40: 0xae03cb7c  sw          $v1, -0x3484($s0)
    ctx->pc = 0x368b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953852), GPR_U32(ctx, 3));
    // 0x368b44: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x368b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x368b48: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x368b48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x368b4c: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x368b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x368b50: 0x3e00008  jr          $ra
    ctx->pc = 0x368B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368B50u;
        // 0x368b54: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368B58u;
}
