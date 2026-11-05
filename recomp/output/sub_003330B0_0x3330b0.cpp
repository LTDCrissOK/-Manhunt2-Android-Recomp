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

// Function: sub_003330B0
// Address: 0x3330b0 - 0x333bc0
void sub_003330B0_0x3330b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003330B0_0x3330b0");
#endif

    switch (ctx->pc) {
        case 0x3330f8u: goto label_3330f8;
        case 0x333108u: goto label_333108;
        case 0x333118u: goto label_333118;
        case 0x333120u: goto label_333120;
        case 0x333150u: goto label_333150;
        case 0x333158u: goto label_333158;
        case 0x333178u: goto label_333178;
        case 0x333180u: goto label_333180;
        case 0x333188u: goto label_333188;
        case 0x3331b8u: goto label_3331b8;
        case 0x3331c0u: goto label_3331c0;
        case 0x3331c8u: goto label_3331c8;
        case 0x3331ecu: goto label_3331ec;
        case 0x3331fcu: goto label_3331fc;
        case 0x333204u: goto label_333204;
        case 0x33320cu: goto label_33320c;
        case 0x333238u: goto label_333238;
        case 0x333248u: goto label_333248;
        case 0x333250u: goto label_333250;
        case 0x333258u: goto label_333258;
        case 0x333280u: goto label_333280;
        case 0x333288u: goto label_333288;
        case 0x333290u: goto label_333290;
        case 0x3332b8u: goto label_3332b8;
        case 0x3332c8u: goto label_3332c8;
        case 0x3332d0u: goto label_3332d0;
        case 0x3332d8u: goto label_3332d8;
        case 0x333300u: goto label_333300;
        case 0x333310u: goto label_333310;
        case 0x333318u: goto label_333318;
        case 0x333320u: goto label_333320;
        case 0x33334cu: goto label_33334c;
        case 0x33335cu: goto label_33335c;
        case 0x333364u: goto label_333364;
        case 0x33336cu: goto label_33336c;
        case 0x333384u: goto label_333384;
        case 0x33338cu: goto label_33338c;
        case 0x333394u: goto label_333394;
        case 0x3333acu: goto label_3333ac;
        case 0x3333b4u: goto label_3333b4;
        case 0x3333bcu: goto label_3333bc;
        case 0x3333d4u: goto label_3333d4;
        case 0x3333dcu: goto label_3333dc;
        case 0x3333e4u: goto label_3333e4;
        case 0x333410u: goto label_333410;
        case 0x333420u: goto label_333420;
        case 0x333428u: goto label_333428;
        case 0x333430u: goto label_333430;
        case 0x33345cu: goto label_33345c;
        case 0x33346cu: goto label_33346c;
        case 0x333474u: goto label_333474;
        case 0x33347cu: goto label_33347c;
        case 0x3334acu: goto label_3334ac;
        case 0x3334b4u: goto label_3334b4;
        case 0x3334bcu: goto label_3334bc;
        case 0x3334e8u: goto label_3334e8;
        case 0x3334f8u: goto label_3334f8;
        case 0x333500u: goto label_333500;
        case 0x333508u: goto label_333508;
        case 0x33353cu: goto label_33353c;
        case 0x33354cu: goto label_33354c;
        case 0x333554u: goto label_333554;
        case 0x33355cu: goto label_33355c;
        case 0x333594u: goto label_333594;
        case 0x3335a4u: goto label_3335a4;
        case 0x3335acu: goto label_3335ac;
        case 0x3335e4u: goto label_3335e4;
        case 0x3335ecu: goto label_3335ec;
        case 0x333614u: goto label_333614;
        case 0x33361cu: goto label_33361c;
        case 0x333658u: goto label_333658;
        case 0x333660u: goto label_333660;
        case 0x33368cu: goto label_33368c;
        case 0x333694u: goto label_333694;
        case 0x3336dcu: goto label_3336dc;
        case 0x3336e4u: goto label_3336e4;
        case 0x333718u: goto label_333718;
        case 0x333720u: goto label_333720;
        case 0x33374cu: goto label_33374c;
        case 0x333774u: goto label_333774;
        case 0x33379cu: goto label_33379c;
        case 0x3337c4u: goto label_3337c4;
        case 0x3337ccu: goto label_3337cc;
        case 0x3337e8u: goto label_3337e8;
        case 0x33380cu: goto label_33380c;
        case 0x33381cu: goto label_33381c;
        case 0x333824u: goto label_333824;
        case 0x333840u: goto label_333840;
        case 0x333864u: goto label_333864;
        case 0x333874u: goto label_333874;
        case 0x33387cu: goto label_33387c;
        case 0x3338a4u: goto label_3338a4;
        case 0x3338d8u: goto label_3338d8;
        case 0x3338e0u: goto label_3338e0;
        case 0x333908u: goto label_333908;
        case 0x333938u: goto label_333938;
        case 0x333948u: goto label_333948;
        case 0x333950u: goto label_333950;
        case 0x33397cu: goto label_33397c;
        case 0x333984u: goto label_333984;
        case 0x3339b0u: goto label_3339b0;
        case 0x3339b8u: goto label_3339b8;
        case 0x3339e4u: goto label_3339e4;
        case 0x3339ecu: goto label_3339ec;
        case 0x333a18u: goto label_333a18;
        case 0x333a50u: goto label_333a50;
        case 0x333a98u: goto label_333a98;
        case 0x333ab4u: goto label_333ab4;
        case 0x333abcu: goto label_333abc;
        case 0x333adcu: goto label_333adc;
        case 0x333aecu: goto label_333aec;
        case 0x333b08u: goto label_333b08;
        case 0x333b24u: goto label_333b24;
        case 0x333b40u: goto label_333b40;
        case 0x333b5cu: goto label_333b5c;
        case 0x333b78u: goto label_333b78;
        case 0x333ba0u: goto label_333ba0;
        case 0x333bb8u: goto label_333bb8;
        default: break;
    }

    ctx->pc = 0x3330b0u;

    // 0x3330b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3330b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3330b4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3330b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3330b8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3330b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3330bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3330bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3330c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3330c4: 0x8e220484  lw          $v0, 0x484($s1)
    ctx->pc = 0x3330c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
    // 0x3330c8: 0x2444fff2  addiu       $a0, $v0, -0xE
    ctx->pc = 0x3330c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967282));
    // 0x3330cc: 0x2c830039  sltiu       $v1, $a0, 0x39
    ctx->pc = 0x3330ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
    // 0x3330d0: 0x106002bc  beqz        $v1, . + 4 + (0x2BC << 2)
    ctx->pc = 0x3330D0u;
    {
        const bool branch_taken_0x3330d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3330D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3330D0u;
        // 0x3330d4: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3330d0) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x3330D8u;
    // 0x3330d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3330d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3330dc: 0x244257c0  addiu       $v0, $v0, 0x57C0
    ctx->pc = 0x3330dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22464));
    // 0x3330e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3330e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3330e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3330e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3330e8: 0x800008  jr          $a0
    ctx->pc = 0x3330E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3330F0u: goto label_3330f0;
            case 0x333100u: goto label_333100;
            case 0x333110u: goto label_333110;
            case 0x333148u: goto label_333148;
            case 0x333170u: goto label_333170;
            case 0x3331B0u: goto label_3331b0;
            case 0x3331F4u: goto label_3331f4;
            case 0x333240u: goto label_333240;
            case 0x333278u: goto label_333278;
            case 0x3332C0u: goto label_3332c0;
            case 0x333308u: goto label_333308;
            case 0x333354u: goto label_333354;
            case 0x33337Cu: goto label_33337c;
            case 0x3333A4u: goto label_3333a4;
            case 0x3333CCu: goto label_3333cc;
            case 0x333418u: goto label_333418;
            case 0x333464u: goto label_333464;
            case 0x3334A4u: goto label_3334a4;
            case 0x3334F0u: goto label_3334f0;
            case 0x333544u: goto label_333544;
            case 0x33359Cu: goto label_33359c;
            case 0x3335DCu: goto label_3335dc;
            case 0x33360Cu: goto label_33360c;
            case 0x333650u: goto label_333650;
            case 0x333684u: goto label_333684;
            case 0x3336D4u: goto label_3336d4;
            case 0x333710u: goto label_333710;
            case 0x333744u: goto label_333744;
            case 0x33376Cu: goto label_33376c;
            case 0x333794u: goto label_333794;
            case 0x3337BCu: goto label_3337bc;
            case 0x333814u: goto label_333814;
            case 0x33386Cu: goto label_33386c;
            case 0x3338D0u: goto label_3338d0;
            case 0x333940u: goto label_333940;
            case 0x333974u: goto label_333974;
            case 0x3339A8u: goto label_3339a8;
            case 0x3339DCu: goto label_3339dc;
            case 0x333A10u: goto label_333a10;
            case 0x333A38u: goto label_333a38;
            case 0x333A70u: goto label_333a70;
            case 0x333A90u: goto label_333a90;
            case 0x333AA0u: goto label_333aa0;
            case 0x333AACu: goto label_333aac;
            case 0x333AD4u: goto label_333ad4;
            case 0x333AE4u: goto label_333ae4;
            case 0x333B00u: goto label_333b00;
            case 0x333B1Cu: goto label_333b1c;
            case 0x333B38u: goto label_333b38;
            case 0x333B54u: goto label_333b54;
            case 0x333B70u: goto label_333b70;
            case 0x333B90u: goto label_333b90;
            case 0x333BA8u: goto label_333ba8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3330E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3330F0u;
label_3330f0:
    // 0x3330f0: 0xc0cdf18  jal         func_337C60
    ctx->pc = 0x3330F0u;
    SET_GPR_U32(ctx, 31, 0x3330F8u);
    ctx->pc = 0x3330F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3330F0u;
    // 0x3330f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337C60u, 0x3330F0u, 0x3330F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3330F8u;
label_3330f8:
    // 0x3330f8: 0x100002b3  b           . + 4 + (0x2B3 << 2)
    ctx->pc = 0x3330F8u;
    {
        const bool branch_taken_0x3330f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3330FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3330F8u;
        // 0x3330fc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3330f8) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x333100u;
label_333100:
    // 0x333100: 0xc0cde92  jal         func_337A48
    ctx->pc = 0x333100u;
    SET_GPR_U32(ctx, 31, 0x333108u);
    ctx->pc = 0x333104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333100u;
    // 0x333104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A48u, 0x333100u, 0x333108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333108u;
label_333108:
    // 0x333108: 0x100002af  b           . + 4 + (0x2AF << 2)
    ctx->pc = 0x333108u;
    {
        const bool branch_taken_0x333108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333108u;
        // 0x33310c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333108) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x333110u;
label_333110:
    // 0x333110: 0xc0cde66  jal         func_337998
    ctx->pc = 0x333110u;
    SET_GPR_U32(ctx, 31, 0x333118u);
    ctx->pc = 0x333114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333110u;
    // 0x333114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337998u, 0x333110u, 0x333118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333118u;
label_333118:
    // 0x333118: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x333118u;
    SET_GPR_U32(ctx, 31, 0x333120u);
    ctx->pc = 0x33311Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333118u;
    // 0x33311c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x333118u, 0x333120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333120u;
label_333120:
    // 0x333120: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x333120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x333124: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x333124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x333128: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x333128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x33312c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33312cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333130: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x333130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x333134: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x333134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x333138: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x333138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33313c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x33313cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x333140: 0x100002a0  b           . + 4 + (0x2A0 << 2)
    ctx->pc = 0x333140u;
    {
        const bool branch_taken_0x333140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333140u;
        // 0x333144: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333140) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x333148u;
label_333148:
    // 0x333148: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x333148u;
    SET_GPR_U32(ctx, 31, 0x333150u);
    ctx->pc = 0x33314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333148u;
    // 0x33314c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x333148u, 0x333150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333150u;
label_333150:
    // 0x333150: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x333150u;
    SET_GPR_U32(ctx, 31, 0x333158u);
    ctx->pc = 0x333154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333150u;
    // 0x333154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x333150u, 0x333158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333158u;
label_333158:
    // 0x333158: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x333158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x33315c: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x33315cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x333160: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x333160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333164: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x333164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x333168: 0x10000296  b           . + 4 + (0x296 << 2)
    ctx->pc = 0x333168u;
    {
        const bool branch_taken_0x333168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333168u;
        // 0x33316c: 0xac430038  sw          $v1, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333168) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x333170u;
label_333170:
    // 0x333170: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333170u;
    SET_GPR_U32(ctx, 31, 0x333178u);
    ctx->pc = 0x333174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333170u;
    // 0x333174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333170u, 0x333178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333178u;
label_333178:
    // 0x333178: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x333178u;
    SET_GPR_U32(ctx, 31, 0x333180u);
    ctx->pc = 0x33317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333178u;
    // 0x33317c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x333178u, 0x333180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333180u;
label_333180:
    // 0x333180: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x333180u;
    SET_GPR_U32(ctx, 31, 0x333188u);
    ctx->pc = 0x333184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333180u;
    // 0x333184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x333180u, 0x333188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333188u;
label_333188:
    // 0x333188: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x333188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x33318c: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x33318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x333190: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x333190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x333194: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x333194u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x333198: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x333198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x33319c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x33319cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3331a0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x3331a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3331a4: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x3331a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x3331a8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3331A8u;
    {
        const bool branch_taken_0x3331a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3331ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3331A8u;
        // 0x3331ac: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3331a8) {
            ctx->pc = 0x3331E4u;
            goto label_3331e4;
        }
    }
    ctx->pc = 0x3331B0u;
label_3331b0:
    // 0x3331b0: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x3331B0u;
    SET_GPR_U32(ctx, 31, 0x3331B8u);
    ctx->pc = 0x3331B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331B0u;
    // 0x3331b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x3331B0u, 0x3331B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331B8u;
label_3331b8:
    // 0x3331b8: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x3331B8u;
    SET_GPR_U32(ctx, 31, 0x3331C0u);
    ctx->pc = 0x3331BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331B8u;
    // 0x3331bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x3331B8u, 0x3331C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331C0u;
label_3331c0:
    // 0x3331c0: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x3331C0u;
    SET_GPR_U32(ctx, 31, 0x3331C8u);
    ctx->pc = 0x3331C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331C0u;
    // 0x3331c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x3331C0u, 0x3331C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331C8u;
label_3331c8:
    // 0x3331c8: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x3331c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x3331cc: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3331ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x3331d0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3331d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3331d4: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x3331d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x3331d8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x3331d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x3331dc: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x3331dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x3331e0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3331e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3331e4:
    // 0x3331e4: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3331E4u;
    SET_GPR_U32(ctx, 31, 0x3331ECu);
    ctx->pc = 0x3331E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331E4u;
    // 0x3331e8: 0x24a50038  addiu       $a1, $a1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3331E4u, 0x3331ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331ECu;
label_3331ec:
    // 0x3331ec: 0x10000276  b           . + 4 + (0x276 << 2)
    ctx->pc = 0x3331ECu;
    {
        const bool branch_taken_0x3331ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3331F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3331ECu;
        // 0x3331f0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3331ec) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x3331F4u;
label_3331f4:
    // 0x3331f4: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x3331F4u;
    SET_GPR_U32(ctx, 31, 0x3331FCu);
    ctx->pc = 0x3331F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331F4u;
    // 0x3331f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x3331F4u, 0x3331FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331FCu;
label_3331fc:
    // 0x3331fc: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x3331FCu;
    SET_GPR_U32(ctx, 31, 0x333204u);
    ctx->pc = 0x333200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331FCu;
    // 0x333200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x3331FCu, 0x333204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333204u;
label_333204:
    // 0x333204: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x333204u;
    SET_GPR_U32(ctx, 31, 0x33320Cu);
    ctx->pc = 0x333208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333204u;
    // 0x333208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x333204u, 0x33320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33320Cu;
label_33320c:
    // 0x33320c: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x33320cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x333210: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x333210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x333214: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x333214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x333218: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x333218u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33321c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x33321cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x333220: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x333220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x333224: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x333224u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x333228: 0x24840038  addiu       $a0, $a0, 0x38
    ctx->pc = 0x333228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x33322c: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x33322cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x333230: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x333230u;
    SET_GPR_U32(ctx, 31, 0x333238u);
    ctx->pc = 0x333234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333230u;
    // 0x333234: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x333230u, 0x333238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333238u;
label_333238:
    // 0x333238: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x333238u;
    {
        const bool branch_taken_0x333238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333238u;
        // 0x33323c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333238) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x333240u;
label_333240:
    // 0x333240: 0xc0cde66  jal         func_337998
    ctx->pc = 0x333240u;
    SET_GPR_U32(ctx, 31, 0x333248u);
    ctx->pc = 0x333244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333240u;
    // 0x333244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337998u, 0x333240u, 0x333248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333248u;
label_333248:
    // 0x333248: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x333248u;
    SET_GPR_U32(ctx, 31, 0x333250u);
    ctx->pc = 0x33324Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333248u;
    // 0x33324c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x333248u, 0x333250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333250u;
label_333250:
    // 0x333250: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333250u;
    SET_GPR_U32(ctx, 31, 0x333258u);
    ctx->pc = 0x333254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333250u;
    // 0x333254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333250u, 0x333258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333258u;
label_333258:
    // 0x333258: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x333258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x33325c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x33325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x333260: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x333260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x333264: 0x8e250074  lw          $a1, 0x74($s1)
    ctx->pc = 0x333264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x333268: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x333268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x33326c: 0x8e260078  lw          $a2, 0x78($s1)
    ctx->pc = 0x33326cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x333270: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x333270u;
    {
        const bool branch_taken_0x333270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333270u;
        // 0x333274: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333270) {
            ctx->pc = 0x333534u;
            goto label_333534;
        }
    }
    ctx->pc = 0x333278u;
label_333278:
    // 0x333278: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333278u;
    SET_GPR_U32(ctx, 31, 0x333280u);
    ctx->pc = 0x33327Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333278u;
    // 0x33327c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333278u, 0x333280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333280u;
label_333280:
    // 0x333280: 0xc0cde66  jal         func_337998
    ctx->pc = 0x333280u;
    SET_GPR_U32(ctx, 31, 0x333288u);
    ctx->pc = 0x333284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333280u;
    // 0x333284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337998u, 0x333280u, 0x333288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333288u;
label_333288:
    // 0x333288: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x333288u;
    SET_GPR_U32(ctx, 31, 0x333290u);
    ctx->pc = 0x33328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333288u;
    // 0x33328c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x333288u, 0x333290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333290u;
label_333290:
    // 0x333290: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x333290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x333294: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x333294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x333298: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x333298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33329c: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x33329cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x3332a0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3332a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3332a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3332a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3332a8: 0x24a50038  addiu       $a1, $a1, 0x38
    ctx->pc = 0x3332a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
    // 0x3332ac: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x3332acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x3332b0: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3332B0u;
    SET_GPR_U32(ctx, 31, 0x3332B8u);
    ctx->pc = 0x3332B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3332B0u;
    // 0x3332b4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3332B0u, 0x3332B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3332B8u;
label_3332b8:
    // 0x3332b8: 0x10000243  b           . + 4 + (0x243 << 2)
    ctx->pc = 0x3332B8u;
    {
        const bool branch_taken_0x3332b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3332BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3332B8u;
        // 0x3332bc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3332b8) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x3332C0u;
label_3332c0:
    // 0x3332c0: 0xc0cde66  jal         func_337998
    ctx->pc = 0x3332C0u;
    SET_GPR_U32(ctx, 31, 0x3332C8u);
    ctx->pc = 0x3332C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3332C0u;
    // 0x3332c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337998u, 0x3332C0u, 0x3332C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3332C8u;
label_3332c8:
    // 0x3332c8: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x3332C8u;
    SET_GPR_U32(ctx, 31, 0x3332D0u);
    ctx->pc = 0x3332CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3332C8u;
    // 0x3332cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x3332C8u, 0x3332D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3332D0u;
label_3332d0:
    // 0x3332d0: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x3332D0u;
    SET_GPR_U32(ctx, 31, 0x3332D8u);
    ctx->pc = 0x3332D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3332D0u;
    // 0x3332d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x3332D0u, 0x3332D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3332D8u;
label_3332d8:
    // 0x3332d8: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x3332d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x3332dc: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x3332dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x3332e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3332e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3332e4: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x3332e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x3332e8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3332e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3332ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3332ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3332f0: 0x24840038  addiu       $a0, $a0, 0x38
    ctx->pc = 0x3332f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x3332f4: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x3332f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x3332f8: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3332F8u;
    SET_GPR_U32(ctx, 31, 0x333300u);
    ctx->pc = 0x3332FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3332F8u;
    // 0x3332fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3332F8u, 0x333300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333300u;
label_333300:
    // 0x333300: 0x10000231  b           . + 4 + (0x231 << 2)
    ctx->pc = 0x333300u;
    {
        const bool branch_taken_0x333300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333300u;
        // 0x333304: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333300) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x333308u;
label_333308:
    // 0x333308: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333308u;
    SET_GPR_U32(ctx, 31, 0x333310u);
    ctx->pc = 0x33330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333308u;
    // 0x33330c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333308u, 0x333310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333310u;
label_333310:
    // 0x333310: 0xc0cde66  jal         func_337998
    ctx->pc = 0x333310u;
    SET_GPR_U32(ctx, 31, 0x333318u);
    ctx->pc = 0x333314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333310u;
    // 0x333314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337998u, 0x333310u, 0x333318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333318u;
label_333318:
    // 0x333318: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x333318u;
    SET_GPR_U32(ctx, 31, 0x333320u);
    ctx->pc = 0x33331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333318u;
    // 0x33331c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x333318u, 0x333320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333320u;
label_333320:
    // 0x333320: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x333320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x333324: 0x26270038  addiu       $a3, $s1, 0x38
    ctx->pc = 0x333324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x333328: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x333328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x33332c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33332cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333330: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x333330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x333334: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x333334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x333338: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x333338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33333c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x33333cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x333340: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x333340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x333344: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x333344u;
    SET_GPR_U32(ctx, 31, 0x33334Cu);
    ctx->pc = 0x333348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333344u;
    // 0x333348: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x333344u, 0x33334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33334Cu;
label_33334c:
    // 0x33334c: 0x1000021e  b           . + 4 + (0x21E << 2)
    ctx->pc = 0x33334Cu;
    {
        const bool branch_taken_0x33334c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33334Cu;
        // 0x333350: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33334c) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x333354u;
label_333354:
    // 0x333354: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x333354u;
    SET_GPR_U32(ctx, 31, 0x33335Cu);
    ctx->pc = 0x333358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333354u;
    // 0x333358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x333354u, 0x33335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33335Cu;
label_33335c:
    // 0x33335c: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x33335Cu;
    SET_GPR_U32(ctx, 31, 0x333364u);
    ctx->pc = 0x333360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33335Cu;
    // 0x333360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x33335Cu, 0x333364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333364u;
label_333364:
    // 0x333364: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333364u;
    SET_GPR_U32(ctx, 31, 0x33336Cu);
    ctx->pc = 0x333368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333364u;
    // 0x333368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333364u, 0x33336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33336Cu;
label_33336c:
    // 0x33336c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33336cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x333370: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x333370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x333374: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x333374u;
    {
        const bool branch_taken_0x333374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333374u;
        // 0x333378: 0x8c432c7c  lw          $v1, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333374) {
            ctx->pc = 0x3333F0u;
            goto label_3333f0;
        }
    }
    ctx->pc = 0x33337Cu;
label_33337c:
    // 0x33337c: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x33337Cu;
    SET_GPR_U32(ctx, 31, 0x333384u);
    ctx->pc = 0x333380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33337Cu;
    // 0x333380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x33337Cu, 0x333384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333384u;
label_333384:
    // 0x333384: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333384u;
    SET_GPR_U32(ctx, 31, 0x33338Cu);
    ctx->pc = 0x333388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333384u;
    // 0x333388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333384u, 0x33338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33338Cu;
label_33338c:
    // 0x33338c: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x33338Cu;
    SET_GPR_U32(ctx, 31, 0x333394u);
    ctx->pc = 0x333390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33338Cu;
    // 0x333390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x33338Cu, 0x333394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333394u;
label_333394:
    // 0x333394: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x333394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x333398: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x333398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x33339c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x33339Cu;
    {
        const bool branch_taken_0x33339c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3333A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33339Cu;
        // 0x3333a0: 0x8c432c7c  lw          $v1, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33339c) {
            ctx->pc = 0x33343Cu;
            goto label_33343c;
        }
    }
    ctx->pc = 0x3333A4u;
label_3333a4:
    // 0x3333a4: 0xc0cde66  jal         func_337998
    ctx->pc = 0x3333A4u;
    SET_GPR_U32(ctx, 31, 0x3333ACu);
    ctx->pc = 0x3333A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3333A4u;
    // 0x3333a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337998u, 0x3333A4u, 0x3333ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3333ACu;
label_3333ac:
    // 0x3333ac: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x3333ACu;
    SET_GPR_U32(ctx, 31, 0x3333B4u);
    ctx->pc = 0x3333B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3333ACu;
    // 0x3333b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x3333ACu, 0x3333B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3333B4u;
label_3333b4:
    // 0x3333b4: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x3333B4u;
    SET_GPR_U32(ctx, 31, 0x3333BCu);
    ctx->pc = 0x3333B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3333B4u;
    // 0x3333b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x3333B4u, 0x3333BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3333BCu;
label_3333bc:
    // 0x3333bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3333bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3333c0: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x3333c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x3333c4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3333C4u;
    {
        const bool branch_taken_0x3333c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3333C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3333C4u;
        // 0x3333c8: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3333c4) {
            ctx->pc = 0x333488u;
            goto label_333488;
        }
    }
    ctx->pc = 0x3333CCu;
label_3333cc:
    // 0x3333cc: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x3333CCu;
    SET_GPR_U32(ctx, 31, 0x3333D4u);
    ctx->pc = 0x3333D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3333CCu;
    // 0x3333d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x3333CCu, 0x3333D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3333D4u;
label_3333d4:
    // 0x3333d4: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x3333D4u;
    SET_GPR_U32(ctx, 31, 0x3333DCu);
    ctx->pc = 0x3333D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3333D4u;
    // 0x3333d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x3333D4u, 0x3333DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3333DCu;
label_3333dc:
    // 0x3333dc: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x3333DCu;
    SET_GPR_U32(ctx, 31, 0x3333E4u);
    ctx->pc = 0x3333E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3333DCu;
    // 0x3333e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x3333DCu, 0x3333E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3333E4u;
label_3333e4:
    // 0x3333e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3333e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3333e8: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x3333e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x3333ec: 0x8c432c80  lw          $v1, 0x2C80($v0)
    ctx->pc = 0x3333ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482C80u));
label_3333f0:
    // 0x3333f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3333f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3333f4: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x3333f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x3333f8: 0x8c6401bc  lw          $a0, 0x1BC($v1)
    ctx->pc = 0x3333f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x3333fc: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x3333fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x333400: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x333400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x333404: 0x24a50038  addiu       $a1, $a1, 0x38
    ctx->pc = 0x333404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
    // 0x333408: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x333408u;
    SET_GPR_U32(ctx, 31, 0x333410u);
    ctx->pc = 0x33340Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333408u;
    // 0x33340c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x333408u, 0x333410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333410u;
label_333410:
    // 0x333410: 0x100001ed  b           . + 4 + (0x1ED << 2)
    ctx->pc = 0x333410u;
    {
        const bool branch_taken_0x333410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333410u;
        // 0x333414: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333410) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x333418u;
label_333418:
    // 0x333418: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x333418u;
    SET_GPR_U32(ctx, 31, 0x333420u);
    ctx->pc = 0x33341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333418u;
    // 0x33341c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x333418u, 0x333420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333420u;
label_333420:
    // 0x333420: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333420u;
    SET_GPR_U32(ctx, 31, 0x333428u);
    ctx->pc = 0x333424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333420u;
    // 0x333424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333420u, 0x333428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333428u;
label_333428:
    // 0x333428: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x333428u;
    SET_GPR_U32(ctx, 31, 0x333430u);
    ctx->pc = 0x33342Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333428u;
    // 0x33342c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x333428u, 0x333430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333430u;
label_333430:
    // 0x333430: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x333430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x333434: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x333434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x333438: 0x8c432c80  lw          $v1, 0x2C80($v0)
    ctx->pc = 0x333438u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482C80u));
label_33343c:
    // 0x33343c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33343cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x333440: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x333440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x333444: 0x8c6501bc  lw          $a1, 0x1BC($v1)
    ctx->pc = 0x333444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x333448: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x333448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x33344c: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x33344cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x333450: 0x24840038  addiu       $a0, $a0, 0x38
    ctx->pc = 0x333450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x333454: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x333454u;
    SET_GPR_U32(ctx, 31, 0x33345Cu);
    ctx->pc = 0x333458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333454u;
    // 0x333458: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x333454u, 0x33345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33345Cu;
label_33345c:
    // 0x33345c: 0x100001da  b           . + 4 + (0x1DA << 2)
    ctx->pc = 0x33345Cu;
    {
        const bool branch_taken_0x33345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33345Cu;
        // 0x333460: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33345c) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x333464u;
label_333464:
    // 0x333464: 0xc0cde66  jal         func_337998
    ctx->pc = 0x333464u;
    SET_GPR_U32(ctx, 31, 0x33346Cu);
    ctx->pc = 0x333468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333464u;
    // 0x333468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337998u, 0x333464u, 0x33346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33346Cu;
label_33346c:
    // 0x33346c: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x33346Cu;
    SET_GPR_U32(ctx, 31, 0x333474u);
    ctx->pc = 0x333470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33346Cu;
    // 0x333470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x33346Cu, 0x333474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333474u;
label_333474:
    // 0x333474: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333474u;
    SET_GPR_U32(ctx, 31, 0x33347Cu);
    ctx->pc = 0x333478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333474u;
    // 0x333478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333474u, 0x33347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33347Cu;
label_33347c:
    // 0x33347c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33347cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x333480: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x333480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x333484: 0x8c442c80  lw          $a0, 0x2C80($v0)
    ctx->pc = 0x333484u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482C80u));
label_333488:
    // 0x333488: 0x8e250078  lw          $a1, 0x78($s1)
    ctx->pc = 0x333488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x33348c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33348cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x333490: 0x8c8201bc  lw          $v0, 0x1BC($a0)
    ctx->pc = 0x333490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x333494: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x333494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x333498: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x333498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33349c: 0x100001c9  b           . + 4 + (0x1C9 << 2)
    ctx->pc = 0x33349Cu;
    {
        const bool branch_taken_0x33349c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3334A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33349Cu;
        // 0x3334a0: 0xac620038  sw          $v0, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33349c) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x3334A4u;
label_3334a4:
    // 0x3334a4: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x3334A4u;
    SET_GPR_U32(ctx, 31, 0x3334ACu);
    ctx->pc = 0x3334A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3334A4u;
    // 0x3334a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x3334A4u, 0x3334ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3334ACu;
label_3334ac:
    // 0x3334ac: 0xc0cde66  jal         func_337998
    ctx->pc = 0x3334ACu;
    SET_GPR_U32(ctx, 31, 0x3334B4u);
    ctx->pc = 0x3334B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3334ACu;
    // 0x3334b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337998u, 0x3334ACu, 0x3334B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3334B4u;
label_3334b4:
    // 0x3334b4: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x3334B4u;
    SET_GPR_U32(ctx, 31, 0x3334BCu);
    ctx->pc = 0x3334B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3334B4u;
    // 0x3334b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x3334B4u, 0x3334BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3334BCu;
label_3334bc:
    // 0x3334bc: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x3334bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x3334c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3334c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3334c4: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3334c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x3334c8: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x3334c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x3334cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3334ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3334d0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x3334d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3334d4: 0x8e260078  lw          $a2, 0x78($s1)
    ctx->pc = 0x3334d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x3334d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3334d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3334dc: 0x24840038  addiu       $a0, $a0, 0x38
    ctx->pc = 0x3334dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x3334e0: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3334E0u;
    SET_GPR_U32(ctx, 31, 0x3334E8u);
    ctx->pc = 0x3334E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3334E0u;
    // 0x3334e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3334E0u, 0x3334E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3334E8u;
label_3334e8:
    // 0x3334e8: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x3334E8u;
    {
        const bool branch_taken_0x3334e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3334ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3334E8u;
        // 0x3334ec: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3334e8) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x3334F0u;
label_3334f0:
    // 0x3334f0: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x3334F0u;
    SET_GPR_U32(ctx, 31, 0x3334F8u);
    ctx->pc = 0x3334F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3334F0u;
    // 0x3334f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x3334F0u, 0x3334F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3334F8u;
label_3334f8:
    // 0x3334f8: 0xc0cde66  jal         func_337998
    ctx->pc = 0x3334F8u;
    SET_GPR_U32(ctx, 31, 0x333500u);
    ctx->pc = 0x3334FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3334F8u;
    // 0x3334fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337998u, 0x3334F8u, 0x333500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333500u;
label_333500:
    // 0x333500: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333500u;
    SET_GPR_U32(ctx, 31, 0x333508u);
    ctx->pc = 0x333504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333500u;
    // 0x333504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333500u, 0x333508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333508u;
label_333508:
    // 0x333508: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x333508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x33350c: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x33350cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x333510: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x333510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x333514: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x333514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x333518: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x333518u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33351c: 0x8e260078  lw          $a2, 0x78($s1)
    ctx->pc = 0x33351cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x333520: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x333520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x333524: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x333524u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x333528: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x333528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x33352c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x33352cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x333530: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x333530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_333534:
    // 0x333534: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x333534u;
    SET_GPR_U32(ctx, 31, 0x33353Cu);
    ctx->pc = 0x333538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333534u;
    // 0x333538: 0x24840038  addiu       $a0, $a0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x333534u, 0x33353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33353Cu;
label_33353c:
    // 0x33353c: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x33353Cu;
    {
        const bool branch_taken_0x33353c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33353Cu;
        // 0x333540: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33353c) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x333544u;
label_333544:
    // 0x333544: 0xc0cde66  jal         func_337998
    ctx->pc = 0x333544u;
    SET_GPR_U32(ctx, 31, 0x33354Cu);
    ctx->pc = 0x333548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333544u;
    // 0x333548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337998u, 0x333544u, 0x33354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33354Cu;
label_33354c:
    // 0x33354c: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x33354Cu;
    SET_GPR_U32(ctx, 31, 0x333554u);
    ctx->pc = 0x333550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33354Cu;
    // 0x333550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x33354Cu, 0x333554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333554u;
label_333554:
    // 0x333554: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x333554u;
    SET_GPR_U32(ctx, 31, 0x33355Cu);
    ctx->pc = 0x333558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333554u;
    // 0x333558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x333554u, 0x33355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33355Cu;
label_33355c:
    // 0x33355c: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x33355cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x333560: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x333560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x333564: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x333564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x333568: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x333568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33356c: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x33356cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x333570: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x333570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x333574: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x333574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x333578: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x333578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x33357c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x33357cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x333580: 0x24840038  addiu       $a0, $a0, 0x38
    ctx->pc = 0x333580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x333584: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x333584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x333588: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x333588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x33358c: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x33358Cu;
    SET_GPR_U32(ctx, 31, 0x333594u);
    ctx->pc = 0x333590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33358Cu;
    // 0x333590: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x33358Cu, 0x333594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333594u;
label_333594:
    // 0x333594: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x333594u;
    {
        const bool branch_taken_0x333594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333594u;
        // 0x333598: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333594) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x33359Cu;
label_33359c:
    // 0x33359c: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x33359Cu;
    SET_GPR_U32(ctx, 31, 0x3335A4u);
    ctx->pc = 0x3335A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33359Cu;
    // 0x3335a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x33359Cu, 0x3335A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3335A4u;
label_3335a4:
    // 0x3335a4: 0xc0cde66  jal         func_337998
    ctx->pc = 0x3335A4u;
    SET_GPR_U32(ctx, 31, 0x3335ACu);
    ctx->pc = 0x3335A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3335A4u;
    // 0x3335a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337998u, 0x3335A4u, 0x3335ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3335ACu;
label_3335ac:
    // 0x3335ac: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x3335acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x3335b0: 0x26250038  addiu       $a1, $s1, 0x38
    ctx->pc = 0x3335b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x3335b4: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x3335b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x3335b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3335b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3335bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3335bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3335c0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3335c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3335c4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3335c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3335c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3335c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3335cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3335ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3335d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3335d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3335d4: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x3335D4u;
    {
        const bool branch_taken_0x3335d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3335D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3335D4u;
        // 0x3335d8: 0xae220480  sw          $v0, 0x480($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3335d4) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x3335DCu;
label_3335dc:
    // 0x3335dc: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x3335DCu;
    SET_GPR_U32(ctx, 31, 0x3335E4u);
    ctx->pc = 0x3335E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3335DCu;
    // 0x3335e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x3335DCu, 0x3335E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3335E4u;
label_3335e4:
    // 0x3335e4: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x3335E4u;
    SET_GPR_U32(ctx, 31, 0x3335ECu);
    ctx->pc = 0x3335E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3335E4u;
    // 0x3335e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x3335E4u, 0x3335ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3335ECu;
label_3335ec:
    // 0x3335ec: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x3335ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x3335f0: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x3335f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x3335f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3335f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3335f8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3335f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3335fc: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x3335fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x333600: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x333600u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x333604: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x333604u;
    {
        const bool branch_taken_0x333604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333604u;
        // 0x333608: 0xae230480  sw          $v1, 0x480($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333604) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x33360Cu;
label_33360c:
    // 0x33360c: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x33360Cu;
    SET_GPR_U32(ctx, 31, 0x333614u);
    ctx->pc = 0x333610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33360Cu;
    // 0x333610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x33360Cu, 0x333614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333614u;
label_333614:
    // 0x333614: 0xc0cde66  jal         func_337998
    ctx->pc = 0x333614u;
    SET_GPR_U32(ctx, 31, 0x33361Cu);
    ctx->pc = 0x333618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333614u;
    // 0x333618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337998u, 0x333614u, 0x33361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33361Cu;
label_33361c:
    // 0x33361c: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x33361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x333620: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x333620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x333624: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x333624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333628: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x333628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33362c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33362cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x333630: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x333630u;
    {
        const bool branch_taken_0x333630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x333634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333630u;
        // 0x333634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333630) {
            ctx->pc = 0x3336CCu;
            goto label_3336cc;
        }
    }
    ctx->pc = 0x333638u;
    // 0x333638: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x333638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x33363c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33363cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333640: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x333640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x333644: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x333644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x333648: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x333648u;
    {
        const bool branch_taken_0x333648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333648u;
        // 0x33364c: 0x3282b  sltu        $a1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333648) {
            ctx->pc = 0x3336CCu;
            goto label_3336cc;
        }
    }
    ctx->pc = 0x333650u;
label_333650:
    // 0x333650: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x333650u;
    SET_GPR_U32(ctx, 31, 0x333658u);
    ctx->pc = 0x333654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333650u;
    // 0x333654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x333650u, 0x333658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333658u;
label_333658:
    // 0x333658: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333658u;
    SET_GPR_U32(ctx, 31, 0x333660u);
    ctx->pc = 0x33365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333658u;
    // 0x33365c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333658u, 0x333660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333660u;
label_333660:
    // 0x333660: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x333660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x333664: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x333664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333668: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x333668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x33366c: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x33366cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x333670: 0x106000ef  beqz        $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x333670u;
    {
        const bool branch_taken_0x333670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x333674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333670u;
        // 0x333674: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333670) {
            ctx->pc = 0x333A30u;
            goto label_333a30;
        }
    }
    ctx->pc = 0x333678u;
    // 0x333678: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x333678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x33367c: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x33367Cu;
    {
        const bool branch_taken_0x33367c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33367Cu;
        // 0x333680: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33367c) {
            ctx->pc = 0x333A30u;
            goto label_333a30;
        }
    }
    ctx->pc = 0x333684u;
label_333684:
    // 0x333684: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x333684u;
    SET_GPR_U32(ctx, 31, 0x33368Cu);
    ctx->pc = 0x333688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333684u;
    // 0x333688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x333684u, 0x33368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33368Cu;
label_33368c:
    // 0x33368c: 0xc0cde66  jal         func_337998
    ctx->pc = 0x33368Cu;
    SET_GPR_U32(ctx, 31, 0x333694u);
    ctx->pc = 0x333690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33368Cu;
    // 0x333690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337998u, 0x33368Cu, 0x333694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333694u;
label_333694:
    // 0x333694: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x333694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x333698: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x333698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x33369c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33369cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3336a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3336a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3336a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3336a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3336a8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3336A8u;
    {
        const bool branch_taken_0x3336a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3336ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3336A8u;
        // 0x3336ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3336a8) {
            ctx->pc = 0x3336C8u;
            goto label_3336c8;
        }
    }
    ctx->pc = 0x3336B0u;
    // 0x3336b0: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x3336b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x3336b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3336b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3336b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3336b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3336bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3336bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3336c0: 0x50600140  beql        $v1, $zero, . + 4 + (0x140 << 2)
    ctx->pc = 0x3336C0u;
    {
        const bool branch_taken_0x3336c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3336c0) {
            ctx->pc = 0x3336C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3336C0u;
            // 0x3336c4: 0xae25003c  sw          $a1, 0x3C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x3336C8u;
label_3336c8:
    // 0x3336c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3336c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3336cc:
    // 0x3336cc: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x3336CCu;
    {
        const bool branch_taken_0x3336cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3336D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3336CCu;
        // 0x3336d0: 0xae25003c  sw          $a1, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3336cc) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x3336D4u;
label_3336d4:
    // 0x3336d4: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x3336D4u;
    SET_GPR_U32(ctx, 31, 0x3336DCu);
    ctx->pc = 0x3336D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3336D4u;
    // 0x3336d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x3336D4u, 0x3336DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3336DCu;
label_3336dc:
    // 0x3336dc: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x3336DCu;
    SET_GPR_U32(ctx, 31, 0x3336E4u);
    ctx->pc = 0x3336E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3336DCu;
    // 0x3336e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x3336DCu, 0x3336E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3336E4u;
label_3336e4:
    // 0x3336e4: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x3336e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x3336e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3336e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3336ec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3336ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3336f0: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x3336f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x3336f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3336F4u;
    {
        const bool branch_taken_0x3336f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3336F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3336F4u;
        // 0x3336f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3336f4) {
            ctx->pc = 0x333708u;
            goto label_333708;
        }
    }
    ctx->pc = 0x3336FCu;
    // 0x3336fc: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x3336fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x333700: 0x50400130  beql        $v0, $zero, . + 4 + (0x130 << 2)
    ctx->pc = 0x333700u;
    {
        const bool branch_taken_0x333700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333700) {
            ctx->pc = 0x333704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333700u;
            // 0x333704: 0xae24003c  sw          $a0, 0x3C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x333708u;
label_333708:
    // 0x333708: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x333708u;
    {
        const bool branch_taken_0x333708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333708u;
        // 0x33370c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333708) {
            ctx->pc = 0x333A30u;
            goto label_333a30;
        }
    }
    ctx->pc = 0x333710u;
label_333710:
    // 0x333710: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x333710u;
    SET_GPR_U32(ctx, 31, 0x333718u);
    ctx->pc = 0x333714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333710u;
    // 0x333714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x333710u, 0x333718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333718u;
label_333718:
    // 0x333718: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333718u;
    SET_GPR_U32(ctx, 31, 0x333720u);
    ctx->pc = 0x33371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333718u;
    // 0x33371c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333718u, 0x333720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333720u;
label_333720:
    // 0x333720: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x333720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x333724: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x333724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x333728: 0x8e250074  lw          $a1, 0x74($s1)
    ctx->pc = 0x333728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x33372c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33372cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x333730: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x333730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x333734: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x333734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x333738: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x333738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x33373c: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x33373Cu;
    {
        const bool branch_taken_0x33373c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33373Cu;
        // 0x333740: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33373c) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x333744u;
label_333744:
    // 0x333744: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x333744u;
    SET_GPR_U32(ctx, 31, 0x33374Cu);
    ctx->pc = 0x333748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333744u;
    // 0x333748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x333744u, 0x33374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33374Cu;
label_33374c:
    // 0x33374c: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x33374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x333750: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x333750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x333754: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x333754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333758: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x333758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33375c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33375cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x333760: 0x31823  negu        $v1, $v1
    ctx->pc = 0x333760u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x333764: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x333764u;
    {
        const bool branch_taken_0x333764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333764u;
        // 0x333768: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333764) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x33376Cu;
label_33376c:
    // 0x33376c: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x33376Cu;
    SET_GPR_U32(ctx, 31, 0x333774u);
    ctx->pc = 0x333770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33376Cu;
    // 0x333770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x33376Cu, 0x333774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333774u;
label_333774:
    // 0x333774: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x333774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x333778: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x333778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x33377c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33377cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333780: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x333780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x333784: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x333784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x333788: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x333788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33378c: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x33378Cu;
    {
        const bool branch_taken_0x33378c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33378Cu;
        // 0x333790: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33378c) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x333794u;
label_333794:
    // 0x333794: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x333794u;
    SET_GPR_U32(ctx, 31, 0x33379Cu);
    ctx->pc = 0x333798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333794u;
    // 0x333798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x333794u, 0x33379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33379Cu;
label_33379c:
    // 0x33379c: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x33379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x3337a0: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x3337a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x3337a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3337a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3337a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3337a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3337ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3337acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3337b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3337b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3337b4: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x3337B4u;
    {
        const bool branch_taken_0x3337b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3337B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3337B4u;
        // 0x3337b8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3337b4) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x3337BCu;
label_3337bc:
    // 0x3337bc: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x3337BCu;
    SET_GPR_U32(ctx, 31, 0x3337C4u);
    ctx->pc = 0x3337C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3337BCu;
    // 0x3337c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x3337BCu, 0x3337C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3337C4u;
label_3337c4:
    // 0x3337c4: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x3337C4u;
    SET_GPR_U32(ctx, 31, 0x3337CCu);
    ctx->pc = 0x3337C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3337C4u;
    // 0x3337c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x3337C4u, 0x3337CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3337CCu;
label_3337cc:
    // 0x3337cc: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3337ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x3337d0: 0x27b0000c  addiu       $s0, $sp, 0xC
    ctx->pc = 0x3337d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x3337d4: 0x8e250078  lw          $a1, 0x78($s1)
    ctx->pc = 0x3337d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x3337d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3337d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3337dc: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x3337dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x3337e0: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3337E0u;
    SET_GPR_U32(ctx, 31, 0x3337E8u);
    ctx->pc = 0x3337E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3337E0u;
    // 0x3337e4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3337E0u, 0x3337E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3337E8u;
label_3337e8:
    // 0x3337e8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3337e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3337ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3337ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3337f0: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3337f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x3337f4: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x3337f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x3337f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3337f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3337fc: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x3337fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x333800: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x333800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x333804: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x333804u;
    SET_GPR_U32(ctx, 31, 0x33380Cu);
    ctx->pc = 0x333808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333804u;
    // 0x333808: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x333804u, 0x33380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33380Cu;
label_33380c:
    // 0x33380c: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x33380Cu;
    {
        const bool branch_taken_0x33380c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33380Cu;
        // 0x333810: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33380c) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x333814u;
label_333814:
    // 0x333814: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333814u;
    SET_GPR_U32(ctx, 31, 0x33381Cu);
    ctx->pc = 0x333818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333814u;
    // 0x333818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333814u, 0x33381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33381Cu;
label_33381c:
    // 0x33381c: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x33381Cu;
    SET_GPR_U32(ctx, 31, 0x333824u);
    ctx->pc = 0x333820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33381Cu;
    // 0x333820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x33381Cu, 0x333824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333824u;
label_333824:
    // 0x333824: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x333824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x333828: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x333828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33382c: 0x8e250078  lw          $a1, 0x78($s1)
    ctx->pc = 0x33382cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x333830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333834: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x333834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x333838: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x333838u;
    SET_GPR_U32(ctx, 31, 0x333840u);
    ctx->pc = 0x33383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333838u;
    // 0x33383c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x333838u, 0x333840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333840u;
label_333840:
    // 0x333840: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x333840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x333844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333848: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x333848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x33384c: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x33384cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x333850: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x333850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x333854: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x333854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x333858: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x333858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33385c: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x33385Cu;
    SET_GPR_U32(ctx, 31, 0x333864u);
    ctx->pc = 0x333860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33385Cu;
    // 0x333860: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x33385Cu, 0x333864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333864u;
label_333864:
    // 0x333864: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x333864u;
    {
        const bool branch_taken_0x333864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333864u;
        // 0x333868: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333864) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x33386Cu;
label_33386c:
    // 0x33386c: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x33386Cu;
    SET_GPR_U32(ctx, 31, 0x333874u);
    ctx->pc = 0x333870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33386Cu;
    // 0x333870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x33386Cu, 0x333874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333874u;
label_333874:
    // 0x333874: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x333874u;
    SET_GPR_U32(ctx, 31, 0x33387Cu);
    ctx->pc = 0x333878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333874u;
    // 0x333878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x333874u, 0x33387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33387Cu;
label_33387c:
    // 0x33387c: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x33387cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x333880: 0x27b00014  addiu       $s0, $sp, 0x14
    ctx->pc = 0x333880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x333884: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x333884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x333888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33388c: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x33388cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x333890: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x333890u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x333894: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x333894u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x333898: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x333898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x33389c: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x33389Cu;
    SET_GPR_U32(ctx, 31, 0x3338A4u);
    ctx->pc = 0x3338A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33389Cu;
    // 0x3338a0: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x33389Cu, 0x3338A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3338A4u;
label_3338a4:
    // 0x3338a4: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3338a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x3338a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3338a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3338ac: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x3338acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x3338b0: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x3338b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x3338b4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x3338b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3338b8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x3338b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3338bc: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x3338bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3338c0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x3338c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3338c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3338c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3338c8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3338C8u;
    {
        const bool branch_taken_0x3338c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3338CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3338C8u;
        // 0x3338cc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3338c8) {
            ctx->pc = 0x333930u;
            goto label_333930;
        }
    }
    ctx->pc = 0x3338D0u;
label_3338d0:
    // 0x3338d0: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x3338D0u;
    SET_GPR_U32(ctx, 31, 0x3338D8u);
    ctx->pc = 0x3338D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3338D0u;
    // 0x3338d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x3338D0u, 0x3338D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3338D8u;
label_3338d8:
    // 0x3338d8: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x3338D8u;
    SET_GPR_U32(ctx, 31, 0x3338E0u);
    ctx->pc = 0x3338DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3338D8u;
    // 0x3338dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x3338D8u, 0x3338E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3338E0u;
label_3338e0:
    // 0x3338e0: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x3338e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x3338e4: 0x27b00018  addiu       $s0, $sp, 0x18
    ctx->pc = 0x3338e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x3338e8: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x3338e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x3338ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3338ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3338f0: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x3338f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x3338f4: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x3338f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3338f8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3338f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3338fc: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x3338fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x333900: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x333900u;
    SET_GPR_U32(ctx, 31, 0x333908u);
    ctx->pc = 0x333904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333900u;
    // 0x333904: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x333900u, 0x333908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333908u;
label_333908:
    // 0x333908: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x333908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x33390c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33390cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333910: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x333910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x333914: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x333914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x333918: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x333918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33391c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x33391cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x333920: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x333920u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x333924: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x333924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x333928: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x333928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33392c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x33392cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_333930:
    // 0x333930: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x333930u;
    SET_GPR_U32(ctx, 31, 0x333938u);
    ctx->pc = 0x333934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333930u;
    // 0x333934: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x333930u, 0x333938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333938u;
label_333938:
    // 0x333938: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x333938u;
    {
        const bool branch_taken_0x333938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333938u;
        // 0x33393c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333938) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x333940u;
label_333940:
    // 0x333940: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x333940u;
    SET_GPR_U32(ctx, 31, 0x333948u);
    ctx->pc = 0x333944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333940u;
    // 0x333944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x333940u, 0x333948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333948u;
label_333948:
    // 0x333948: 0xc0cde66  jal         func_337998
    ctx->pc = 0x333948u;
    SET_GPR_U32(ctx, 31, 0x333950u);
    ctx->pc = 0x33394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333948u;
    // 0x33394c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337998u, 0x333948u, 0x333950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333950u;
label_333950:
    // 0x333950: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x333950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x333954: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x333954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x333958: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x333958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x33395c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33395cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x333960: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x333960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333964: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x333964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x333968: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x333968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33396c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x33396Cu;
    {
        const bool branch_taken_0x33396c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33396Cu;
        // 0x333970: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33396c) {
            ctx->pc = 0x333998u;
            goto label_333998;
        }
    }
    ctx->pc = 0x333974u;
label_333974:
    // 0x333974: 0xc0cde66  jal         func_337998
    ctx->pc = 0x333974u;
    SET_GPR_U32(ctx, 31, 0x33397Cu);
    ctx->pc = 0x333978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333974u;
    // 0x333978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337998u, 0x333974u, 0x33397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33397Cu;
label_33397c:
    // 0x33397c: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x33397Cu;
    SET_GPR_U32(ctx, 31, 0x333984u);
    ctx->pc = 0x333980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33397Cu;
    // 0x333980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x33397Cu, 0x333984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333984u;
label_333984:
    // 0x333984: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x333984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x333988: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x333988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x33398c: 0x8e250074  lw          $a1, 0x74($s1)
    ctx->pc = 0x33398cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x333990: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x333990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x333994: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x333994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_333998:
    // 0x333998: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x333998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33399c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33399cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3339a0: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x3339A0u;
    {
        const bool branch_taken_0x3339a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3339A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3339A0u;
        // 0x3339a4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3339a0) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x3339A8u;
label_3339a8:
    // 0x3339a8: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x3339A8u;
    SET_GPR_U32(ctx, 31, 0x3339B0u);
    ctx->pc = 0x3339ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3339A8u;
    // 0x3339ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x3339A8u, 0x3339B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3339B0u;
label_3339b0:
    // 0x3339b0: 0xc0cde66  jal         func_337998
    ctx->pc = 0x3339B0u;
    SET_GPR_U32(ctx, 31, 0x3339B8u);
    ctx->pc = 0x3339B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3339B0u;
    // 0x3339b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337998u, 0x3339B0u, 0x3339B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3339B8u;
label_3339b8:
    // 0x3339b8: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x3339b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x3339bc: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x3339bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x3339c0: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x3339c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x3339c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3339c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3339c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3339c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3339cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3339ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3339d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3339d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3339d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3339D4u;
    {
        const bool branch_taken_0x3339d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3339D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3339D4u;
        // 0x3339d8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3339d4) {
            ctx->pc = 0x333A00u;
            goto label_333a00;
        }
    }
    ctx->pc = 0x3339DCu;
label_3339dc:
    // 0x3339dc: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x3339DCu;
    SET_GPR_U32(ctx, 31, 0x3339E4u);
    ctx->pc = 0x3339E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3339DCu;
    // 0x3339e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x3339DCu, 0x3339E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3339E4u;
label_3339e4:
    // 0x3339e4: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x3339E4u;
    SET_GPR_U32(ctx, 31, 0x3339ECu);
    ctx->pc = 0x3339E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3339E4u;
    // 0x3339e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x3339E4u, 0x3339ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3339ECu;
label_3339ec:
    // 0x3339ec: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x3339ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x3339f0: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x3339f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x3339f4: 0x8e250078  lw          $a1, 0x78($s1)
    ctx->pc = 0x3339f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x3339f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3339f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3339fc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3339fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_333a00:
    // 0x333a00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x333a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x333a04: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x333a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x333a08: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x333A08u;
    {
        const bool branch_taken_0x333a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A08u;
        // 0x333a0c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a08) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x333A10u;
label_333a10:
    // 0x333a10: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x333A10u;
    SET_GPR_U32(ctx, 31, 0x333A18u);
    ctx->pc = 0x333A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333A10u;
    // 0x333a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x333A10u, 0x333A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333A18u;
label_333a18:
    // 0x333a18: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x333a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x333a1c: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x333a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x333a20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x333a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333a24: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x333a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x333a28: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x333a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x333a2c: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x333a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_333a30:
    // 0x333a30: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x333A30u;
    {
        const bool branch_taken_0x333a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A30u;
        // 0x333a34: 0xae24003c  sw          $a0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a30) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x333A38u;
label_333a38:
    // 0x333a38: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x333a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x333a3c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x333A3Cu;
    {
        const bool branch_taken_0x333a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x333a3c) {
            ctx->pc = 0x333A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333A3Cu;
            // 0x333a40: 0x8e220048  lw          $v0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333A58u;
            goto label_333a58;
        }
    }
    ctx->pc = 0x333A44u;
    // 0x333a44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x333a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333a48: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x333A48u;
    SET_GPR_U32(ctx, 31, 0x333A50u);
    ctx->pc = 0x333A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333A48u;
    // 0x333a4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x333A48u, 0x333A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333A50u;
label_333a50:
    // 0x333a50: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x333A50u;
    {
        const bool branch_taken_0x333a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A50u;
        // 0x333a54: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a50) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x333A58u;
label_333a58:
    // 0x333a58: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x333A58u;
    {
        const bool branch_taken_0x333a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x333a58) {
            ctx->pc = 0x333A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333A58u;
            // 0x333a5c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x333A60u;
            goto label_333a60;
        }
    }
    ctx->pc = 0x333A60u;
label_333a60:
    // 0x333a60: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x333a60u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x333a64: 0x1012  mflo        $v0
    ctx->pc = 0x333a64u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x333a68: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x333A68u;
    {
        const bool branch_taken_0x333a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A68u;
        // 0x333a6c: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a68) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x333A70u;
label_333a70:
    // 0x333a70: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x333a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x333a74: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x333a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x333a78: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x333A78u;
    {
        const bool branch_taken_0x333a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333a78) {
            ctx->pc = 0x333A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333A78u;
            // 0x333a7c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x333A80u;
            goto label_333a80;
        }
    }
    ctx->pc = 0x333A80u;
label_333a80:
    // 0x333a80: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x333a80u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x333a84: 0x1810  mfhi        $v1
    ctx->pc = 0x333a84u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x333a88: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x333A88u;
    {
        const bool branch_taken_0x333a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A88u;
        // 0x333a8c: 0xae23003c  sw          $v1, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a88) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x333A90u;
label_333a90:
    // 0x333a90: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333A90u;
    SET_GPR_U32(ctx, 31, 0x333A98u);
    ctx->pc = 0x333A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333A90u;
    // 0x333a94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333A90u, 0x333A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333A98u;
label_333a98:
    // 0x333a98: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x333A98u;
    {
        const bool branch_taken_0x333a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A98u;
        // 0x333a9c: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a98) {
            ctx->pc = 0x333B88u;
            goto label_333b88;
        }
    }
    ctx->pc = 0x333AA0u;
label_333aa0:
    // 0x333aa0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x333aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x333aa4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x333AA4u;
    {
        const bool branch_taken_0x333aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333AA4u;
        // 0x333aa8: 0xae220498  sw          $v0, 0x498($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333aa4) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x333AACu;
label_333aac:
    // 0x333aac: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333AACu;
    SET_GPR_U32(ctx, 31, 0x333AB4u);
    ctx->pc = 0x333AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333AACu;
    // 0x333ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333AACu, 0x333AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333AB4u;
label_333ab4:
    // 0x333ab4: 0xc0cdf2e  jal         func_337CB8
    ctx->pc = 0x333AB4u;
    SET_GPR_U32(ctx, 31, 0x333ABCu);
    ctx->pc = 0x333AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333AB4u;
    // 0x333ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x333AB4u, 0x333ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333ABCu;
label_333abc:
    // 0x333abc: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x333abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x333ac0: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x333ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x333ac4: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x333ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x333ac8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x333ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x333acc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x333ACCu;
    {
        const bool branch_taken_0x333acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333ACCu;
        // 0x333ad0: 0xae23005c  sw          $v1, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333acc) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x333AD4u;
label_333ad4:
    // 0x333ad4: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333AD4u;
    SET_GPR_U32(ctx, 31, 0x333ADCu);
    ctx->pc = 0x333AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333AD4u;
    // 0x333ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333AD4u, 0x333ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333ADCu;
label_333adc:
    // 0x333adc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x333ADCu;
    {
        const bool branch_taken_0x333adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333ADCu;
        // 0x333ae0: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333adc) {
            ctx->pc = 0x333B88u;
            goto label_333b88;
        }
    }
    ctx->pc = 0x333AE4u;
label_333ae4:
    // 0x333ae4: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333AE4u;
    SET_GPR_U32(ctx, 31, 0x333AECu);
    ctx->pc = 0x333AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333AE4u;
    // 0x333ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333AE4u, 0x333AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333AECu;
label_333aec:
    // 0x333aec: 0x8e220480  lw          $v0, 0x480($s1)
    ctx->pc = 0x333aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
    // 0x333af0: 0x4410035  bgez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x333AF0u;
    {
        const bool branch_taken_0x333af0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x333AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333AF0u;
        // 0x333af4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333af0) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x333AF8u;
    // 0x333af8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x333AF8u;
    {
        const bool branch_taken_0x333af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333AF8u;
        // 0x333afc: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333af8) {
            ctx->pc = 0x333B88u;
            goto label_333b88;
        }
    }
    ctx->pc = 0x333B00u;
label_333b00:
    // 0x333b00: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333B00u;
    SET_GPR_U32(ctx, 31, 0x333B08u);
    ctx->pc = 0x333B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333B00u;
    // 0x333b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333B00u, 0x333B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333B08u;
label_333b08:
    // 0x333b08: 0x8e220480  lw          $v0, 0x480($s1)
    ctx->pc = 0x333b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
    // 0x333b0c: 0x1c40002e  bgtz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x333B0Cu;
    {
        const bool branch_taken_0x333b0c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x333B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B0Cu;
        // 0x333b10: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b0c) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x333B14u;
    // 0x333b14: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x333B14u;
    {
        const bool branch_taken_0x333b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B14u;
        // 0x333b18: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b14) {
            ctx->pc = 0x333B88u;
            goto label_333b88;
        }
    }
    ctx->pc = 0x333B1Cu;
label_333b1c:
    // 0x333b1c: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333B1Cu;
    SET_GPR_U32(ctx, 31, 0x333B24u);
    ctx->pc = 0x333B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333B1Cu;
    // 0x333b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333B1Cu, 0x333B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333B24u;
label_333b24:
    // 0x333b24: 0x8e220480  lw          $v0, 0x480($s1)
    ctx->pc = 0x333b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
    // 0x333b28: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x333B28u;
    {
        const bool branch_taken_0x333b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x333B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B28u;
        // 0x333b2c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b28) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x333B30u;
    // 0x333b30: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x333B30u;
    {
        const bool branch_taken_0x333b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B30u;
        // 0x333b34: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b30) {
            ctx->pc = 0x333B88u;
            goto label_333b88;
        }
    }
    ctx->pc = 0x333B38u;
label_333b38:
    // 0x333b38: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333B38u;
    SET_GPR_U32(ctx, 31, 0x333B40u);
    ctx->pc = 0x333B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333B38u;
    // 0x333b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333B38u, 0x333B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333B40u;
label_333b40:
    // 0x333b40: 0x8e220480  lw          $v0, 0x480($s1)
    ctx->pc = 0x333b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
    // 0x333b44: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x333B44u;
    {
        const bool branch_taken_0x333b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x333B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B44u;
        // 0x333b48: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b44) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x333B4Cu;
    // 0x333b4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x333B4Cu;
    {
        const bool branch_taken_0x333b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B4Cu;
        // 0x333b50: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b4c) {
            ctx->pc = 0x333B88u;
            goto label_333b88;
        }
    }
    ctx->pc = 0x333B54u;
label_333b54:
    // 0x333b54: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333B54u;
    SET_GPR_U32(ctx, 31, 0x333B5Cu);
    ctx->pc = 0x333B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333B54u;
    // 0x333b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333B54u, 0x333B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333B5Cu;
label_333b5c:
    // 0x333b5c: 0x8e220480  lw          $v0, 0x480($s1)
    ctx->pc = 0x333b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
    // 0x333b60: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x333B60u;
    {
        const bool branch_taken_0x333b60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x333B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B60u;
        // 0x333b64: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b60) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x333B68u;
    // 0x333b68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x333B68u;
    {
        const bool branch_taken_0x333b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B68u;
        // 0x333b6c: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b68) {
            ctx->pc = 0x333B88u;
            goto label_333b88;
        }
    }
    ctx->pc = 0x333B70u;
label_333b70:
    // 0x333b70: 0xc0cde6e  jal         func_3379B8
    ctx->pc = 0x333B70u;
    SET_GPR_U32(ctx, 31, 0x333B78u);
    ctx->pc = 0x333B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333B70u;
    // 0x333b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3379B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3379B8u, 0x333B70u, 0x333B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333B78u;
label_333b78:
    // 0x333b78: 0x8e220480  lw          $v0, 0x480($s1)
    ctx->pc = 0x333b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
    // 0x333b7c: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x333B7Cu;
    {
        const bool branch_taken_0x333b7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x333B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B7Cu;
        // 0x333b80: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b7c) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x333B84u;
    // 0x333b84: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x333b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_333b88:
    // 0x333b88: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x333B88u;
    {
        const bool branch_taken_0x333b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B88u;
        // 0x333b8c: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b88) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x333B90u;
label_333b90:
    // 0x333b90: 0x8e260044  lw          $a2, 0x44($s1)
    ctx->pc = 0x333b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x333b94: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x333b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x333b98: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x333B98u;
    SET_GPR_U32(ctx, 31, 0x333BA0u);
    ctx->pc = 0x333B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333B98u;
    // 0x333b9c: 0x8e25003c  lw          $a1, 0x3C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x333B98u, 0x333BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333BA0u;
label_333ba0:
    // 0x333ba0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x333BA0u;
    {
        const bool branch_taken_0x333ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333BA0u;
        // 0x333ba4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333ba0) {
            ctx->pc = 0x333BC8u;
            return;
        }
    }
    ctx->pc = 0x333BA8u;
label_333ba8:
    // 0x333ba8: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x333ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x333bac: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x333bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x333bb0: 0xc0efa24  jal         func_3BE890
    ctx->pc = 0x333BB0u;
    SET_GPR_U32(ctx, 31, 0x333BB8u);
    ctx->pc = 0x333BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333BB0u;
    // 0x333bb4: 0x8e260044  lw          $a2, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x333BB0u, 0x333BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333BB8u;
label_333bb8:
    // 0x333bb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x333BB8u;
    {
        const bool branch_taken_0x333bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333BB8u;
        // 0x333bbc: 0xae220480  sw          $v0, 0x480($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333bb8) {
            ctx->pc = 0x333BC4u;
            return;
        }
    }
    ctx->pc = 0x333BC0u;
}
