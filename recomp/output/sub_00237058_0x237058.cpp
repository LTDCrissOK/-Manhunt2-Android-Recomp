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

// Function: sub_00237058
// Address: 0x237058 - 0x237238
void sub_00237058_0x237058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237058_0x237058");
#endif

    switch (ctx->pc) {
        case 0x237058u: goto label_237058;
        case 0x23705cu: goto label_23705c;
        case 0x237060u: goto label_237060;
        case 0x237064u: goto label_237064;
        case 0x237068u: goto label_237068;
        case 0x23706cu: goto label_23706c;
        case 0x237070u: goto label_237070;
        case 0x237074u: goto label_237074;
        case 0x237078u: goto label_237078;
        case 0x23707cu: goto label_23707c;
        case 0x237080u: goto label_237080;
        case 0x237084u: goto label_237084;
        case 0x237088u: goto label_237088;
        case 0x23708cu: goto label_23708c;
        case 0x237090u: goto label_237090;
        case 0x237094u: goto label_237094;
        case 0x237098u: goto label_237098;
        case 0x23709cu: goto label_23709c;
        case 0x2370a0u: goto label_2370a0;
        case 0x2370a4u: goto label_2370a4;
        case 0x2370a8u: goto label_2370a8;
        case 0x2370acu: goto label_2370ac;
        case 0x2370b0u: goto label_2370b0;
        case 0x2370b4u: goto label_2370b4;
        case 0x2370b8u: goto label_2370b8;
        case 0x2370bcu: goto label_2370bc;
        case 0x2370c0u: goto label_2370c0;
        case 0x2370c4u: goto label_2370c4;
        case 0x2370c8u: goto label_2370c8;
        case 0x2370ccu: goto label_2370cc;
        case 0x2370d0u: goto label_2370d0;
        case 0x2370d4u: goto label_2370d4;
        case 0x2370d8u: goto label_2370d8;
        case 0x2370dcu: goto label_2370dc;
        case 0x2370e0u: goto label_2370e0;
        case 0x2370e4u: goto label_2370e4;
        case 0x2370e8u: goto label_2370e8;
        case 0x2370ecu: goto label_2370ec;
        case 0x2370f0u: goto label_2370f0;
        case 0x2370f4u: goto label_2370f4;
        case 0x2370f8u: goto label_2370f8;
        case 0x2370fcu: goto label_2370fc;
        case 0x237100u: goto label_237100;
        case 0x237104u: goto label_237104;
        case 0x237108u: goto label_237108;
        case 0x23710cu: goto label_23710c;
        case 0x237110u: goto label_237110;
        case 0x237114u: goto label_237114;
        case 0x237118u: goto label_237118;
        case 0x23711cu: goto label_23711c;
        case 0x237120u: goto label_237120;
        case 0x237124u: goto label_237124;
        case 0x237128u: goto label_237128;
        case 0x23712cu: goto label_23712c;
        case 0x237130u: goto label_237130;
        case 0x237134u: goto label_237134;
        case 0x237138u: goto label_237138;
        case 0x23713cu: goto label_23713c;
        case 0x237140u: goto label_237140;
        case 0x237144u: goto label_237144;
        case 0x237148u: goto label_237148;
        case 0x23714cu: goto label_23714c;
        case 0x237150u: goto label_237150;
        case 0x237154u: goto label_237154;
        case 0x237158u: goto label_237158;
        case 0x23715cu: goto label_23715c;
        case 0x237160u: goto label_237160;
        case 0x237164u: goto label_237164;
        case 0x237168u: goto label_237168;
        case 0x23716cu: goto label_23716c;
        case 0x237170u: goto label_237170;
        case 0x237174u: goto label_237174;
        case 0x237178u: goto label_237178;
        case 0x23717cu: goto label_23717c;
        case 0x237180u: goto label_237180;
        case 0x237184u: goto label_237184;
        case 0x237188u: goto label_237188;
        case 0x23718cu: goto label_23718c;
        case 0x237190u: goto label_237190;
        case 0x237194u: goto label_237194;
        case 0x237198u: goto label_237198;
        case 0x23719cu: goto label_23719c;
        case 0x2371a0u: goto label_2371a0;
        case 0x2371a4u: goto label_2371a4;
        case 0x2371a8u: goto label_2371a8;
        case 0x2371acu: goto label_2371ac;
        case 0x2371b0u: goto label_2371b0;
        case 0x2371b4u: goto label_2371b4;
        case 0x2371b8u: goto label_2371b8;
        case 0x2371bcu: goto label_2371bc;
        case 0x2371c0u: goto label_2371c0;
        case 0x2371c4u: goto label_2371c4;
        case 0x2371c8u: goto label_2371c8;
        case 0x2371ccu: goto label_2371cc;
        case 0x2371d0u: goto label_2371d0;
        case 0x2371d4u: goto label_2371d4;
        case 0x2371d8u: goto label_2371d8;
        case 0x2371dcu: goto label_2371dc;
        case 0x2371e0u: goto label_2371e0;
        case 0x2371e4u: goto label_2371e4;
        case 0x2371e8u: goto label_2371e8;
        case 0x2371ecu: goto label_2371ec;
        case 0x2371f0u: goto label_2371f0;
        case 0x2371f4u: goto label_2371f4;
        case 0x2371f8u: goto label_2371f8;
        case 0x2371fcu: goto label_2371fc;
        case 0x237200u: goto label_237200;
        case 0x237204u: goto label_237204;
        case 0x237208u: goto label_237208;
        case 0x23720cu: goto label_23720c;
        case 0x237210u: goto label_237210;
        case 0x237214u: goto label_237214;
        case 0x237218u: goto label_237218;
        case 0x23721cu: goto label_23721c;
        case 0x237220u: goto label_237220;
        case 0x237224u: goto label_237224;
        case 0x237228u: goto label_237228;
        case 0x23722cu: goto label_23722c;
        case 0x237230u: goto label_237230;
        case 0x237234u: goto label_237234;
        default: break;
    }

    ctx->pc = 0x237058u;

label_237058:
    // 0x237058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23705c:
    // 0x23705c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23705cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_237060:
    // 0x237060: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x237060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_237064:
    // 0x237064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_237068:
    // 0x237068: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x237068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_23706c:
    // 0x23706c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23706cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237070:
    // 0x237070: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x237070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_237074:
    // 0x237074: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x237074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_237078:
    // 0x237078: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x237078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_23707c:
    // 0x23707c: 0xc0899bc  jal         func_2266F0
label_237080:
    if (ctx->pc == 0x237080u) {
        ctx->pc = 0x237080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23707Cu;
        // 0x237080: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237084u;
        goto label_237084;
    }
    ctx->pc = 0x23707Cu;
    SET_GPR_U32(ctx, 31, 0x237084u);
    ctx->pc = 0x237080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23707Cu;
    // 0x237080: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x23707Cu, 0x237084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237084u;
label_237084:
    // 0x237084: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_237088:
    if (ctx->pc == 0x237088u) {
        ctx->pc = 0x237088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237084u;
        // 0x237088: 0x8e020338  lw          $v0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23708Cu;
        goto label_23708c;
    }
    ctx->pc = 0x237084u;
    {
        const bool branch_taken_0x237084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237084) {
            ctx->pc = 0x237088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237084u;
            // 0x237088: 0x8e020338  lw          $v0, 0x338($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23709Cu;
            goto label_23709c;
        }
    }
    ctx->pc = 0x23708Cu;
label_23708c:
    // 0x23708c: 0xc0899bc  jal         func_2266F0
label_237090:
    if (ctx->pc == 0x237090u) {
        ctx->pc = 0x237090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23708Cu;
        // 0x237090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237094u;
        goto label_237094;
    }
    ctx->pc = 0x23708Cu;
    SET_GPR_U32(ctx, 31, 0x237094u);
    ctx->pc = 0x237090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23708Cu;
    // 0x237090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x23708Cu, 0x237094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237094u;
label_237094:
    // 0x237094: 0x8c52025c  lw          $s2, 0x25C($v0)
    ctx->pc = 0x237094u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_237098:
    // 0x237098: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x237098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_23709c:
    // 0x23709c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x23709cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2370a0:
    // 0x2370a0: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2370a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_2370a4:
    // 0x2370a4: 0x14640016  bne         $v1, $a0, . + 4 + (0x16 << 2)
label_2370a8:
    if (ctx->pc == 0x2370A8u) {
        ctx->pc = 0x2370ACu;
        goto label_2370ac;
    }
    ctx->pc = 0x2370A4u;
    {
        const bool branch_taken_0x2370a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2370a4) {
            ctx->pc = 0x237100u;
            goto label_237100;
        }
    }
    ctx->pc = 0x2370ACu;
label_2370ac:
    // 0x2370ac: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_2370b0:
    if (ctx->pc == 0x2370B0u) {
        ctx->pc = 0x2370B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370ACu;
        // 0x2370b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370B4u;
        goto label_2370b4;
    }
    ctx->pc = 0x2370ACu;
    {
        const bool branch_taken_0x2370ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2370B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370ACu;
        // 0x2370b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370ac) {
            ctx->pc = 0x2370E0u;
            goto label_2370e0;
        }
    }
    ctx->pc = 0x2370B4u;
label_2370b4:
    // 0x2370b4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2370b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2370b8:
    // 0x2370b8: 0xc073e86  jal         func_1CFA18
label_2370bc:
    if (ctx->pc == 0x2370BCu) {
        ctx->pc = 0x2370BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370B8u;
        // 0x2370bc: 0xc44c0010  lwc1        $f12, 0x10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370C0u;
        goto label_2370c0;
    }
    ctx->pc = 0x2370B8u;
    SET_GPR_U32(ctx, 31, 0x2370C0u);
    ctx->pc = 0x2370BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2370B8u;
    // 0x2370bc: 0xc44c0010  lwc1        $f12, 0x10($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2370B8u, 0x2370C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2370C0u;
label_2370c0:
    // 0x2370c0: 0xc0899bc  jal         func_2266F0
label_2370c4:
    if (ctx->pc == 0x2370C4u) {
        ctx->pc = 0x2370C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370C0u;
        // 0x2370c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370C8u;
        goto label_2370c8;
    }
    ctx->pc = 0x2370C0u;
    SET_GPR_U32(ctx, 31, 0x2370C8u);
    ctx->pc = 0x2370C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2370C0u;
    // 0x2370c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2370C0u, 0x2370C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2370C8u;
label_2370c8:
    // 0x2370c8: 0xc09823c  jal         func_2608F0
label_2370cc:
    if (ctx->pc == 0x2370CCu) {
        ctx->pc = 0x2370CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370C8u;
        // 0x2370cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370D0u;
        goto label_2370d0;
    }
    ctx->pc = 0x2370C8u;
    SET_GPR_U32(ctx, 31, 0x2370D0u);
    ctx->pc = 0x2370CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2370C8u;
    // 0x2370cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2608F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2608F0u, 0x2370C8u, 0x2370D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2370D0u;
label_2370d0:
    // 0x2370d0: 0xc0899bc  jal         func_2266F0
label_2370d4:
    if (ctx->pc == 0x2370D4u) {
        ctx->pc = 0x2370D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370D0u;
        // 0x2370d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370D8u;
        goto label_2370d8;
    }
    ctx->pc = 0x2370D0u;
    SET_GPR_U32(ctx, 31, 0x2370D8u);
    ctx->pc = 0x2370D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2370D0u;
    // 0x2370d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2370D0u, 0x2370D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2370D8u;
label_2370d8:
    // 0x2370d8: 0xc098514  jal         func_261450
label_2370dc:
    if (ctx->pc == 0x2370DCu) {
        ctx->pc = 0x2370DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370D8u;
        // 0x2370dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370E0u;
        goto label_2370e0;
    }
    ctx->pc = 0x2370D8u;
    SET_GPR_U32(ctx, 31, 0x2370E0u);
    ctx->pc = 0x2370DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2370D8u;
    // 0x2370dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261450u, 0x2370D8u, 0x2370E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2370E0u;
label_2370e0:
    // 0x2370e0: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2370e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2370e4:
    // 0x2370e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2370e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2370e8:
    // 0x2370e8: 0x8e050424  lw          $a1, 0x424($s0)
    ctx->pc = 0x2370e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1060)));
label_2370ec:
    // 0x2370ec: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2370ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2370f0:
    // 0x2370f0: 0x40f809  jalr        $v0
label_2370f4:
    if (ctx->pc == 0x2370F4u) {
        ctx->pc = 0x2370F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370F0u;
        // 0x2370f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370F8u;
        goto label_2370f8;
    }
    ctx->pc = 0x2370F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2370F8u);
        ctx->pc = 0x2370F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370F0u;
        // 0x2370f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2370F0u, 0x2370F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2370F8u;
label_2370f8:
    // 0x2370f8: 0x10000030  b           . + 4 + (0x30 << 2)
label_2370fc:
    if (ctx->pc == 0x2370FCu) {
        ctx->pc = 0x2370FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370F8u;
        // 0x2370fc: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237100u;
        goto label_237100;
    }
    ctx->pc = 0x2370F8u;
    {
        const bool branch_taken_0x2370f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2370FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370F8u;
        // 0x2370fc: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370f8) {
            ctx->pc = 0x2371BCu;
            goto label_2371bc;
        }
    }
    ctx->pc = 0x237100u;
label_237100:
    // 0x237100: 0x12400022  beqz        $s2, . + 4 + (0x22 << 2)
label_237104:
    if (ctx->pc == 0x237104u) {
        ctx->pc = 0x237104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237100u;
        // 0x237104: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237108u;
        goto label_237108;
    }
    ctx->pc = 0x237100u;
    {
        const bool branch_taken_0x237100 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x237104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237100u;
        // 0x237104: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237100) {
            ctx->pc = 0x23718Cu;
            goto label_23718c;
        }
    }
    ctx->pc = 0x237108u;
label_237108:
    // 0x237108: 0x8e110334  lw          $s1, 0x334($s0)
    ctx->pc = 0x237108u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23710c:
    // 0x23710c: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x23710cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_237110:
    // 0x237110: 0x1043001e  beq         $v0, $v1, . + 4 + (0x1E << 2)
label_237114:
    if (ctx->pc == 0x237114u) {
        ctx->pc = 0x237114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237110u;
        // 0x237114: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237118u;
        goto label_237118;
    }
    ctx->pc = 0x237110u;
    {
        const bool branch_taken_0x237110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x237114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237110u;
        // 0x237114: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237110) {
            ctx->pc = 0x23718Cu;
            goto label_23718c;
        }
    }
    ctx->pc = 0x237118u;
label_237118:
    // 0x237118: 0xc0f7d10  jal         func_3DF440
label_23711c:
    if (ctx->pc == 0x23711Cu) {
        ctx->pc = 0x23711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237118u;
        // 0x23711c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237120u;
        goto label_237120;
    }
    ctx->pc = 0x237118u;
    SET_GPR_U32(ctx, 31, 0x237120u);
    ctx->pc = 0x23711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237118u;
    // 0x23711c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF440u, 0x237118u, 0x237120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237120u;
label_237120:
    // 0x237120: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_237124:
    if (ctx->pc == 0x237124u) {
        ctx->pc = 0x237124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237120u;
        // 0x237124: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237128u;
        goto label_237128;
    }
    ctx->pc = 0x237120u;
    {
        const bool branch_taken_0x237120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237120) {
            ctx->pc = 0x237124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237120u;
            // 0x237124: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237158u;
            goto label_237158;
        }
    }
    ctx->pc = 0x237128u;
label_237128:
    // 0x237128: 0xc0f7d1a  jal         func_3DF468
label_23712c:
    if (ctx->pc == 0x23712Cu) {
        ctx->pc = 0x23712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237128u;
        // 0x23712c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237130u;
        goto label_237130;
    }
    ctx->pc = 0x237128u;
    SET_GPR_U32(ctx, 31, 0x237130u);
    ctx->pc = 0x23712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237128u;
    // 0x23712c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF468u, 0x237128u, 0x237130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237130u;
label_237130:
    // 0x237130: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_237134:
    if (ctx->pc == 0x237134u) {
        ctx->pc = 0x237134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237130u;
        // 0x237134: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237138u;
        goto label_237138;
    }
    ctx->pc = 0x237130u;
    {
        const bool branch_taken_0x237130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237130) {
            ctx->pc = 0x237134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237130u;
            // 0x237134: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237158u;
            goto label_237158;
        }
    }
    ctx->pc = 0x237138u;
label_237138:
    // 0x237138: 0xc0f7d24  jal         func_3DF490
label_23713c:
    if (ctx->pc == 0x23713Cu) {
        ctx->pc = 0x23713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237138u;
        // 0x23713c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237140u;
        goto label_237140;
    }
    ctx->pc = 0x237138u;
    SET_GPR_U32(ctx, 31, 0x237140u);
    ctx->pc = 0x23713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237138u;
    // 0x23713c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF490u, 0x237138u, 0x237140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237140u;
label_237140:
    // 0x237140: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_237144:
    if (ctx->pc == 0x237144u) {
        ctx->pc = 0x237144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237140u;
        // 0x237144: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237148u;
        goto label_237148;
    }
    ctx->pc = 0x237140u;
    {
        const bool branch_taken_0x237140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237140) {
            ctx->pc = 0x237144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237140u;
            // 0x237144: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237158u;
            goto label_237158;
        }
    }
    ctx->pc = 0x237148u;
label_237148:
    // 0x237148: 0xc0f7d32  jal         func_3DF4C8
label_23714c:
    if (ctx->pc == 0x23714Cu) {
        ctx->pc = 0x23714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237148u;
        // 0x23714c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237150u;
        goto label_237150;
    }
    ctx->pc = 0x237148u;
    SET_GPR_U32(ctx, 31, 0x237150u);
    ctx->pc = 0x23714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237148u;
    // 0x23714c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF4C8u, 0x237148u, 0x237150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237150u;
label_237150:
    // 0x237150: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_237154:
    if (ctx->pc == 0x237154u) {
        ctx->pc = 0x237154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237150u;
        // 0x237154: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237158u;
        goto label_237158;
    }
    ctx->pc = 0x237150u;
    {
        const bool branch_taken_0x237150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237150) {
            ctx->pc = 0x237154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237150u;
            // 0x237154: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237158u;
            goto label_237158;
        }
    }
    ctx->pc = 0x237158u;
label_237158:
    // 0x237158: 0x5660000d  bnel        $s3, $zero, . + 4 + (0xD << 2)
label_23715c:
    if (ctx->pc == 0x23715Cu) {
        ctx->pc = 0x23715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237158u;
        // 0x23715c: 0x8e020338  lw          $v0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237160u;
        goto label_237160;
    }
    ctx->pc = 0x237158u;
    {
        const bool branch_taken_0x237158 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x237158) {
            ctx->pc = 0x23715Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237158u;
            // 0x23715c: 0x8e020338  lw          $v0, 0x338($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237190u;
            goto label_237190;
        }
    }
    ctx->pc = 0x237160u;
label_237160:
    // 0x237160: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x237160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_237164:
    // 0x237164: 0xc073e86  jal         func_1CFA18
label_237168:
    if (ctx->pc == 0x237168u) {
        ctx->pc = 0x237168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237164u;
        // 0x237168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23716Cu;
        goto label_23716c;
    }
    ctx->pc = 0x237164u;
    SET_GPR_U32(ctx, 31, 0x23716Cu);
    ctx->pc = 0x237168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237164u;
    // 0x237168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x237164u, 0x23716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23716Cu;
label_23716c:
    // 0x23716c: 0xc0899bc  jal         func_2266F0
label_237170:
    if (ctx->pc == 0x237170u) {
        ctx->pc = 0x237170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23716Cu;
        // 0x237170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237174u;
        goto label_237174;
    }
    ctx->pc = 0x23716Cu;
    SET_GPR_U32(ctx, 31, 0x237174u);
    ctx->pc = 0x237170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23716Cu;
    // 0x237170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x23716Cu, 0x237174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237174u;
label_237174:
    // 0x237174: 0xc09823c  jal         func_2608F0
label_237178:
    if (ctx->pc == 0x237178u) {
        ctx->pc = 0x237178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237174u;
        // 0x237178: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23717Cu;
        goto label_23717c;
    }
    ctx->pc = 0x237174u;
    SET_GPR_U32(ctx, 31, 0x23717Cu);
    ctx->pc = 0x237178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237174u;
    // 0x237178: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2608F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2608F0u, 0x237174u, 0x23717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23717Cu;
label_23717c:
    // 0x23717c: 0xc0899bc  jal         func_2266F0
label_237180:
    if (ctx->pc == 0x237180u) {
        ctx->pc = 0x237180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23717Cu;
        // 0x237180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237184u;
        goto label_237184;
    }
    ctx->pc = 0x23717Cu;
    SET_GPR_U32(ctx, 31, 0x237184u);
    ctx->pc = 0x237180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23717Cu;
    // 0x237180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x23717Cu, 0x237184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237184u;
label_237184:
    // 0x237184: 0xc098514  jal         func_261450
label_237188:
    if (ctx->pc == 0x237188u) {
        ctx->pc = 0x237188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237184u;
        // 0x237188: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23718Cu;
        goto label_23718c;
    }
    ctx->pc = 0x237184u;
    SET_GPR_U32(ctx, 31, 0x23718Cu);
    ctx->pc = 0x237188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237184u;
    // 0x237188: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261450u, 0x237184u, 0x23718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23718Cu;
label_23718c:
    // 0x23718c: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x23718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_237190:
    // 0x237190: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x237190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_237194:
    // 0x237194: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x237194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_237198:
    // 0x237198: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
label_23719c:
    if (ctx->pc == 0x23719Cu) {
        ctx->pc = 0x23719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237198u;
        // 0x23719c: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371A0u;
        goto label_2371a0;
    }
    ctx->pc = 0x237198u;
    {
        const bool branch_taken_0x237198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x237198) {
            ctx->pc = 0x23719Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237198u;
            // 0x23719c: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2371BCu;
            goto label_2371bc;
        }
    }
    ctx->pc = 0x2371A0u;
label_2371a0:
    // 0x2371a0: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2371a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2371a4:
    // 0x2371a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2371a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2371a8:
    // 0x2371a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2371a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2371ac:
    // 0x2371ac: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2371acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2371b0:
    // 0x2371b0: 0x40f809  jalr        $v0
label_2371b4:
    if (ctx->pc == 0x2371B4u) {
        ctx->pc = 0x2371B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371B0u;
        // 0x2371b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371B8u;
        goto label_2371b8;
    }
    ctx->pc = 0x2371B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2371B8u);
        ctx->pc = 0x2371B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371B0u;
        // 0x2371b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2371B0u, 0x2371B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2371B8u;
label_2371b8:
    // 0x2371b8: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x2371b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_2371bc:
    // 0x2371bc: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x2371bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_2371c0:
    // 0x2371c0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2371c4:
    if (ctx->pc == 0x2371C4u) {
        ctx->pc = 0x2371C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371C0u;
        // 0x2371c4: 0x8e020370  lw          $v0, 0x370($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371C8u;
        goto label_2371c8;
    }
    ctx->pc = 0x2371C0u;
    {
        const bool branch_taken_0x2371c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2371c0) {
            ctx->pc = 0x2371C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2371C0u;
            // 0x2371c4: 0x8e020370  lw          $v0, 0x370($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2371D4u;
            goto label_2371d4;
        }
    }
    ctx->pc = 0x2371C8u;
label_2371c8:
    // 0x2371c8: 0xc06bf8e  jal         func_1AFE38
label_2371cc:
    if (ctx->pc == 0x2371CCu) {
        ctx->pc = 0x2371CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371C8u;
        // 0x2371cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371D0u;
        goto label_2371d0;
    }
    ctx->pc = 0x2371C8u;
    SET_GPR_U32(ctx, 31, 0x2371D0u);
    ctx->pc = 0x2371CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2371C8u;
    // 0x2371cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFE38u, 0x2371C8u, 0x2371D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2371D0u;
label_2371d0:
    // 0x2371d0: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x2371d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
label_2371d4:
    // 0x2371d4: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x2371d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_2371d8:
    // 0x2371d8: 0x2405ff7f  addiu       $a1, $zero, -0x81
    ctx->pc = 0x2371d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_2371dc:
    // 0x2371dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2371dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2371e0:
    // 0x2371e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2371e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2371e4:
    // 0x2371e4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2371e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2371e8:
    // 0x2371e8: 0xc08dada  jal         func_236B68
label_2371ec:
    if (ctx->pc == 0x2371ECu) {
        ctx->pc = 0x2371ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371E8u;
        // 0x2371ec: 0xae020370  sw          $v0, 0x370($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371F0u;
        goto label_2371f0;
    }
    ctx->pc = 0x2371E8u;
    SET_GPR_U32(ctx, 31, 0x2371F0u);
    ctx->pc = 0x2371ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2371E8u;
    // 0x2371ec: 0xae020370  sw          $v0, 0x370($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x2371E8u, 0x2371F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2371F0u;
label_2371f0:
    // 0x2371f0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2371f4:
    if (ctx->pc == 0x2371F4u) {
        ctx->pc = 0x2371F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371F0u;
        // 0x2371f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371F8u;
        goto label_2371f8;
    }
    ctx->pc = 0x2371F0u;
    {
        const bool branch_taken_0x2371f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2371f0) {
            ctx->pc = 0x2371F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2371F0u;
            // 0x2371f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237218u;
            goto label_237218;
        }
    }
    ctx->pc = 0x2371F8u;
label_2371f8:
    // 0x2371f8: 0xc0899bc  jal         func_2266F0
label_2371fc:
    if (ctx->pc == 0x2371FCu) {
        ctx->pc = 0x2371FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371F8u;
        // 0x2371fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237200u;
        goto label_237200;
    }
    ctx->pc = 0x2371F8u;
    SET_GPR_U32(ctx, 31, 0x237200u);
    ctx->pc = 0x2371FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2371F8u;
    // 0x2371fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2371F8u, 0x237200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237200u;
label_237200:
    // 0x237200: 0x8c4402e4  lw          $a0, 0x2E4($v0)
    ctx->pc = 0x237200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 740)));
label_237204:
    // 0x237204: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x237204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_237208:
    // 0x237208: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x237208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_23720c:
    // 0x23720c: 0x40f809  jalr        $v0
label_237210:
    if (ctx->pc == 0x237210u) {
        ctx->pc = 0x237214u;
        goto label_237214;
    }
    ctx->pc = 0x23720Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237214u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23720Cu, 0x237214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237214u;
label_237214:
    // 0x237214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_237218:
    // 0x237218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x237218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23721c:
    // 0x23721c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23721cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_237220:
    // 0x237220: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x237220u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_237224:
    // 0x237224: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x237224u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_237228:
    // 0x237228: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x237228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23722c:
    // 0x23722c: 0x3e00008  jr          $ra
label_237230:
    if (ctx->pc == 0x237230u) {
        ctx->pc = 0x237230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23722Cu;
        // 0x237230: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237234u;
        goto label_237234;
    }
    ctx->pc = 0x23722Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23722Cu;
        // 0x237230: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23722Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237234u;
label_237234:
    // 0x237234: 0x0  nop
    ctx->pc = 0x237234u;
    // NOP
    ctx->pc = 0x237238u;
}
