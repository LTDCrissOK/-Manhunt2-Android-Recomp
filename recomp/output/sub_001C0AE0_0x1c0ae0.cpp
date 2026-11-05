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

// Function: sub_001C0AE0
// Address: 0x1c0ae0 - 0x1c0c10
void sub_001C0AE0_0x1c0ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0AE0_0x1c0ae0");
#endif

    switch (ctx->pc) {
        case 0x1c0b18u: goto label_1c0b18;
        case 0x1c0b28u: goto label_1c0b28;
        case 0x1c0b30u: goto label_1c0b30;
        case 0x1c0b44u: goto label_1c0b44;
        case 0x1c0b50u: goto label_1c0b50;
        case 0x1c0b60u: goto label_1c0b60;
        case 0x1c0b90u: goto label_1c0b90;
        case 0x1c0ba0u: goto label_1c0ba0;
        case 0x1c0ba8u: goto label_1c0ba8;
        case 0x1c0bdcu: goto label_1c0bdc;
        default: break;
    }

    ctx->pc = 0x1c0ae0u;

    // 0x1c0ae0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c0ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c0ae4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1c0ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1c0ae8: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1c0ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1c0aec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c0aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0af0: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1c0af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x1c0af4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c0af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0af8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1c0af8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1c0afc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c0afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b00: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1c0b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1c0b04: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1c0b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1c0b08: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c0b08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c0b0c: 0x8e020fe8  lw          $v0, 0xFE8($s0)
    ctx->pc = 0x1c0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x1c0b10: 0xc06fad8  jal         func_1BEB60
    ctx->pc = 0x1C0B10u;
    SET_GPR_U32(ctx, 31, 0x1C0B18u);
    ctx->pc = 0x1C0B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B10u;
    // 0x1c0b14: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEB60u, 0x1C0B10u, 0x1C0B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B18u;
label_1c0b18:
    // 0x1c0b18: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c0b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c0b1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c0b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b20: 0xc06fc04  jal         func_1BF010
    ctx->pc = 0x1C0B20u;
    SET_GPR_U32(ctx, 31, 0x1C0B28u);
    ctx->pc = 0x1C0B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B20u;
    // 0x1c0b24: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF010u, 0x1C0B20u, 0x1C0B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B28u;
label_1c0b28:
    // 0x1c0b28: 0xc08951c  jal         func_225470
    ctx->pc = 0x1C0B28u;
    SET_GPR_U32(ctx, 31, 0x1C0B30u);
    ctx->pc = 0x1C0B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B28u;
    // 0x1c0b2c: 0x8e2404bc  lw          $a0, 0x4BC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1C0B28u, 0x1C0B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B30u;
label_1c0b30:
    // 0x1c0b30: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C0B30u;
    {
        const bool branch_taken_0x1c0b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b30) {
            ctx->pc = 0x1C0B88u;
            goto label_1c0b88;
        }
    }
    ctx->pc = 0x1C0B38u;
    // 0x1c0b38: 0x8e2404bc  lw          $a0, 0x4BC($s1)
    ctx->pc = 0x1c0b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1212)));
    // 0x1c0b3c: 0xc08951c  jal         func_225470
    ctx->pc = 0x1C0B3Cu;
    SET_GPR_U32(ctx, 31, 0x1C0B44u);
    ctx->pc = 0x1C0B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B3Cu;
    // 0x1c0b40: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1C0B3Cu, 0x1C0B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B44u;
label_1c0b44:
    // 0x1c0b44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c0b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b48: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1C0B48u;
    SET_GPR_U32(ctx, 31, 0x1C0B50u);
    ctx->pc = 0x1C0B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B48u;
    // 0x1c0b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1C0B48u, 0x1C0B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B50u;
label_1c0b50:
    // 0x1c0b50: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0B50u;
    {
        const bool branch_taken_0x1c0b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b50) {
            ctx->pc = 0x1C0B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0B50u;
            // 0x1c0b54: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0B6Cu;
            goto label_1c0b6c;
        }
    }
    ctx->pc = 0x1C0B58u;
    // 0x1c0b58: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1C0B58u;
    SET_GPR_U32(ctx, 31, 0x1C0B60u);
    ctx->pc = 0x1C0B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B58u;
    // 0x1c0b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1C0B58u, 0x1C0B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B60u;
label_1c0b60:
    // 0x1c0b60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0b64: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C0B64u;
    {
        const bool branch_taken_0x1c0b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c0b64) {
            ctx->pc = 0x1C0B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0B64u;
            // 0x1c0b68: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0B6Cu;
            goto label_1c0b6c;
        }
    }
    ctx->pc = 0x1C0B6Cu;
label_1c0b6c:
    // 0x1c0b6c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0B6Cu;
    {
        const bool branch_taken_0x1c0b6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b6c) {
            ctx->pc = 0x1C0B88u;
            goto label_1c0b88;
        }
    }
    ctx->pc = 0x1C0B74u;
    // 0x1c0b74: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x1c0b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
    // 0x1c0b78: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c0b78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c0b7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c0b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c0b80: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C0B80u;
    {
        const bool branch_taken_0x1c0b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b80) {
            ctx->pc = 0x1C0BBCu;
            goto label_1c0bbc;
        }
    }
    ctx->pc = 0x1C0B88u;
label_1c0b88:
    // 0x1c0b88: 0xc08951c  jal         func_225470
    ctx->pc = 0x1C0B88u;
    SET_GPR_U32(ctx, 31, 0x1C0B90u);
    ctx->pc = 0x1C0B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B88u;
    // 0x1c0b8c: 0x8e2404bc  lw          $a0, 0x4BC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1C0B88u, 0x1C0B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B90u;
label_1c0b90:
    // 0x1c0b90: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C0B90u;
    {
        const bool branch_taken_0x1c0b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b90) {
            ctx->pc = 0x1C0BBCu;
            goto label_1c0bbc;
        }
    }
    ctx->pc = 0x1C0B98u;
    // 0x1c0b98: 0xc08951c  jal         func_225470
    ctx->pc = 0x1C0B98u;
    SET_GPR_U32(ctx, 31, 0x1C0BA0u);
    ctx->pc = 0x1C0B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B98u;
    // 0x1c0b9c: 0x8e2404bc  lw          $a0, 0x4BC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1C0B98u, 0x1C0BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0BA0u;
label_1c0ba0:
    // 0x1c0ba0: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1C0BA0u;
    SET_GPR_U32(ctx, 31, 0x1C0BA8u);
    ctx->pc = 0x1C0BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0BA0u;
    // 0x1c0ba4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1C0BA0u, 0x1C0BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0BA8u;
label_1c0ba8:
    // 0x1c0ba8: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1c0ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1c0bac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0BACu;
    {
        const bool branch_taken_0x1c0bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0bac) {
            ctx->pc = 0x1C0BBCu;
            goto label_1c0bbc;
        }
    }
    ctx->pc = 0x1C0BB4u;
    // 0x1c0bb4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1c0bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1c0bb8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c0bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c0bbc:
    // 0x1c0bbc: 0x3c0140ec  lui         $at, 0x40EC
    ctx->pc = 0x1c0bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16620 << 16));
    // 0x1c0bc0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c0bc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c0bc4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c0bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c0bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c0bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0bcc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c0bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0bd0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1c0bd0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c0bd4: 0xc07032a  jal         func_1C0CA8
    ctx->pc = 0x1C0BD4u;
    SET_GPR_U32(ctx, 31, 0x1C0BDCu);
    ctx->pc = 0x1C0BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0BD4u;
    // 0x1c0bd8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0CA8u, 0x1C0BD4u, 0x1C0BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0BDCu;
label_1c0bdc:
    // 0x1c0bdc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c0bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1c0be0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1c0be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c0be4: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1c0be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1c0be8: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1c0be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c0bec: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1c0becu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c0bf0: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1c0bf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c0bf4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1c0bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c0bf8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1c0bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c0bfc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1c0bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1c0c00: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1c0c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1c0c04: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C04u;
        // 0x1c0c08: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0C0Cu;
    // 0x1c0c0c: 0x0  nop
    ctx->pc = 0x1c0c0cu;
    // NOP
    ctx->pc = 0x1c0c10u;
}
