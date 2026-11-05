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

// Function: sub_002A5B00
// Address: 0x2a5b00 - 0x2a5c48
void sub_002A5B00_0x2a5b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5B00_0x2a5b00");
#endif

    switch (ctx->pc) {
        case 0x2a5b30u: goto label_2a5b30;
        case 0x2a5b40u: goto label_2a5b40;
        case 0x2a5b4cu: goto label_2a5b4c;
        case 0x2a5b7cu: goto label_2a5b7c;
        case 0x2a5b84u: goto label_2a5b84;
        case 0x2a5bd0u: goto label_2a5bd0;
        case 0x2a5bdcu: goto label_2a5bdc;
        case 0x2a5c00u: goto label_2a5c00;
        case 0x2a5c20u: goto label_2a5c20;
        default: break;
    }

    ctx->pc = 0x2a5b00u;

    // 0x2a5b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a5b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a5b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a5b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a5b08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a5b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a5b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a5b10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a5b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a5b14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a5b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a5b18: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2a5b18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5b1c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a5b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a5b20: 0x2611027c  addiu       $s1, $s0, 0x27C
    ctx->pc = 0x2a5b20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 636));
    // 0x2a5b24: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2a5b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2a5b28: 0xc0a75d4  jal         func_29D750
    ctx->pc = 0x2A5B28u;
    SET_GPR_U32(ctx, 31, 0x2A5B30u);
    ctx->pc = 0x2A5B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B28u;
    // 0x2a5b2c: 0x3c140047  lui         $s4, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D750u, 0x2A5B28u, 0x2A5B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B30u;
label_2a5b30:
    // 0x2a5b30: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2a5b30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a5b34: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2a5b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2a5b38: 0x244236f8  addiu       $v0, $v0, 0x36F8
    ctx->pc = 0x2a5b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14072));
    // 0x2a5b3c: 0xae020278  sw          $v0, 0x278($s0)
    ctx->pc = 0x2a5b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
label_2a5b40:
    // 0x2a5b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a5b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b44: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A5B44u;
    SET_GPR_U32(ctx, 31, 0x2A5B4Cu);
    ctx->pc = 0x2A5B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B44u;
    // 0x2a5b48: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A5B44u, 0x2A5B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B4Cu;
label_2a5b4c:
    // 0x2a5b4c: 0x0  nop
    ctx->pc = 0x2a5b4cu;
    // NOP
    // 0x2a5b50: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A5B50u;
    {
        const bool branch_taken_0x2a5b50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x2A5B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B50u;
        // 0x2a5b54: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5b50) {
            ctx->pc = 0x2A5B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5b40;
        }
    }
    ctx->pc = 0x2A5B58u;
    // 0x2a5b58: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x2a5b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    // 0x2a5b5c: 0x240400b8  addiu       $a0, $zero, 0xB8
    ctx->pc = 0x2a5b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x2a5b60: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x2a5b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x2a5b64: 0x261302d8  addiu       $s3, $s0, 0x2D8
    ctx->pc = 0x2a5b64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 728));
    // 0x2a5b68: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x2a5b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
    // 0x2a5b6c: 0x2611027c  addiu       $s1, $s0, 0x27C
    ctx->pc = 0x2a5b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 636));
    // 0x2a5b70: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x2a5b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    // 0x2a5b74: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2A5B74u;
    SET_GPR_U32(ctx, 31, 0x2A5B7Cu);
    ctx->pc = 0x2A5B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B74u;
    // 0x2a5b78: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2A5B74u, 0x2A5B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B7Cu;
label_2a5b7c:
    // 0x2a5b7c: 0xc0a9d0e  jal         func_2A7438
    ctx->pc = 0x2A5B7Cu;
    SET_GPR_U32(ctx, 31, 0x2A5B84u);
    ctx->pc = 0x2A5B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B7Cu;
    // 0x2a5b80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7438u, 0x2A5B7Cu, 0x2A5B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B84u;
label_2a5b84:
    // 0x2a5b84: 0xae0202a4  sw          $v0, 0x2A4($s0)
    ctx->pc = 0x2a5b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 2));
    // 0x2a5b88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a5b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5b8c: 0x260202bc  addiu       $v0, $s0, 0x2BC
    ctx->pc = 0x2a5b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 700));
    // 0x2a5b90: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x2a5b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
    // 0x2a5b94: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x2a5b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
    // 0x2a5b98: 0xa20002b0  sb          $zero, 0x2B0($s0)
    ctx->pc = 0x2a5b98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 688), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a5b9c: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x2a5b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x2a5ba0: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x2a5ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x2a5ba4: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x2a5ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x2a5ba8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a5ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5bac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a5bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5bb0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a5bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a5bb4: 0xe60002c8  swc1        $f0, 0x2C8($s0)
    ctx->pc = 0x2a5bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 712), bits); }
    // 0x2a5bb8: 0xe60002c4  swc1        $f0, 0x2C4($s0)
    ctx->pc = 0x2a5bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 708), bits); }
    // 0x2a5bbc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2a5bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2a5bc0: 0xa20302dc  sb          $v1, 0x2DC($s0)
    ctx->pc = 0x2a5bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 732), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a5bc4: 0xae0002d0  sw          $zero, 0x2D0($s0)
    ctx->pc = 0x2a5bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 0));
    // 0x2a5bc8: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x2a5bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
    // 0x2a5bcc: 0xa20002dd  sb          $zero, 0x2DD($s0)
    ctx->pc = 0x2a5bccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 733), (uint8_t)GPR_U32(ctx, 0));
label_2a5bd0:
    // 0x2a5bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a5bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5bd4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x2A5BD4u;
    SET_GPR_U32(ctx, 31, 0x2A5BDCu);
    ctx->pc = 0x2A5BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5BD4u;
    // 0x2a5bd8: 0x2685d770  addiu       $a1, $s4, -0x2890 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x2A5BD4u, 0x2A5BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5BDCu;
label_2a5bdc:
    // 0x2a5bdc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2a5bdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2a5be0: 0x641fffb  bgez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A5BE0u;
    {
        const bool branch_taken_0x2a5be0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2A5BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5BE0u;
        // 0x2a5be4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5be0) {
            ctx->pc = 0x2A5BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5bd0;
        }
    }
    ctx->pc = 0x2A5BE8u;
    // 0x2a5be8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5bec: 0x26630003  addiu       $v1, $s3, 0x3
    ctx->pc = 0x2a5becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x2a5bf0: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x2a5bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
    // 0x2a5bf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a5bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5bf8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a5bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a5bfc: 0x0  nop
    ctx->pc = 0x2a5bfcu;
    // NOP
label_2a5c00:
    // 0x2a5c00: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a5c00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a5c04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a5c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a5c08: 0x0  nop
    ctx->pc = 0x2a5c08u;
    // NOP
    // 0x2a5c0c: 0x0  nop
    ctx->pc = 0x2a5c0cu;
    // NOP
    // 0x2a5c10: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A5C10u;
    {
        const bool branch_taken_0x2a5c10 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2A5C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C10u;
        // 0x2a5c14: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5c10) {
            ctx->pc = 0x2A5C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5c00;
        }
    }
    ctx->pc = 0x2A5C18u;
    // 0x2a5c18: 0xc0a964c  jal         func_2A5930
    ctx->pc = 0x2A5C18u;
    SET_GPR_U32(ctx, 31, 0x2A5C20u);
    ctx->pc = 0x2A5930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5930u, 0x2A5C18u, 0x2A5C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C20u;
label_2a5c20:
    // 0x2a5c20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a5c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a5c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a5c28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a5c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5c2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a5c2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5c30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a5c30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a5c34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a5c34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5c38: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2a5c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a5c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C3Cu;
        // 0x2a5c40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5C44u;
    // 0x2a5c44: 0x0  nop
    ctx->pc = 0x2a5c44u;
    // NOP
    ctx->pc = 0x2a5c48u;
}
