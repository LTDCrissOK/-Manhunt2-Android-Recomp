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

// Function: sub_001F40C8
// Address: 0x1f40c8 - 0x1f4440
void sub_001F40C8_0x1f40c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F40C8_0x1f40c8");
#endif

    switch (ctx->pc) {
        case 0x1f4134u: goto label_1f4134;
        case 0x1f4150u: goto label_1f4150;
        case 0x1f4170u: goto label_1f4170;
        case 0x1f4184u: goto label_1f4184;
        case 0x1f41a8u: goto label_1f41a8;
        case 0x1f41b4u: goto label_1f41b4;
        case 0x1f41d4u: goto label_1f41d4;
        case 0x1f41f8u: goto label_1f41f8;
        case 0x1f4204u: goto label_1f4204;
        case 0x1f4224u: goto label_1f4224;
        case 0x1f4348u: goto label_1f4348;
        case 0x1f4368u: goto label_1f4368;
        case 0x1f437cu: goto label_1f437c;
        case 0x1f4388u: goto label_1f4388;
        case 0x1f440cu: goto label_1f440c;
        default: break;
    }

    ctx->pc = 0x1f40c8u;

    // 0x1f40c8: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1f40c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1f40cc: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f40ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f40d0: 0x9103928e  lbu         $v1, -0x6D72($t0)
    ctx->pc = 0x1f40d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F928Eu));
    // 0x1f40d4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f40d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f40d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f40d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f40dc: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1f40dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1f40e0: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1f40e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1f40e4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1f40e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f40e8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1f40e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1f40ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f40ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40f0: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x1f40f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x1f40f4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1f40f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40f8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1f40f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1f40fc: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1f40fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4100: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1f4100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1f4104: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1f4104u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4108: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1f4108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1f410c: 0x30b3ffff  andi        $s3, $a1, 0xFFFF
    ctx->pc = 0x1f410cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1f4110: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1f4110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1f4114: 0x2c420013  sltiu       $v0, $v0, 0x13
    ctx->pc = 0x1f4114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x1f4118: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1f4118u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1f411c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1f411cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f4120: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4120u;
    {
        const bool branch_taken_0x1f4120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4120u;
        // 0x1f4124: 0xa103928e  sb          $v1, -0x6D72($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 4294939278), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4120) {
            ctx->pc = 0x1F412Cu;
            goto label_1f412c;
        }
    }
    ctx->pc = 0x1F4128u;
    // 0x1f4128: 0xa2e0928e  sb          $zero, -0x6D72($s7)
    ctx->pc = 0x1f4128u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 4294939278), (uint8_t)GPR_U32(ctx, 0));
label_1f412c:
    // 0x1f412c: 0xc07bad0  jal         func_1EEB40
    ctx->pc = 0x1F412Cu;
    SET_GPR_U32(ctx, 31, 0x1F4134u);
    ctx->pc = 0x1F4130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F412Cu;
    // 0x1f4130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEB40u, 0x1F412Cu, 0x1F4134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4134u;
label_1f4134:
    // 0x1f4134: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f4134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f413c: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x1f413cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x1f4140: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f4140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4144: 0x28c03  sra         $s1, $v0, 16
    ctx->pc = 0x1f4144u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f4148: 0xc07d110  jal         func_1F4440
    ctx->pc = 0x1F4148u;
    SET_GPR_U32(ctx, 31, 0x1F4150u);
    ctx->pc = 0x1F414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4148u;
    // 0x1f414c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4440u, 0x1F4148u, 0x1F4150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4150u;
label_1f4150:
    // 0x1f4150: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f4150u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4154: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1f4154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1f4158: 0x128200ac  beq         $s4, $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x1F4158u;
    {
        const bool branch_taken_0x1f4158 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4158u;
        // 0x1f415c: 0x3c04005a  lui         $a0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4158) {
            ctx->pc = 0x1F440Cu;
            goto label_1f440c;
        }
    }
    ctx->pc = 0x1F4160u;
    // 0x1f4160: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1f4160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1f4164: 0x24847ee0  addiu       $a0, $a0, 0x7EE0
    ctx->pc = 0x1f4164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32480));
    // 0x1f4168: 0xc0c352e  jal         func_30D4B8
    ctx->pc = 0x1F4168u;
    SET_GPR_U32(ctx, 31, 0x1F4170u);
    ctx->pc = 0x1F416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4168u;
    // 0x1f416c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D4B8u, 0x1F4168u, 0x1F4170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4170u;
label_1f4170:
    // 0x1f4170: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f4170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f4174: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f4174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4178: 0xa20200fc  sb          $v0, 0xFC($s0)
    ctx->pc = 0x1f4178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f417c: 0xc07ba8c  jal         func_1EEA30
    ctx->pc = 0x1F417Cu;
    SET_GPR_U32(ctx, 31, 0x1F4184u);
    ctx->pc = 0x1F4180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F417Cu;
    // 0x1f4180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEA30u, 0x1F417Cu, 0x1F4184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4184u;
label_1f4184:
    // 0x1f4184: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f4184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4188: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1f4188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f418c: 0x1662001f  bne         $s3, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F418Cu;
    {
        const bool branch_taken_0x1f418c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F4190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F418Cu;
        // 0x1f4190: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f418c) {
            ctx->pc = 0x1F420Cu;
            goto label_1f420c;
        }
    }
    ctx->pc = 0x1F4194u;
    // 0x1f4194: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1f4194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f4198: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f4198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f419c: 0x24a5efd0  addiu       $a1, $a1, -0x1030
    ctx->pc = 0x1f419cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
    // 0x1f41a0: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x1F41A0u;
    SET_GPR_U32(ctx, 31, 0x1F41A8u);
    ctx->pc = 0x1F41A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F41A0u;
    // 0x1f41a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x1F41A0u, 0x1F41A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F41A8u;
label_1f41a8:
    // 0x1f41a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f41a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41ac: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x1F41ACu;
    SET_GPR_U32(ctx, 31, 0x1F41B4u);
    ctx->pc = 0x1F41B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F41ACu;
    // 0x1f41b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x1F41ACu, 0x1F41B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F41B4u;
label_1f41b4:
    // 0x1f41b4: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1f41b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1f41b8: 0x920500fc  lbu         $a1, 0xFC($s0)
    ctx->pc = 0x1f41b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x1f41bc: 0x24729c38  addiu       $s2, $v1, -0x63C8
    ctx->pc = 0x1f41bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941752));
    // 0x1f41c0: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1f41c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f41c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f41c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41c8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f41c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41cc: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1F41CCu;
    SET_GPR_U32(ctx, 31, 0x1F41D4u);
    ctx->pc = 0x1F41D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F41CCu;
    // 0x1f41d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F41CCu, 0x1F41D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F41D4u;
label_1f41d4:
    // 0x1f41d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F41D4u;
    {
        const bool branch_taken_0x1f41d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F41D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41D4u;
        // 0x1f41d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f41d4) {
            ctx->pc = 0x1F41FCu;
            goto label_1f41fc;
        }
    }
    ctx->pc = 0x1F41DCu;
    // 0x1f41dc: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1f41dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x1f41e0: 0x920500fc  lbu         $a1, 0xFC($s0)
    ctx->pc = 0x1f41e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x1f41e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f41e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41e8: 0x24c6efe0  addiu       $a2, $a2, -0x1020
    ctx->pc = 0x1f41e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963168));
    // 0x1f41ec: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f41ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41f0: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1F41F0u;
    SET_GPR_U32(ctx, 31, 0x1F41F8u);
    ctx->pc = 0x1F41F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F41F0u;
    // 0x1f41f4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F41F0u, 0x1F41F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F41F8u;
label_1f41f8:
    // 0x1f41f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f41f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f41fc:
    // 0x1f41fc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1F41FCu;
    SET_GPR_U32(ctx, 31, 0x1F4204u);
    ctx->pc = 0x1F4200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F41FCu;
    // 0x1f4200: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1F41FCu, 0x1F4204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4204u;
label_1f4204:
    // 0x1f4204: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F4204u;
    {
        const bool branch_taken_0x1f4204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4204u;
        // 0x1f4208: 0x93a30029  lbu         $v1, 0x29($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4204) {
            ctx->pc = 0x1F4228u;
            goto label_1f4228;
        }
    }
    ctx->pc = 0x1F420Cu;
label_1f420c:
    // 0x1f420c: 0x920500fc  lbu         $a1, 0xFC($s0)
    ctx->pc = 0x1f420cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x1f4210: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x1f4210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    // 0x1f4214: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f4214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4218: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f4218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f421c: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1F421Cu;
    SET_GPR_U32(ctx, 31, 0x1F4224u);
    ctx->pc = 0x1F4220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F421Cu;
    // 0x1f4220: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F421Cu, 0x1F4224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4224u;
label_1f4224:
    // 0x1f4224: 0x93a30029  lbu         $v1, 0x29($sp)
    ctx->pc = 0x1f4224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
label_1f4228:
    // 0x1f4228: 0x2684fff1  addiu       $a0, $s4, -0xF
    ctx->pc = 0x1f4228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967281));
    // 0x1f422c: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x1f422cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f4230: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x1f4230u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f4234: 0x0  nop
    ctx->pc = 0x1f4234u;
    // NOP
    // 0x1f4238: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1f4238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1f423c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1F423Cu;
    {
        const bool branch_taken_0x1f423c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F423Cu;
        // 0x1f4240: 0x93b10028  lbu         $s1, 0x28($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f423c) {
            ctx->pc = 0x1F4310u;
            goto label_1f4310;
        }
    }
    ctx->pc = 0x1F4244u;
    // 0x1f4244: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4248: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f4248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f424c: 0x2442eff0  addiu       $v0, $v0, -0x1010
    ctx->pc = 0x1f424cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963184));
    // 0x1f4250: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f4250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f4254: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f4254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f4258: 0x800008  jr          $a0
    ctx->pc = 0x1F4258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F4260u: goto label_1f4260;
            case 0x1F4280u: goto label_1f4280;
            case 0x1F42A0u: goto label_1f42a0;
            case 0x1F42C0u: goto label_1f42c0;
            case 0x1F42E0u: goto label_1f42e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4258u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F4260u;
label_1f4260:
    // 0x1f4260: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f4260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f4264: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1f4264u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4268: 0x0  nop
    ctx->pc = 0x1f4268u;
    // NOP
    // 0x1f426c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f426cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f4270: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f4270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f4274: 0xc44115f4  lwc1        $f1, 0x15F4($v0)
    ctx->pc = 0x1f4274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4278: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1F4278u;
    {
        const bool branch_taken_0x1f4278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4278u;
        // 0x1f427c: 0xc44215f8  lwc1        $f2, 0x15F8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4278) {
            ctx->pc = 0x1F42FCu;
            goto label_1f42fc;
        }
    }
    ctx->pc = 0x1F4280u;
label_1f4280:
    // 0x1f4280: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f4280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f4284: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1f4284u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4288: 0x0  nop
    ctx->pc = 0x1f4288u;
    // NOP
    // 0x1f428c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f428cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f4290: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f4290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f4294: 0xc44115fc  lwc1        $f1, 0x15FC($v0)
    ctx->pc = 0x1f4294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4298: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F4298u;
    {
        const bool branch_taken_0x1f4298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4298u;
        // 0x1f429c: 0xc4421600  lwc1        $f2, 0x1600($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4298) {
            ctx->pc = 0x1F42FCu;
            goto label_1f42fc;
        }
    }
    ctx->pc = 0x1F42A0u;
label_1f42a0:
    // 0x1f42a0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f42a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f42a4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1f42a4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f42a8: 0x0  nop
    ctx->pc = 0x1f42a8u;
    // NOP
    // 0x1f42ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f42acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f42b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f42b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f42b4: 0xc4411604  lwc1        $f1, 0x1604($v0)
    ctx->pc = 0x1f42b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f42b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F42B8u;
    {
        const bool branch_taken_0x1f42b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F42BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42B8u;
        // 0x1f42bc: 0xc4421608  lwc1        $f2, 0x1608($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f42b8) {
            ctx->pc = 0x1F42FCu;
            goto label_1f42fc;
        }
    }
    ctx->pc = 0x1F42C0u;
label_1f42c0:
    // 0x1f42c0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f42c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f42c4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1f42c4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f42c8: 0x0  nop
    ctx->pc = 0x1f42c8u;
    // NOP
    // 0x1f42cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f42ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f42d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f42d4: 0xc441160c  lwc1        $f1, 0x160C($v0)
    ctx->pc = 0x1f42d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f42d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F42D8u;
    {
        const bool branch_taken_0x1f42d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F42DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42D8u;
        // 0x1f42dc: 0xc4421610  lwc1        $f2, 0x1610($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f42d8) {
            ctx->pc = 0x1F42FCu;
            goto label_1f42fc;
        }
    }
    ctx->pc = 0x1F42E0u;
label_1f42e0:
    // 0x1f42e0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f42e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f42e4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1f42e4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f42e8: 0x0  nop
    ctx->pc = 0x1f42e8u;
    // NOP
    // 0x1f42ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f42ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f42f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f42f4: 0xc4411614  lwc1        $f1, 0x1614($v0)
    ctx->pc = 0x1f42f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f42f8: 0xc4421618  lwc1        $f2, 0x1618($v0)
    ctx->pc = 0x1f42f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f42fc:
    // 0x1f42fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f42fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f4300: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x1f4300u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1f4304: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f4304u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f4308: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f4308u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f430c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1f430cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f4310:
    // 0x1f4310: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x1f4310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4314: 0x4614a542  mul.s       $f21, $f20, $f20
    ctx->pc = 0x1f4314u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1f4318: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1f4318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1f431c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f431cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1f4320: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f4320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4324: 0x0  nop
    ctx->pc = 0x1f4324u;
    // NOP
    // 0x1f4328: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f4328u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f432c: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x1f432cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x1f4330: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1f4330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1f4334: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F4334u;
    {
        const bool branch_taken_0x1f4334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4334u;
        // 0x1f4338: 0x26120130  addiu       $s2, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4334) {
            ctx->pc = 0x1F4368u;
            goto label_1f4368;
        }
    }
    ctx->pc = 0x1F433Cu;
    // 0x1f433c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f433cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4340: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1F4340u;
    SET_GPR_U32(ctx, 31, 0x1F4348u);
    ctx->pc = 0x1F4344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4340u;
    // 0x1f4344: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1F4340u, 0x1F4348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4348u;
label_1f4348:
    // 0x1f4348: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1f4348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f434c: 0x0  nop
    ctx->pc = 0x1f434cu;
    // NOP
    // 0x1f4350: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x1F4350u;
    {
        const bool branch_taken_0x1f4350 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4350u;
        // 0x1f4354: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4350) {
            ctx->pc = 0x1F440Cu;
            goto label_1f440c;
        }
    }
    ctx->pc = 0x1F4358u;
    // 0x1f4358: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f4358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f435c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f435cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f4360: 0xc07bc8c  jal         func_1EF230
    ctx->pc = 0x1F4360u;
    SET_GPR_U32(ctx, 31, 0x1F4368u);
    ctx->pc = 0x1F4364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4360u;
    // 0x1f4364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF230u, 0x1F4360u, 0x1F4368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4368u;
label_1f4368:
    // 0x1f4368: 0xc60d0110  lwc1        $f13, 0x110($s0)
    ctx->pc = 0x1f4368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f436c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f436cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4374: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1F4374u;
    SET_GPR_U32(ctx, 31, 0x1F437Cu);
    ctx->pc = 0x1F4378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4374u;
    // 0x1f4378: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1F4374u, 0x1F437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F437Cu;
label_1f437c:
    // 0x1f437c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f437cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4380: 0xc077f36  jal         func_1DFCD8
    ctx->pc = 0x1F4380u;
    SET_GPR_U32(ctx, 31, 0x1F4388u);
    ctx->pc = 0x1F4384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4380u;
    // 0x1f4384: 0xa202010c  sb          $v0, 0x10C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCD8u, 0x1F4380u, 0x1F4388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4388u;
label_1f4388:
    // 0x1f4388: 0x9203010c  lbu         $v1, 0x10C($s0)
    ctx->pc = 0x1f4388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1f438c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f4390: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x1f4390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1f4394: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1f4394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f4398: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f4398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f439c: 0x0  nop
    ctx->pc = 0x1f439cu;
    // NOP
    // 0x1f43a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f43a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f43a4: 0xa2020170  sb          $v0, 0x170($s0)
    ctx->pc = 0x1f43a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f43a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f43a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f43ac: 0x24070168  addiu       $a3, $zero, 0x168
    ctx->pc = 0x1f43acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1f43b0: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x1f43b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f43b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f43b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f43b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f43b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f43bc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f43bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f43c0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1f43c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f43c4: 0xa202010c  sb          $v0, 0x10C($s0)
    ctx->pc = 0x1f43c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f43c8: 0x92e5928e  lbu         $a1, -0x6D72($s7)
    ctx->pc = 0x1f43c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294939278)));
    // 0x1f43cc: 0xa211011c  sb          $s1, 0x11C($s0)
    ctx->pc = 0x1f43ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 17));
    // 0x1f43d0: 0xe6140120  swc1        $f20, 0x120($s0)
    ctx->pc = 0x1f43d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1f43d4: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1f43d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1f43d8: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1f43d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1f43dc: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x1f43dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x1f43e0: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x1f43e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x1f43e4: 0xa2000148  sb          $zero, 0x148($s0)
    ctx->pc = 0x1f43e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f43e8: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x1f43e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x1f43ec: 0xa60500f4  sh          $a1, 0xF4($s0)
    ctx->pc = 0x1f43ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 5));
    // 0x1f43f0: 0xae0800f8  sw          $t0, 0xF8($s0)
    ctx->pc = 0x1f43f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 8));
    // 0x1f43f4: 0xae060104  sw          $a2, 0x104($s0)
    ctx->pc = 0x1f43f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 6));
    // 0x1f43f8: 0xae070150  sw          $a3, 0x150($s0)
    ctx->pc = 0x1f43f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 7));
    // 0x1f43fc: 0xae030140  sw          $v1, 0x140($s0)
    ctx->pc = 0x1f43fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 3));
    // 0x1f4400: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x1f4400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x1f4404: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F4404u;
    SET_GPR_U32(ctx, 31, 0x1F440Cu);
    ctx->pc = 0x1F4408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4404u;
    // 0x1f4408: 0xae030124  sw          $v1, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F4404u, 0x1F440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F440Cu;
label_1f440c:
    // 0x1f440c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f440cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f4410: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1f4410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4414: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1f4414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f4418: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1f4418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f441c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1f441cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f4420: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1f4420u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f4424: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1f4424u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f4428: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x1f4428u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1f442c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f442cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f4430: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1f4430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f4434: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1f4434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f4438: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4438u;
        // 0x1f443c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4440u;
}
