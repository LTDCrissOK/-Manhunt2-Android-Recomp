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

// Function: sub_0014B158
// Address: 0x14b158 - 0x14b310
void sub_0014B158_0x14b158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B158_0x14b158");
#endif

    switch (ctx->pc) {
        case 0x14b1a4u: goto label_14b1a4;
        case 0x14b1dcu: goto label_14b1dc;
        case 0x14b204u: goto label_14b204;
        case 0x14b220u: goto label_14b220;
        case 0x14b230u: goto label_14b230;
        case 0x14b238u: goto label_14b238;
        case 0x14b260u: goto label_14b260;
        case 0x14b27cu: goto label_14b27c;
        case 0x14b28cu: goto label_14b28c;
        case 0x14b2b0u: goto label_14b2b0;
        case 0x14b2c0u: goto label_14b2c0;
        case 0x14b2c8u: goto label_14b2c8;
        default: break;
    }

    ctx->pc = 0x14b158u;

    // 0x14b158: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14b158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14b15c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14b15cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14b160: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x14b160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x14b164: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14b164u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14b168: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x14b168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x14b16c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x14b16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x14b170: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x14b170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x14b174: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14b174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b178: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x14b178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x14b17c: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x14b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x14b180: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x14b180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x14b184: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x14b184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x14b188: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14b188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14b18c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14b18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14b190: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14b190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14b194: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14b194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14b198: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14b198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b19c: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x14B19Cu;
    SET_GPR_U32(ctx, 31, 0x14B1A4u);
    ctx->pc = 0x14B1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B19Cu;
    // 0x14b1a0: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x14B19Cu, 0x14B1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1A4u;
label_14b1a4:
    // 0x14b1a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b1a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1a8: 0x12000050  beqz        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x14B1A8u;
    {
        const bool branch_taken_0x14b1a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B1A8u;
        // 0x14b1ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b1a8) {
            ctx->pc = 0x14B2ECu;
            goto label_14b2ec;
        }
    }
    ctx->pc = 0x14B1B0u;
    // 0x14b1b0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x14b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x14b1b4: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x14b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x14b1b8: 0x245202d8  addiu       $s2, $v0, 0x2D8
    ctx->pc = 0x14b1b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x14b1bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14b1bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14b1c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1c4: 0xafb20024  sw          $s2, 0x24($sp)
    ctx->pc = 0x14b1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
    // 0x14b1c8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x14b1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x14b1cc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x14b1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x14b1d0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x14b1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x14b1d4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x14B1D4u;
    SET_GPR_U32(ctx, 31, 0x14B1DCu);
    ctx->pc = 0x14B1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B1D4u;
    // 0x14b1d8: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x14B1D4u, 0x14B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1DCu;
label_14b1dc:
    // 0x14b1dc: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x14b1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x14b1e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b1e4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x14b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x14b1e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14b1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1ec: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x14b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x14b1f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14b1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1f4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x14b1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x14b1f8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x14b1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14b1fc: 0xc0411ac  jal         func_1046B0
    ctx->pc = 0x14B1FCu;
    SET_GPR_U32(ctx, 31, 0x14B204u);
    ctx->pc = 0x14B200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B1FCu;
    // 0x14b200: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046B0u, 0x14B1FCu, 0x14B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B204u;
label_14b204:
    // 0x14b204: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14B204u;
    {
        const bool branch_taken_0x14b204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B204u;
        // 0x14b208: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b204) {
            ctx->pc = 0x14B254u;
            goto label_14b254;
        }
    }
    ctx->pc = 0x14B20Cu;
    // 0x14b20c: 0xafb20024  sw          $s2, 0x24($sp)
    ctx->pc = 0x14b20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
    // 0x14b210: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14b210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b214: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x14b214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b218: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x14B218u;
    SET_GPR_U32(ctx, 31, 0x14B220u);
    ctx->pc = 0x14B21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B218u;
    // 0x14b21c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x14B218u, 0x14B220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B220u;
label_14b220:
    // 0x14b220: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x14b220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14b224: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14B224u;
    {
        const bool branch_taken_0x14b224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B224u;
        // 0x14b228: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b224) {
            ctx->pc = 0x14B248u;
            goto label_14b248;
        }
    }
    ctx->pc = 0x14B22Cu;
    // 0x14b22c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x14b22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14b230:
    // 0x14b230: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x14B230u;
    SET_GPR_U32(ctx, 31, 0x14B238u);
    ctx->pc = 0x14B234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B230u;
    // 0x14b234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x14B230u, 0x14B238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B238u;
label_14b238:
    // 0x14b238: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14b238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14b23c: 0x0  nop
    ctx->pc = 0x14b23cu;
    // NOP
    // 0x14b240: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14B240u;
    {
        const bool branch_taken_0x14b240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b240) {
            ctx->pc = 0x14B244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B240u;
            // 0x14b244: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b230;
        }
    }
    ctx->pc = 0x14B248u;
label_14b248:
    // 0x14b248: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x14b248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x14b24c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x14B24Cu;
    {
        const bool branch_taken_0x14b24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B24Cu;
        // 0x14b250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b24c) {
            ctx->pc = 0x14B2E0u;
            goto label_14b2e0;
        }
    }
    ctx->pc = 0x14B254u;
label_14b254:
    // 0x14b254: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14B254u;
    {
        const bool branch_taken_0x14b254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B254u;
        // 0x14b258: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b254) {
            ctx->pc = 0x14B284u;
            goto label_14b284;
        }
    }
    ctx->pc = 0x14B25Cu;
    // 0x14b25c: 0x0  nop
    ctx->pc = 0x14b25cu;
    // NOP
label_14b260:
    // 0x14b260: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14b260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b264: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B264u;
    {
        const bool branch_taken_0x14b264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B264u;
        // 0x14b268: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b264) {
            ctx->pc = 0x14B270u;
            goto label_14b270;
        }
    }
    ctx->pc = 0x14B26Cu;
    // 0x14b26c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14b270:
    // 0x14b270: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14b270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b274: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x14B274u;
    SET_GPR_U32(ctx, 31, 0x14B27Cu);
    ctx->pc = 0x14B278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B274u;
    // 0x14b278: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x14B274u, 0x14B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B27Cu;
label_14b27c:
    // 0x14b27c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x14b27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x14b280: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14b280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_14b284:
    // 0x14b284: 0xc04121c  jal         func_104870
    ctx->pc = 0x14B284u;
    SET_GPR_U32(ctx, 31, 0x14B28Cu);
    ctx->pc = 0x104870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104870u, 0x14B284u, 0x14B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B28Cu;
label_14b28c:
    // 0x14b28c: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x14b28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x14b290: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x14B290u;
    {
        const bool branch_taken_0x14b290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B290u;
        // 0x14b294: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b290) {
            ctx->pc = 0x14B260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b260;
        }
    }
    ctx->pc = 0x14B298u;
    // 0x14b298: 0x268202d8  addiu       $v0, $s4, 0x2D8
    ctx->pc = 0x14b298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 728));
    // 0x14b29c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14b29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b2a0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x14b2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x14b2a4: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x14b2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b2a8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x14B2A8u;
    SET_GPR_U32(ctx, 31, 0x14B2B0u);
    ctx->pc = 0x14B2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2A8u;
    // 0x14b2ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x14B2A8u, 0x14B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2B0u;
label_14b2b0:
    // 0x14b2b0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x14b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14b2b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14B2B4u;
    {
        const bool branch_taken_0x14b2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2B4u;
        // 0x14b2b8: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b2b4) {
            ctx->pc = 0x14B2D8u;
            goto label_14b2d8;
        }
    }
    ctx->pc = 0x14B2BCu;
    // 0x14b2bc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x14b2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14b2c0:
    // 0x14b2c0: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x14B2C0u;
    SET_GPR_U32(ctx, 31, 0x14B2C8u);
    ctx->pc = 0x14B2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2C0u;
    // 0x14b2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x14B2C0u, 0x14B2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2C8u;
label_14b2c8:
    // 0x14b2c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14b2cc: 0x0  nop
    ctx->pc = 0x14b2ccu;
    // NOP
    // 0x14b2d0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14B2D0u;
    {
        const bool branch_taken_0x14b2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b2d0) {
            ctx->pc = 0x14B2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B2D0u;
            // 0x14b2d4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b2c0;
        }
    }
    ctx->pc = 0x14B2D8u;
label_14b2d8:
    // 0x14b2d8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x14b2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x14b2dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14b2dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14b2e0:
    // 0x14b2e0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14b2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14b2e4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x14b2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x14b2e8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14b2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_14b2ec:
    // 0x14b2ec: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x14b2ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b2f0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x14b2f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14b2f4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x14b2f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b2f8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x14b2f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14b2fc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x14b2fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b300: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x14b300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x14b304: 0x3e00008  jr          $ra
    ctx->pc = 0x14B304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B304u;
        // 0x14b308: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B30Cu;
    // 0x14b30c: 0x0  nop
    ctx->pc = 0x14b30cu;
    // NOP
    ctx->pc = 0x14b310u;
}
