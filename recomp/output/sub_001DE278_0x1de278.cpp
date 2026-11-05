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

// Function: sub_001DE278
// Address: 0x1de278 - 0x1de398
void sub_001DE278_0x1de278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE278_0x1de278");
#endif

    switch (ctx->pc) {
        case 0x1de2b4u: goto label_1de2b4;
        case 0x1de2c4u: goto label_1de2c4;
        case 0x1de2dcu: goto label_1de2dc;
        case 0x1de2e4u: goto label_1de2e4;
        case 0x1de318u: goto label_1de318;
        case 0x1de334u: goto label_1de334;
        case 0x1de364u: goto label_1de364;
        default: break;
    }

    ctx->pc = 0x1de278u;

    // 0x1de278: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1de278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1de27c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1de27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1de280: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1de280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1de284: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1de284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de288: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1de288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1de28c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1de28cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de290: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1de290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1de294: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1de294u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de298: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1de298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1de29c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1de29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1de2a0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1de2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1de2a4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1de2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1de2a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1de2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1de2ac: 0xc0f75c2  jal         func_3DD708
    ctx->pc = 0x1DE2ACu;
    SET_GPR_U32(ctx, 31, 0x1DE2B4u);
    ctx->pc = 0x1DE2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE2ACu;
    // 0x1de2b0: 0xe0b82d  daddu       $s7, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD708u, 0x1DE2ACu, 0x1DE2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE2B4u;
label_1de2b4:
    // 0x1de2b4: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1DE2B4u;
    {
        const bool branch_taken_0x1de2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2B4u;
        // 0x1de2b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de2b4) {
            ctx->pc = 0x1DE368u;
            goto label_1de368;
        }
    }
    ctx->pc = 0x1DE2BCu;
    // 0x1de2bc: 0xc077fee  jal         func_1DFFB8
    ctx->pc = 0x1DE2BCu;
    SET_GPR_U32(ctx, 31, 0x1DE2C4u);
    ctx->pc = 0x1DE2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE2BCu;
    // 0x1de2c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFFB8u, 0x1DE2BCu, 0x1DE2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE2C4u;
label_1de2c4:
    // 0x1de2c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE2C4u;
    {
        const bool branch_taken_0x1de2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2C4u;
        // 0x1de2c8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de2c4) {
            ctx->pc = 0x1DE2D4u;
            goto label_1de2d4;
        }
    }
    ctx->pc = 0x1DE2CCu;
    // 0x1de2cc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1DE2CCu;
    {
        const bool branch_taken_0x1de2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2CCu;
        // 0x1de2d0: 0x8c6291c0  lw          $v0, -0x6E40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de2cc) {
            ctx->pc = 0x1DE368u;
            goto label_1de368;
        }
    }
    ctx->pc = 0x1DE2D4u;
label_1de2d4:
    // 0x1de2d4: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x1DE2D4u;
    SET_GPR_U32(ctx, 31, 0x1DE2DCu);
    ctx->pc = 0x1DE2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE2D4u;
    // 0x1de2d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x1DE2D4u, 0x1DE2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE2DCu;
label_1de2dc:
    // 0x1de2dc: 0xc077e7a  jal         func_1DF9E8
    ctx->pc = 0x1DE2DCu;
    SET_GPR_U32(ctx, 31, 0x1DE2E4u);
    ctx->pc = 0x1DE2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE2DCu;
    // 0x1de2e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF9E8u, 0x1DE2DCu, 0x1DE2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE2E4u;
label_1de2e4:
    // 0x1de2e4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1de2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1de2e8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1de2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1de2ec: 0xc440d84c  lwc1        $f0, -0x27B4($v0)
    ctx->pc = 0x1de2ecu;
    { uint32_t bits = FAST_READ32(0x45D84Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de2f0: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x1de2f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de2f4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1de2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1de2f8: 0x8c6491f4  lw          $a0, -0x6E0C($v1)
    ctx->pc = 0x1de2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F91F4u));
    // 0x1de2fc: 0xe44091b0  swc1        $f0, -0x6E50($v0)
    ctx->pc = 0x1de2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F91B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91B0u, _value); } while (0); }
    // 0x1de300: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DE300u;
    {
        const bool branch_taken_0x1de300 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1DE304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE300u;
        // 0x1de304: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de300) {
            ctx->pc = 0x1DE344u;
            goto label_1de344;
        }
    }
    ctx->pc = 0x1DE308u;
    // 0x1de308: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1de308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1de30c: 0x3c13001e  lui         $s3, 0x1E
    ctx->pc = 0x1de30cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)30 << 16));
    // 0x1de310: 0x2450c758  addiu       $s0, $v0, -0x38A8
    ctx->pc = 0x1de310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952792));
    // 0x1de314: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1de314u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x66C758u));
label_1de318:
    // 0x1de318: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1de318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de31c: 0x2667dcc0  addiu       $a3, $s3, -0x2340
    ctx->pc = 0x1de31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958272));
    // 0x1de320: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1de320u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de324: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1de324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1de328: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1de328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1de32c: 0xc0dbdf4  jal         func_36F7D0
    ctx->pc = 0x1DE32Cu;
    SET_GPR_U32(ctx, 31, 0x1DE334u);
    ctx->pc = 0x1DE330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE32Cu;
    // 0x1de330: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F7D0u, 0x1DE32Cu, 0x1DE334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE334u;
label_1de334:
    // 0x1de334: 0x8e8391f4  lw          $v1, -0x6E0C($s4)
    ctx->pc = 0x1de334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939124)));
    // 0x1de338: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1de338u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1de33c: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DE33Cu;
    {
        const bool branch_taken_0x1de33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de33c) {
            ctx->pc = 0x1DE340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE33Cu;
            // 0x1de340: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de318;
        }
    }
    ctx->pc = 0x1DE344u;
label_1de344:
    // 0x1de344: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1de344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de348: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE348u;
    {
        const bool branch_taken_0x1de348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de348) {
            ctx->pc = 0x1DE34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE348u;
            // 0x1de34c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE368u;
            goto label_1de368;
        }
    }
    ctx->pc = 0x1DE350u;
    // 0x1de350: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de354: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1de354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de358: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1de358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de35c: 0xc077c46  jal         func_1DF118
    ctx->pc = 0x1DE35Cu;
    SET_GPR_U32(ctx, 31, 0x1DE364u);
    ctx->pc = 0x1DE360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE35Cu;
    // 0x1de360: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF118u, 0x1DE35Cu, 0x1DE364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE364u;
label_1de364:
    // 0x1de364: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1de364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1de368:
    // 0x1de368: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1de368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de36c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1de36cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de370: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1de370u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de374: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1de374u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de378: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1de378u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de37c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1de37cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1de380: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1de380u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de384: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1de384u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1de388: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1de388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1de38c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE38Cu;
        // 0x1de390: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE394u;
    // 0x1de394: 0x0  nop
    ctx->pc = 0x1de394u;
    // NOP
    ctx->pc = 0x1de398u;
}
