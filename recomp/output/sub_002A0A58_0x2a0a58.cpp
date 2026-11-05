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

// Function: sub_002A0A58
// Address: 0x2a0a58 - 0x2a0c58
void sub_002A0A58_0x2a0a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0A58_0x2a0a58");
#endif

    switch (ctx->pc) {
        case 0x2a0a98u: goto label_2a0a98;
        case 0x2a0aa4u: goto label_2a0aa4;
        case 0x2a0ab0u: goto label_2a0ab0;
        case 0x2a0abcu: goto label_2a0abc;
        case 0x2a0ac8u: goto label_2a0ac8;
        case 0x2a0ad4u: goto label_2a0ad4;
        case 0x2a0ae0u: goto label_2a0ae0;
        case 0x2a0b20u: goto label_2a0b20;
        case 0x2a0b3cu: goto label_2a0b3c;
        case 0x2a0b4cu: goto label_2a0b4c;
        case 0x2a0b58u: goto label_2a0b58;
        case 0x2a0b64u: goto label_2a0b64;
        case 0x2a0b70u: goto label_2a0b70;
        case 0x2a0b7cu: goto label_2a0b7c;
        case 0x2a0b88u: goto label_2a0b88;
        case 0x2a0b94u: goto label_2a0b94;
        case 0x2a0ba4u: goto label_2a0ba4;
        case 0x2a0bb0u: goto label_2a0bb0;
        case 0x2a0bbcu: goto label_2a0bbc;
        case 0x2a0bd0u: goto label_2a0bd0;
        case 0x2a0bdcu: goto label_2a0bdc;
        case 0x2a0be8u: goto label_2a0be8;
        case 0x2a0bf4u: goto label_2a0bf4;
        case 0x2a0c00u: goto label_2a0c00;
        case 0x2a0c0cu: goto label_2a0c0c;
        case 0x2a0c18u: goto label_2a0c18;
        case 0x2a0c24u: goto label_2a0c24;
        default: break;
    }

    ctx->pc = 0x2a0a58u;

    // 0x2a0a58: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2a0a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2a0a5c: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x2a0a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x2a0a60: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x2a0a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x2a0a64: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2a0a64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0a68: 0xffb70128  sd          $s7, 0x128($sp)
    ctx->pc = 0x2a0a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 23));
    // 0x2a0a6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a0a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0a70: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x2a0a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x2a0a74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a0a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0a78: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x2a0a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x2a0a7c: 0xffb30108  sd          $s3, 0x108($sp)
    ctx->pc = 0x2a0a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 19));
    // 0x2a0a80: 0xffb40110  sd          $s4, 0x110($sp)
    ctx->pc = 0x2a0a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 20));
    // 0x2a0a84: 0xffb50118  sd          $s5, 0x118($sp)
    ctx->pc = 0x2a0a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 21));
    // 0x2a0a88: 0xffb60120  sd          $s6, 0x120($sp)
    ctx->pc = 0x2a0a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 22));
    // 0x2a0a8c: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x2a0a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x2a0a90: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A0A90u;
    SET_GPR_U32(ctx, 31, 0x2A0A98u);
    ctx->pc = 0x2A0A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0A90u;
    // 0x2a0a94: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A0A90u, 0x2A0A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A98u;
label_2a0a98:
    // 0x2a0a98: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x2a0a98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0a9c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A0A9Cu;
    SET_GPR_U32(ctx, 31, 0x2A0AA4u);
    ctx->pc = 0x2A0AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0A9Cu;
    // 0x2a0aa0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A0A9Cu, 0x2A0AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0AA4u;
label_2a0aa4:
    // 0x2a0aa4: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x2a0aa4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a0aa8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A0AA8u;
    SET_GPR_U32(ctx, 31, 0x2A0AB0u);
    ctx->pc = 0x2A0AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0AA8u;
    // 0x2a0aac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A0AA8u, 0x2A0AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0AB0u;
label_2a0ab0:
    // 0x2a0ab0: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x2a0ab0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a0ab4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A0AB4u;
    SET_GPR_U32(ctx, 31, 0x2A0ABCu);
    ctx->pc = 0x2A0AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0AB4u;
    // 0x2a0ab8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A0AB4u, 0x2A0ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0ABCu;
label_2a0abc:
    // 0x2a0abc: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x2a0abcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a0ac0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A0AC0u;
    SET_GPR_U32(ctx, 31, 0x2A0AC8u);
    ctx->pc = 0x2A0AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0AC0u;
    // 0x2a0ac4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A0AC0u, 0x2A0AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0AC8u;
label_2a0ac8:
    // 0x2a0ac8: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x2a0ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0acc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A0ACCu;
    SET_GPR_U32(ctx, 31, 0x2A0AD4u);
    ctx->pc = 0x2A0AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0ACCu;
    // 0x2a0ad0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A0ACCu, 0x2A0AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0AD4u;
label_2a0ad4:
    // 0x2a0ad4: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x2a0ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0ad8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A0AD8u;
    SET_GPR_U32(ctx, 31, 0x2A0AE0u);
    ctx->pc = 0x2A0ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0AD8u;
    // 0x2a0adc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A0AD8u, 0x2A0AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0AE0u;
label_2a0ae0:
    // 0x2a0ae0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a0ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a0ae4: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2a0ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x2a0ae8: 0x24a5c820  addiu       $a1, $a1, -0x37E0
    ctx->pc = 0x2a0ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952992));
    // 0x2a0aec: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x2a0aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x2a0af0: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2a0af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2a0af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0af8: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2a0af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2a0afc: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x2a0afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x2a0b00: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x2a0b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x2a0b04: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2a0b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x2a0b08: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x2a0b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x2a0b0c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2a0b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x2a0b10: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x2a0b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x2a0b14: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2a0b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x2a0b18: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A0B18u;
    SET_GPR_U32(ctx, 31, 0x2A0B20u);
    ctx->pc = 0x2A0B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B18u;
    // 0x2a0b1c: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A0B18u, 0x2A0B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B20u;
label_2a0b20:
    // 0x2a0b20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a0b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a0b24: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A0B24u;
    {
        const bool branch_taken_0x2a0b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0b24) {
            ctx->pc = 0x2A0B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0B24u;
            // 0x2a0b28: 0x27b000d0  addiu       $s0, $sp, 0xD0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0B9Cu;
            goto label_2a0b9c;
        }
    }
    ctx->pc = 0x2A0B2Cu;
    // 0x2a0b2c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2a0b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a0b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b34: 0xc0a7d1e  jal         func_29F478
    ctx->pc = 0x2A0B34u;
    SET_GPR_U32(ctx, 31, 0x2A0B3Cu);
    ctx->pc = 0x2A0B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B34u;
    // 0x2a0b38: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F478u, 0x2A0B34u, 0x2A0B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B3Cu;
label_2a0b3c:
    // 0x2a0b3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a0b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b44: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0B44u;
    SET_GPR_U32(ctx, 31, 0x2A0B4Cu);
    ctx->pc = 0x2A0B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B44u;
    // 0x2a0b48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0B44u, 0x2A0B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B4Cu;
label_2a0b4c:
    // 0x2a0b4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a0b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b50: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0B50u;
    SET_GPR_U32(ctx, 31, 0x2A0B58u);
    ctx->pc = 0x2A0B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B50u;
    // 0x2a0b54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0B50u, 0x2A0B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B58u;
label_2a0b58:
    // 0x2a0b58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a0b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b5c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0B5Cu;
    SET_GPR_U32(ctx, 31, 0x2A0B64u);
    ctx->pc = 0x2A0B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B5Cu;
    // 0x2a0b60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0B5Cu, 0x2A0B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B64u;
label_2a0b64:
    // 0x2a0b64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a0b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b68: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0B68u;
    SET_GPR_U32(ctx, 31, 0x2A0B70u);
    ctx->pc = 0x2A0B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B68u;
    // 0x2a0b6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0B68u, 0x2A0B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B70u;
label_2a0b70:
    // 0x2a0b70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b74: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0B74u;
    SET_GPR_U32(ctx, 31, 0x2A0B7Cu);
    ctx->pc = 0x2A0B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B74u;
    // 0x2a0b78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0B74u, 0x2A0B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B7Cu;
label_2a0b7c:
    // 0x2a0b7c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b80: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0B80u;
    SET_GPR_U32(ctx, 31, 0x2A0B88u);
    ctx->pc = 0x2A0B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B80u;
    // 0x2a0b84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0B80u, 0x2A0B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B88u;
label_2a0b88:
    // 0x2a0b88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a0b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b8c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0B8Cu;
    SET_GPR_U32(ctx, 31, 0x2A0B94u);
    ctx->pc = 0x2A0B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B8Cu;
    // 0x2a0b90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0B8Cu, 0x2A0B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B94u;
label_2a0b94:
    // 0x2a0b94: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2A0B94u;
    {
        const bool branch_taken_0x2a0b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B94u;
        // 0x2a0b98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b94) {
            ctx->pc = 0x2A0C28u;
            goto label_2a0c28;
        }
    }
    ctx->pc = 0x2A0B9Cu;
label_2a0b9c:
    // 0x2a0b9c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A0B9Cu;
    SET_GPR_U32(ctx, 31, 0x2A0BA4u);
    ctx->pc = 0x2A0BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B9Cu;
    // 0x2a0ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A0B9Cu, 0x2A0BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BA4u;
label_2a0ba4:
    // 0x2a0ba4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a0ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0ba8: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2A0BA8u;
    SET_GPR_U32(ctx, 31, 0x2A0BB0u);
    ctx->pc = 0x2A0BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0BA8u;
    // 0x2a0bac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2A0BA8u, 0x2A0BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BB0u;
label_2a0bb0:
    // 0x2a0bb0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2a0bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a0bb4: 0xc0a8274  jal         func_2A09D0
    ctx->pc = 0x2A0BB4u;
    SET_GPR_U32(ctx, 31, 0x2A0BBCu);
    ctx->pc = 0x2A0BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0BB4u;
    // 0x2a0bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A09D0u, 0x2A0BB4u, 0x2A0BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BBCu;
label_2a0bbc:
    // 0x2a0bbc: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2a0bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a0bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0bc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a0bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0bc8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0BC8u;
    SET_GPR_U32(ctx, 31, 0x2A0BD0u);
    ctx->pc = 0x2A0BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0BC8u;
    // 0x2a0bcc: 0xafc3027c  sw          $v1, 0x27C($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 636), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0BC8u, 0x2A0BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BD0u;
label_2a0bd0:
    // 0x2a0bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0bd4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0BD4u;
    SET_GPR_U32(ctx, 31, 0x2A0BDCu);
    ctx->pc = 0x2A0BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0BD4u;
    // 0x2a0bd8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0BD4u, 0x2A0BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BDCu;
label_2a0bdc:
    // 0x2a0bdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a0bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0be0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0BE0u;
    SET_GPR_U32(ctx, 31, 0x2A0BE8u);
    ctx->pc = 0x2A0BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0BE0u;
    // 0x2a0be4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0BE0u, 0x2A0BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BE8u;
label_2a0be8:
    // 0x2a0be8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a0be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0bec: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0BECu;
    SET_GPR_U32(ctx, 31, 0x2A0BF4u);
    ctx->pc = 0x2A0BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0BECu;
    // 0x2a0bf0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0BECu, 0x2A0BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BF4u;
label_2a0bf4:
    // 0x2a0bf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a0bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0bf8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0BF8u;
    SET_GPR_U32(ctx, 31, 0x2A0C00u);
    ctx->pc = 0x2A0BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0BF8u;
    // 0x2a0bfc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0BF8u, 0x2A0C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C00u;
label_2a0c00:
    // 0x2a0c00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0c04: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0C04u;
    SET_GPR_U32(ctx, 31, 0x2A0C0Cu);
    ctx->pc = 0x2A0C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0C04u;
    // 0x2a0c08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0C04u, 0x2A0C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C0Cu;
label_2a0c0c:
    // 0x2a0c0c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0c10: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0C10u;
    SET_GPR_U32(ctx, 31, 0x2A0C18u);
    ctx->pc = 0x2A0C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0C10u;
    // 0x2a0c14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0C10u, 0x2A0C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C18u;
label_2a0c18:
    // 0x2a0c18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a0c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0c1c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0C1Cu;
    SET_GPR_U32(ctx, 31, 0x2A0C24u);
    ctx->pc = 0x2A0C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0C1Cu;
    // 0x2a0c20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0C1Cu, 0x2A0C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C24u;
label_2a0c24:
    // 0x2a0c24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a0c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0c28:
    // 0x2a0c28: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x2a0c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a0c2c: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x2a0c2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2a0c30: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x2a0c30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a0c34: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x2a0c34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a0c38: 0xdfb40110  ld          $s4, 0x110($sp)
    ctx->pc = 0x2a0c38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a0c3c: 0xdfb50118  ld          $s5, 0x118($sp)
    ctx->pc = 0x2a0c3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2a0c40: 0xdfb60120  ld          $s6, 0x120($sp)
    ctx->pc = 0x2a0c40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a0c44: 0xdfb70128  ld          $s7, 0x128($sp)
    ctx->pc = 0x2a0c44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0c48: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x2a0c48u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2a0c4c: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x2a0c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a0c50: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0C50u;
        // 0x2a0c54: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0C58u;
}
