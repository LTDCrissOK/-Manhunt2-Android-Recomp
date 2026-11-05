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

// Function: sub_002230C0
// Address: 0x2230c0 - 0x223670
void sub_002230C0_0x2230c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002230C0_0x2230c0");
#endif

    switch (ctx->pc) {
        case 0x2230f4u: goto label_2230f4;
        case 0x223108u: goto label_223108;
        case 0x223114u: goto label_223114;
        case 0x223124u: goto label_223124;
        case 0x223144u: goto label_223144;
        case 0x223168u: goto label_223168;
        case 0x22318cu: goto label_22318c;
        case 0x2231b0u: goto label_2231b0;
        case 0x2231e4u: goto label_2231e4;
        case 0x2231f8u: goto label_2231f8;
        case 0x223204u: goto label_223204;
        case 0x223214u: goto label_223214;
        case 0x223234u: goto label_223234;
        case 0x223258u: goto label_223258;
        case 0x223284u: goto label_223284;
        case 0x223290u: goto label_223290;
        case 0x2232a4u: goto label_2232a4;
        case 0x2232b8u: goto label_2232b8;
        case 0x2232d0u: goto label_2232d0;
        case 0x2232e4u: goto label_2232e4;
        case 0x2232fcu: goto label_2232fc;
        case 0x223310u: goto label_223310;
        case 0x223328u: goto label_223328;
        case 0x22333cu: goto label_22333c;
        case 0x223354u: goto label_223354;
        case 0x223368u: goto label_223368;
        case 0x223380u: goto label_223380;
        case 0x223394u: goto label_223394;
        case 0x2233acu: goto label_2233ac;
        case 0x2233c4u: goto label_2233c4;
        case 0x2233dcu: goto label_2233dc;
        case 0x2233f4u: goto label_2233f4;
        case 0x22340cu: goto label_22340c;
        case 0x223424u: goto label_223424;
        case 0x22343cu: goto label_22343c;
        case 0x223458u: goto label_223458;
        case 0x223470u: goto label_223470;
        case 0x223484u: goto label_223484;
        case 0x22349cu: goto label_22349c;
        case 0x2234b0u: goto label_2234b0;
        case 0x2234c8u: goto label_2234c8;
        case 0x2234e4u: goto label_2234e4;
        case 0x2234fcu: goto label_2234fc;
        case 0x223510u: goto label_223510;
        case 0x223528u: goto label_223528;
        case 0x223544u: goto label_223544;
        case 0x22355cu: goto label_22355c;
        case 0x223578u: goto label_223578;
        case 0x223590u: goto label_223590;
        case 0x2235acu: goto label_2235ac;
        case 0x2235c4u: goto label_2235c4;
        case 0x2235dcu: goto label_2235dc;
        case 0x2235f4u: goto label_2235f4;
        case 0x22360cu: goto label_22360c;
        case 0x223624u: goto label_223624;
        case 0x22363cu: goto label_22363c;
        case 0x223650u: goto label_223650;
        default: break;
    }

    ctx->pc = 0x2230c0u;

    // 0x2230c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2230c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2230c4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x2230c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x2230c8: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x2230c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x2230cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2230ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2230d0: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x2230d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x2230d4: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x2230d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x2230d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2230d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2230dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2230dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2230e0: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x2230e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x2230e4: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x2230e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x2230e8: 0x24a53450  addiu       $a1, $a1, 0x3450
    ctx->pc = 0x2230e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13392));
    // 0x2230ec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2230ECu;
    SET_GPR_U32(ctx, 31, 0x2230F4u);
    ctx->pc = 0x2230F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2230ECu;
    // 0x2230f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2230ECu, 0x2230F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2230F4u;
label_2230f4:
    // 0x2230f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2230f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2230f8: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x2230F8u;
    {
        const bool branch_taken_0x2230f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2230f8) {
            ctx->pc = 0x2230FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2230F8u;
            // 0x2230fc: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2231D8u;
            goto label_2231d8;
        }
    }
    ctx->pc = 0x223100u;
    // 0x223100: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x223100u;
    SET_GPR_U32(ctx, 31, 0x223108u);
    ctx->pc = 0x223104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223100u;
    // 0x223104: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x223100u, 0x223108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223108u;
label_223108:
    // 0x223108: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x223108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22310c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x22310Cu;
    SET_GPR_U32(ctx, 31, 0x223114u);
    ctx->pc = 0x223110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22310Cu;
    // 0x223110: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x22310Cu, 0x223114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223114u;
label_223114:
    // 0x223114: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223118: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x223118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22311c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22311Cu;
    SET_GPR_U32(ctx, 31, 0x223124u);
    ctx->pc = 0x223120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22311Cu;
    // 0x223120: 0x24a53460  addiu       $a1, $a1, 0x3460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22311Cu, 0x223124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223124u;
label_223124:
    // 0x223124: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223128: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223128u;
    {
        const bool branch_taken_0x223128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223128u;
        // 0x22312c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223128) {
            ctx->pc = 0x223138u;
            goto label_223138;
        }
    }
    ctx->pc = 0x223130u;
    // 0x223130: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x223130u;
    {
        const bool branch_taken_0x223130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223130u;
        // 0x223134: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223130) {
            ctx->pc = 0x223284u;
            goto label_223284;
        }
    }
    ctx->pc = 0x223138u;
label_223138:
    // 0x223138: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x223138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22313c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22313Cu;
    SET_GPR_U32(ctx, 31, 0x223144u);
    ctx->pc = 0x223140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22313Cu;
    // 0x223140: 0x24a53468  addiu       $a1, $a1, 0x3468 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22313Cu, 0x223144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223144u;
label_223144:
    // 0x223144: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223148: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223148u;
    {
        const bool branch_taken_0x223148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223148u;
        // 0x22314c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223148) {
            ctx->pc = 0x223158u;
            goto label_223158;
        }
    }
    ctx->pc = 0x223150u;
    // 0x223150: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x223150u;
    {
        const bool branch_taken_0x223150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223150u;
        // 0x223154: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223150) {
            ctx->pc = 0x223284u;
            goto label_223284;
        }
    }
    ctx->pc = 0x223158u;
label_223158:
    // 0x223158: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22315c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22315cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223160: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223160u;
    SET_GPR_U32(ctx, 31, 0x223168u);
    ctx->pc = 0x223164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223160u;
    // 0x223164: 0x24a53470  addiu       $a1, $a1, 0x3470 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223160u, 0x223168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223168u;
label_223168:
    // 0x223168: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22316c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22316Cu;
    {
        const bool branch_taken_0x22316c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22316Cu;
        // 0x223170: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22316c) {
            ctx->pc = 0x22317Cu;
            goto label_22317c;
        }
    }
    ctx->pc = 0x223174u;
    // 0x223174: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x223174u;
    {
        const bool branch_taken_0x223174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223174u;
        // 0x223178: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223174) {
            ctx->pc = 0x223284u;
            goto label_223284;
        }
    }
    ctx->pc = 0x22317Cu;
label_22317c:
    // 0x22317c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22317cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223180: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x223180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223184: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223184u;
    SET_GPR_U32(ctx, 31, 0x22318Cu);
    ctx->pc = 0x223188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223184u;
    // 0x223188: 0x24a53478  addiu       $a1, $a1, 0x3478 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223184u, 0x22318Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22318Cu;
label_22318c:
    // 0x22318c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223190: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223190u;
    {
        const bool branch_taken_0x223190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223190u;
        // 0x223194: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223190) {
            ctx->pc = 0x2231A0u;
            goto label_2231a0;
        }
    }
    ctx->pc = 0x223198u;
    // 0x223198: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x223198u;
    {
        const bool branch_taken_0x223198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223198u;
        // 0x22319c: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223198) {
            ctx->pc = 0x223284u;
            goto label_223284;
        }
    }
    ctx->pc = 0x2231A0u;
label_2231a0:
    // 0x2231a0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2231a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2231a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2231a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2231a8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2231A8u;
    SET_GPR_U32(ctx, 31, 0x2231B0u);
    ctx->pc = 0x2231ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2231A8u;
    // 0x2231ac: 0x24a53480  addiu       $a1, $a1, 0x3480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2231A8u, 0x2231B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2231B0u;
label_2231b0:
    // 0x2231b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2231b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2231b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2231B4u;
    {
        const bool branch_taken_0x2231b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2231B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231B4u;
        // 0x2231b8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231b4) {
            ctx->pc = 0x2231C4u;
            goto label_2231c4;
        }
    }
    ctx->pc = 0x2231BCu;
    // 0x2231bc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2231BCu;
    {
        const bool branch_taken_0x2231bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2231C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231BCu;
        // 0x2231c0: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231bc) {
            ctx->pc = 0x223284u;
            goto label_223284;
        }
    }
    ctx->pc = 0x2231C4u;
label_2231c4:
    // 0x2231c4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2231c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2231c8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2231c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2231cc: 0x24a53488  addiu       $a1, $a1, 0x3488
    ctx->pc = 0x2231ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13448));
    // 0x2231d0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2231D0u;
    {
        const bool branch_taken_0x2231d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2231D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231D0u;
        // 0x2231d4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231d0) {
            ctx->pc = 0x22327Cu;
            goto label_22327c;
        }
    }
    ctx->pc = 0x2231D8u;
label_2231d8:
    // 0x2231d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2231d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2231dc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2231DCu;
    SET_GPR_U32(ctx, 31, 0x2231E4u);
    ctx->pc = 0x2231E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2231DCu;
    // 0x2231e0: 0x24a534b0  addiu       $a1, $a1, 0x34B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2231DCu, 0x2231E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2231E4u;
label_2231e4:
    // 0x2231e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2231e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2231e8: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x2231E8u;
    {
        const bool branch_taken_0x2231e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2231e8) {
            ctx->pc = 0x2231ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2231E8u;
            // 0x2231ec: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223298u;
            goto label_223298;
        }
    }
    ctx->pc = 0x2231F0u;
    // 0x2231f0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2231F0u;
    SET_GPR_U32(ctx, 31, 0x2231F8u);
    ctx->pc = 0x2231F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2231F0u;
    // 0x2231f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2231F0u, 0x2231F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2231F8u;
label_2231f8:
    // 0x2231f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2231f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2231fc: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2231FCu;
    SET_GPR_U32(ctx, 31, 0x223204u);
    ctx->pc = 0x223200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2231FCu;
    // 0x223200: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2231FCu, 0x223204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223204u;
label_223204:
    // 0x223204: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223208: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x223208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22320c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22320Cu;
    SET_GPR_U32(ctx, 31, 0x223214u);
    ctx->pc = 0x223210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22320Cu;
    // 0x223210: 0x24a534c0  addiu       $a1, $a1, 0x34C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22320Cu, 0x223214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223214u;
label_223214:
    // 0x223214: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223218: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223218u;
    {
        const bool branch_taken_0x223218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223218u;
        // 0x22321c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223218) {
            ctx->pc = 0x223228u;
            goto label_223228;
        }
    }
    ctx->pc = 0x223220u;
    // 0x223220: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x223220u;
    {
        const bool branch_taken_0x223220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223220u;
        // 0x223224: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223220) {
            ctx->pc = 0x223284u;
            goto label_223284;
        }
    }
    ctx->pc = 0x223228u;
label_223228:
    // 0x223228: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x223228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22322c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22322Cu;
    SET_GPR_U32(ctx, 31, 0x223234u);
    ctx->pc = 0x223230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22322Cu;
    // 0x223230: 0x24a534c8  addiu       $a1, $a1, 0x34C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22322Cu, 0x223234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223234u;
label_223234:
    // 0x223234: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223238: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223238u;
    {
        const bool branch_taken_0x223238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223238u;
        // 0x22323c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223238) {
            ctx->pc = 0x223248u;
            goto label_223248;
        }
    }
    ctx->pc = 0x223240u;
    // 0x223240: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x223240u;
    {
        const bool branch_taken_0x223240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223240u;
        // 0x223244: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223240) {
            ctx->pc = 0x223284u;
            goto label_223284;
        }
    }
    ctx->pc = 0x223248u;
label_223248:
    // 0x223248: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22324c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22324cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223250: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223250u;
    SET_GPR_U32(ctx, 31, 0x223258u);
    ctx->pc = 0x223254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223250u;
    // 0x223254: 0x24a534d0  addiu       $a1, $a1, 0x34D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223250u, 0x223258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223258u;
label_223258:
    // 0x223258: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22325c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22325Cu;
    {
        const bool branch_taken_0x22325c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22325Cu;
        // 0x223260: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22325c) {
            ctx->pc = 0x22326Cu;
            goto label_22326c;
        }
    }
    ctx->pc = 0x223264u;
    // 0x223264: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x223264u;
    {
        const bool branch_taken_0x223264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223264u;
        // 0x223268: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223264) {
            ctx->pc = 0x223284u;
            goto label_223284;
        }
    }
    ctx->pc = 0x22326Cu;
label_22326c:
    // 0x22326c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22326cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223270: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x223270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223274: 0x24a534d8  addiu       $a1, $a1, 0x34D8
    ctx->pc = 0x223274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13528));
    // 0x223278: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x223278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22327c:
    // 0x22327c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x22327Cu;
    SET_GPR_U32(ctx, 31, 0x223284u);
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x22327Cu, 0x223284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223284u;
label_223284:
    // 0x223284: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x223284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223288: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x223288u;
    SET_GPR_U32(ctx, 31, 0x223290u);
    ctx->pc = 0x22328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223288u;
    // 0x22328c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x223288u, 0x223290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223290u;
label_223290:
    // 0x223290: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x223290u;
    {
        const bool branch_taken_0x223290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223290u;
        // 0x223294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223290) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x223298u;
label_223298:
    // 0x223298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22329c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22329Cu;
    SET_GPR_U32(ctx, 31, 0x2232A4u);
    ctx->pc = 0x2232A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22329Cu;
    // 0x2232a0: 0x24a53508  addiu       $a1, $a1, 0x3508 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22329Cu, 0x2232A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232A4u;
label_2232a4:
    // 0x2232a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2232a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2232a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2232A8u;
    {
        const bool branch_taken_0x2232a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2232ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2232A8u;
        // 0x2232ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2232a8) {
            ctx->pc = 0x2232C0u;
            goto label_2232c0;
        }
    }
    ctx->pc = 0x2232B0u;
    // 0x2232b0: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2232B0u;
    SET_GPR_U32(ctx, 31, 0x2232B8u);
    ctx->pc = 0x2232B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2232B0u;
    // 0x2232b4: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2232B0u, 0x2232B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232B8u;
label_2232b8:
    // 0x2232b8: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x2232B8u;
    {
        const bool branch_taken_0x2232b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2232BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2232B8u;
        // 0x2232bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2232b8) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x2232C0u;
label_2232c0:
    // 0x2232c0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2232c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2232c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2232c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232c8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2232C8u;
    SET_GPR_U32(ctx, 31, 0x2232D0u);
    ctx->pc = 0x2232CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2232C8u;
    // 0x2232cc: 0x24a53528  addiu       $a1, $a1, 0x3528 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2232C8u, 0x2232D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232D0u;
label_2232d0:
    // 0x2232d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2232d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2232d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2232D4u;
    {
        const bool branch_taken_0x2232d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2232D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2232D4u;
        // 0x2232d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2232d4) {
            ctx->pc = 0x2232ECu;
            goto label_2232ec;
        }
    }
    ctx->pc = 0x2232DCu;
    // 0x2232dc: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2232DCu;
    SET_GPR_U32(ctx, 31, 0x2232E4u);
    ctx->pc = 0x2232E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2232DCu;
    // 0x2232e0: 0x26050038  addiu       $a1, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2232DCu, 0x2232E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232E4u;
label_2232e4:
    // 0x2232e4: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x2232E4u;
    {
        const bool branch_taken_0x2232e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2232E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2232E4u;
        // 0x2232e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2232e4) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x2232ECu;
label_2232ec:
    // 0x2232ec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2232ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2232f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2232f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232f4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2232F4u;
    SET_GPR_U32(ctx, 31, 0x2232FCu);
    ctx->pc = 0x2232F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2232F4u;
    // 0x2232f8: 0x24a53548  addiu       $a1, $a1, 0x3548 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2232F4u, 0x2232FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232FCu;
label_2232fc:
    // 0x2232fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2232fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223300: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223300u;
    {
        const bool branch_taken_0x223300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223300u;
        // 0x223304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223300) {
            ctx->pc = 0x223318u;
            goto label_223318;
        }
    }
    ctx->pc = 0x223308u;
    // 0x223308: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x223308u;
    SET_GPR_U32(ctx, 31, 0x223310u);
    ctx->pc = 0x22330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223308u;
    // 0x22330c: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x223308u, 0x223310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223310u;
label_223310:
    // 0x223310: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x223310u;
    {
        const bool branch_taken_0x223310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223310u;
        // 0x223314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223310) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x223318u;
label_223318:
    // 0x223318: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22331c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22331cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223320: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223320u;
    SET_GPR_U32(ctx, 31, 0x223328u);
    ctx->pc = 0x223324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223320u;
    // 0x223324: 0x24a53568  addiu       $a1, $a1, 0x3568 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223320u, 0x223328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223328u;
label_223328:
    // 0x223328: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22332c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22332Cu;
    {
        const bool branch_taken_0x22332c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22332Cu;
        // 0x223330: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22332c) {
            ctx->pc = 0x223344u;
            goto label_223344;
        }
    }
    ctx->pc = 0x223334u;
    // 0x223334: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x223334u;
    SET_GPR_U32(ctx, 31, 0x22333Cu);
    ctx->pc = 0x223338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223334u;
    // 0x223338: 0x26050048  addiu       $a1, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x223334u, 0x22333Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22333Cu;
label_22333c:
    // 0x22333c: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x22333Cu;
    {
        const bool branch_taken_0x22333c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22333Cu;
        // 0x223340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22333c) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x223344u;
label_223344:
    // 0x223344: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22334c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22334Cu;
    SET_GPR_U32(ctx, 31, 0x223354u);
    ctx->pc = 0x223350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22334Cu;
    // 0x223350: 0x24a53588  addiu       $a1, $a1, 0x3588 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22334Cu, 0x223354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223354u;
label_223354:
    // 0x223354: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223358: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223358u;
    {
        const bool branch_taken_0x223358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223358u;
        // 0x22335c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223358) {
            ctx->pc = 0x223370u;
            goto label_223370;
        }
    }
    ctx->pc = 0x223360u;
    // 0x223360: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x223360u;
    SET_GPR_U32(ctx, 31, 0x223368u);
    ctx->pc = 0x223364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223360u;
    // 0x223364: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x223360u, 0x223368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223368u;
label_223368:
    // 0x223368: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x223368u;
    {
        const bool branch_taken_0x223368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223368u;
        // 0x22336c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223368) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x223370u;
label_223370:
    // 0x223370: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223378: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223378u;
    SET_GPR_U32(ctx, 31, 0x223380u);
    ctx->pc = 0x22337Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223378u;
    // 0x22337c: 0x24a535a8  addiu       $a1, $a1, 0x35A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223378u, 0x223380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223380u;
label_223380:
    // 0x223380: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223384: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223384u;
    {
        const bool branch_taken_0x223384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223384u;
        // 0x223388: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223384) {
            ctx->pc = 0x22339Cu;
            goto label_22339c;
        }
    }
    ctx->pc = 0x22338Cu;
    // 0x22338c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x22338Cu;
    SET_GPR_U32(ctx, 31, 0x223394u);
    ctx->pc = 0x223390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22338Cu;
    // 0x223390: 0x26050058  addiu       $a1, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x22338Cu, 0x223394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223394u;
label_223394:
    // 0x223394: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x223394u;
    {
        const bool branch_taken_0x223394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223394u;
        // 0x223398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223394) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x22339Cu;
label_22339c:
    // 0x22339c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22339cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2233a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2233a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233a4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2233A4u;
    SET_GPR_U32(ctx, 31, 0x2233ACu);
    ctx->pc = 0x2233A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2233A4u;
    // 0x2233a8: 0x24a535c8  addiu       $a1, $a1, 0x35C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2233A4u, 0x2233ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2233ACu;
label_2233ac:
    // 0x2233ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2233acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2233b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2233B0u;
    {
        const bool branch_taken_0x2233b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2233B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2233B0u;
        // 0x2233b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2233b0) {
            ctx->pc = 0x2233CCu;
            goto label_2233cc;
        }
    }
    ctx->pc = 0x2233B8u;
    // 0x2233b8: 0x26060064  addiu       $a2, $s0, 0x64
    ctx->pc = 0x2233b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2233bc: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x2233BCu;
    SET_GPR_U32(ctx, 31, 0x2233C4u);
    ctx->pc = 0x2233C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2233BCu;
    // 0x2233c0: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x2233BCu, 0x2233C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2233C4u;
label_2233c4:
    // 0x2233c4: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2233C4u;
    {
        const bool branch_taken_0x2233c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2233C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2233C4u;
        // 0x2233c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2233c4) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x2233CCu;
label_2233cc:
    // 0x2233cc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2233ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2233d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2233d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233d4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2233D4u;
    SET_GPR_U32(ctx, 31, 0x2233DCu);
    ctx->pc = 0x2233D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2233D4u;
    // 0x2233d8: 0x24a535d8  addiu       $a1, $a1, 0x35D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2233D4u, 0x2233DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2233DCu;
label_2233dc:
    // 0x2233dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2233dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2233e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2233E0u;
    {
        const bool branch_taken_0x2233e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2233E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2233E0u;
        // 0x2233e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2233e0) {
            ctx->pc = 0x2233FCu;
            goto label_2233fc;
        }
    }
    ctx->pc = 0x2233E8u;
    // 0x2233e8: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x2233e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2233ec: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x2233ECu;
    SET_GPR_U32(ctx, 31, 0x2233F4u);
    ctx->pc = 0x2233F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2233ECu;
    // 0x2233f0: 0x26050068  addiu       $a1, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x2233ECu, 0x2233F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2233F4u;
label_2233f4:
    // 0x2233f4: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x2233F4u;
    {
        const bool branch_taken_0x2233f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2233F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2233F4u;
        // 0x2233f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2233f4) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x2233FCu;
label_2233fc:
    // 0x2233fc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2233fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223404: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223404u;
    SET_GPR_U32(ctx, 31, 0x22340Cu);
    ctx->pc = 0x223408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223404u;
    // 0x223408: 0x24a535f0  addiu       $a1, $a1, 0x35F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223404u, 0x22340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22340Cu;
label_22340c:
    // 0x22340c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22340cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223410: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x223410u;
    {
        const bool branch_taken_0x223410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223410u;
        // 0x223414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223410) {
            ctx->pc = 0x22342Cu;
            goto label_22342c;
        }
    }
    ctx->pc = 0x223418u;
    // 0x223418: 0x26060074  addiu       $a2, $s0, 0x74
    ctx->pc = 0x223418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x22341c: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x22341Cu;
    SET_GPR_U32(ctx, 31, 0x223424u);
    ctx->pc = 0x223420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22341Cu;
    // 0x223420: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x22341Cu, 0x223424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223424u;
label_223424:
    // 0x223424: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x223424u;
    {
        const bool branch_taken_0x223424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223424u;
        // 0x223428: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223424) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x22342Cu;
label_22342c:
    // 0x22342c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22342cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223434: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223434u;
    SET_GPR_U32(ctx, 31, 0x22343Cu);
    ctx->pc = 0x223438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223434u;
    // 0x223438: 0x24a53608  addiu       $a1, $a1, 0x3608 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223434u, 0x22343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22343Cu;
label_22343c:
    // 0x22343c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22343cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223440: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x223440u;
    {
        const bool branch_taken_0x223440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223440u;
        // 0x223444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223440) {
            ctx->pc = 0x223460u;
            goto label_223460;
        }
    }
    ctx->pc = 0x223448u;
    // 0x223448: 0x26070088  addiu       $a3, $s0, 0x88
    ctx->pc = 0x223448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x22344c: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x22344cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x223450: 0xc09df62  jal         func_277D88
    ctx->pc = 0x223450u;
    SET_GPR_U32(ctx, 31, 0x223458u);
    ctx->pc = 0x223454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223450u;
    // 0x223454: 0x26060084  addiu       $a2, $s0, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x223450u, 0x223458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223458u;
label_223458:
    // 0x223458: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x223458u;
    {
        const bool branch_taken_0x223458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223458u;
        // 0x22345c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223458) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x223460u;
label_223460:
    // 0x223460: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223468: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223468u;
    SET_GPR_U32(ctx, 31, 0x223470u);
    ctx->pc = 0x22346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223468u;
    // 0x22346c: 0x24a53618  addiu       $a1, $a1, 0x3618 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223468u, 0x223470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223470u;
label_223470:
    // 0x223470: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223474: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223474u;
    {
        const bool branch_taken_0x223474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223474u;
        // 0x223478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223474) {
            ctx->pc = 0x22348Cu;
            goto label_22348c;
        }
    }
    ctx->pc = 0x22347Cu;
    // 0x22347c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x22347Cu;
    SET_GPR_U32(ctx, 31, 0x223484u);
    ctx->pc = 0x223480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22347Cu;
    // 0x223480: 0x26050094  addiu       $a1, $s0, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x22347Cu, 0x223484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223484u;
label_223484:
    // 0x223484: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x223484u;
    {
        const bool branch_taken_0x223484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223484u;
        // 0x223488: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223484) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x22348Cu;
label_22348c:
    // 0x22348c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22348cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223494: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223494u;
    SET_GPR_U32(ctx, 31, 0x22349Cu);
    ctx->pc = 0x223498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223494u;
    // 0x223498: 0x24a53630  addiu       $a1, $a1, 0x3630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223494u, 0x22349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22349Cu;
label_22349c:
    // 0x22349c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22349cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2234a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2234A0u;
    {
        const bool branch_taken_0x2234a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234A0u;
        // 0x2234a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234a0) {
            ctx->pc = 0x2234B8u;
            goto label_2234b8;
        }
    }
    ctx->pc = 0x2234A8u;
    // 0x2234a8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2234A8u;
    SET_GPR_U32(ctx, 31, 0x2234B0u);
    ctx->pc = 0x2234ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234A8u;
    // 0x2234ac: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2234A8u, 0x2234B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2234B0u;
label_2234b0:
    // 0x2234b0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2234B0u;
    {
        const bool branch_taken_0x2234b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234B0u;
        // 0x2234b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234b0) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x2234B8u;
label_2234b8:
    // 0x2234b8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2234b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2234bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2234bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2234c0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2234C0u;
    SET_GPR_U32(ctx, 31, 0x2234C8u);
    ctx->pc = 0x2234C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234C0u;
    // 0x2234c4: 0x24a526b0  addiu       $a1, $a1, 0x26B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2234C0u, 0x2234C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2234C8u;
label_2234c8:
    // 0x2234c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2234c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2234cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2234CCu;
    {
        const bool branch_taken_0x2234cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234CCu;
        // 0x2234d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234cc) {
            ctx->pc = 0x2234ECu;
            goto label_2234ec;
        }
    }
    ctx->pc = 0x2234D4u;
    // 0x2234d4: 0x260700a8  addiu       $a3, $s0, 0xA8
    ctx->pc = 0x2234d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    // 0x2234d8: 0x260500a0  addiu       $a1, $s0, 0xA0
    ctx->pc = 0x2234d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2234dc: 0xc09df62  jal         func_277D88
    ctx->pc = 0x2234DCu;
    SET_GPR_U32(ctx, 31, 0x2234E4u);
    ctx->pc = 0x2234E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234DCu;
    // 0x2234e0: 0x260600a4  addiu       $a2, $s0, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x2234DCu, 0x2234E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2234E4u;
label_2234e4:
    // 0x2234e4: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2234E4u;
    {
        const bool branch_taken_0x2234e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234E4u;
        // 0x2234e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234e4) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x2234ECu;
label_2234ec:
    // 0x2234ec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2234ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2234f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2234f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2234f4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2234F4u;
    SET_GPR_U32(ctx, 31, 0x2234FCu);
    ctx->pc = 0x2234F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234F4u;
    // 0x2234f8: 0x24a53640  addiu       $a1, $a1, 0x3640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2234F4u, 0x2234FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2234FCu;
label_2234fc:
    // 0x2234fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2234fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223500: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223500u;
    {
        const bool branch_taken_0x223500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223500u;
        // 0x223504: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223500) {
            ctx->pc = 0x223518u;
            goto label_223518;
        }
    }
    ctx->pc = 0x223508u;
    // 0x223508: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x223508u;
    SET_GPR_U32(ctx, 31, 0x223510u);
    ctx->pc = 0x22350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223508u;
    // 0x22350c: 0x260500b0  addiu       $a1, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x223508u, 0x223510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223510u;
label_223510:
    // 0x223510: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x223510u;
    {
        const bool branch_taken_0x223510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223510u;
        // 0x223514: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223510) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x223518u;
label_223518:
    // 0x223518: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22351c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22351cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223520: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223520u;
    SET_GPR_U32(ctx, 31, 0x223528u);
    ctx->pc = 0x223524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223520u;
    // 0x223524: 0x24a53650  addiu       $a1, $a1, 0x3650 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223520u, 0x223528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223528u;
label_223528:
    // 0x223528: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22352c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22352Cu;
    {
        const bool branch_taken_0x22352c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22352Cu;
        // 0x223530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22352c) {
            ctx->pc = 0x22354Cu;
            goto label_22354c;
        }
    }
    ctx->pc = 0x223534u;
    // 0x223534: 0x260700c8  addiu       $a3, $s0, 0xC8
    ctx->pc = 0x223534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x223538: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x223538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x22353c: 0xc09df62  jal         func_277D88
    ctx->pc = 0x22353Cu;
    SET_GPR_U32(ctx, 31, 0x223544u);
    ctx->pc = 0x223540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22353Cu;
    // 0x223540: 0x260600c4  addiu       $a2, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x22353Cu, 0x223544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223544u;
label_223544:
    // 0x223544: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x223544u;
    {
        const bool branch_taken_0x223544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223544u;
        // 0x223548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223544) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x22354Cu;
label_22354c:
    // 0x22354c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22354cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223554: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223554u;
    SET_GPR_U32(ctx, 31, 0x22355Cu);
    ctx->pc = 0x223558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223554u;
    // 0x223558: 0x24a53660  addiu       $a1, $a1, 0x3660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223554u, 0x22355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22355Cu;
label_22355c:
    // 0x22355c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22355cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223560: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x223560u;
    {
        const bool branch_taken_0x223560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223560u;
        // 0x223564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223560) {
            ctx->pc = 0x223580u;
            goto label_223580;
        }
    }
    ctx->pc = 0x223568u;
    // 0x223568: 0x260700d8  addiu       $a3, $s0, 0xD8
    ctx->pc = 0x223568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
    // 0x22356c: 0x260500d0  addiu       $a1, $s0, 0xD0
    ctx->pc = 0x22356cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x223570: 0xc09df62  jal         func_277D88
    ctx->pc = 0x223570u;
    SET_GPR_U32(ctx, 31, 0x223578u);
    ctx->pc = 0x223574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223570u;
    // 0x223574: 0x260600d4  addiu       $a2, $s0, 0xD4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x223570u, 0x223578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223578u;
label_223578:
    // 0x223578: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x223578u;
    {
        const bool branch_taken_0x223578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223578u;
        // 0x22357c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223578) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x223580u;
label_223580:
    // 0x223580: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223588: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223588u;
    SET_GPR_U32(ctx, 31, 0x223590u);
    ctx->pc = 0x22358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223588u;
    // 0x22358c: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223588u, 0x223590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223590u;
label_223590:
    // 0x223590: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223594: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x223594u;
    {
        const bool branch_taken_0x223594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223594u;
        // 0x223598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223594) {
            ctx->pc = 0x2235B4u;
            goto label_2235b4;
        }
    }
    ctx->pc = 0x22359Cu;
    // 0x22359c: 0x260700e8  addiu       $a3, $s0, 0xE8
    ctx->pc = 0x22359cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
    // 0x2235a0: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x2235a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x2235a4: 0xc09df62  jal         func_277D88
    ctx->pc = 0x2235A4u;
    SET_GPR_U32(ctx, 31, 0x2235ACu);
    ctx->pc = 0x2235A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2235A4u;
    // 0x2235a8: 0x260600e4  addiu       $a2, $s0, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x2235A4u, 0x2235ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2235ACu;
label_2235ac:
    // 0x2235ac: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2235ACu;
    {
        const bool branch_taken_0x2235ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2235B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235ACu;
        // 0x2235b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235ac) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x2235B4u;
label_2235b4:
    // 0x2235b4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2235b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2235b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2235b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2235bc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2235BCu;
    SET_GPR_U32(ctx, 31, 0x2235C4u);
    ctx->pc = 0x2235C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2235BCu;
    // 0x2235c0: 0x24a53690  addiu       $a1, $a1, 0x3690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2235BCu, 0x2235C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2235C4u;
label_2235c4:
    // 0x2235c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2235c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2235c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2235C8u;
    {
        const bool branch_taken_0x2235c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2235CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235C8u;
        // 0x2235cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235c8) {
            ctx->pc = 0x2235E4u;
            goto label_2235e4;
        }
    }
    ctx->pc = 0x2235D0u;
    // 0x2235d0: 0x260600f4  addiu       $a2, $s0, 0xF4
    ctx->pc = 0x2235d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 244));
    // 0x2235d4: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x2235D4u;
    SET_GPR_U32(ctx, 31, 0x2235DCu);
    ctx->pc = 0x2235D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2235D4u;
    // 0x2235d8: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x2235D4u, 0x2235DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2235DCu;
label_2235dc:
    // 0x2235dc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2235DCu;
    {
        const bool branch_taken_0x2235dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2235E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235DCu;
        // 0x2235e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235dc) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x2235E4u;
label_2235e4:
    // 0x2235e4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2235e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2235e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2235e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2235ec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2235ECu;
    SET_GPR_U32(ctx, 31, 0x2235F4u);
    ctx->pc = 0x2235F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2235ECu;
    // 0x2235f0: 0x24a536b0  addiu       $a1, $a1, 0x36B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2235ECu, 0x2235F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2235F4u;
label_2235f4:
    // 0x2235f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2235f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2235f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2235F8u;
    {
        const bool branch_taken_0x2235f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2235FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235F8u;
        // 0x2235fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235f8) {
            ctx->pc = 0x223614u;
            goto label_223614;
        }
    }
    ctx->pc = 0x223600u;
    // 0x223600: 0x260600fc  addiu       $a2, $s0, 0xFC
    ctx->pc = 0x223600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
    // 0x223604: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x223604u;
    SET_GPR_U32(ctx, 31, 0x22360Cu);
    ctx->pc = 0x223608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223604u;
    // 0x223608: 0x260500f8  addiu       $a1, $s0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x223604u, 0x22360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22360Cu;
label_22360c:
    // 0x22360c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x22360Cu;
    {
        const bool branch_taken_0x22360c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22360Cu;
        // 0x223610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22360c) {
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x223614u;
label_223614:
    // 0x223614: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22361c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22361Cu;
    SET_GPR_U32(ctx, 31, 0x223624u);
    ctx->pc = 0x223620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22361Cu;
    // 0x223620: 0x24a536d0  addiu       $a1, $a1, 0x36D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22361Cu, 0x223624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223624u;
label_223624:
    // 0x223624: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223628: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x223628u;
    {
        const bool branch_taken_0x223628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223628u;
        // 0x22362c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223628) {
            ctx->pc = 0x223644u;
            goto label_223644;
        }
    }
    ctx->pc = 0x223630u;
    // 0x223630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223634: 0xc088b80  jal         func_222E00
    ctx->pc = 0x223634u;
    SET_GPR_U32(ctx, 31, 0x22363Cu);
    ctx->pc = 0x223638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223634u;
    // 0x223638: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E00u, 0x223634u, 0x22363Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22363Cu;
label_22363c:
    // 0x22363c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22363Cu;
    {
        const bool branch_taken_0x22363c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22363Cu;
        // 0x223640: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22363c) {
            ctx->pc = 0x223658u;
            goto label_223658;
        }
    }
    ctx->pc = 0x223644u;
label_223644:
    // 0x223644: 0x26060104  addiu       $a2, $s0, 0x104
    ctx->pc = 0x223644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x223648: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x223648u;
    SET_GPR_U32(ctx, 31, 0x223650u);
    ctx->pc = 0x22364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223648u;
    // 0x22364c: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x223648u, 0x223650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223650u;
label_223650:
    // 0x223650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223654:
    // 0x223654: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x223654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_223658:
    // 0x223658: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x223658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22365c: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x22365cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x223660: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x223660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x223664: 0x3e00008  jr          $ra
    ctx->pc = 0x223664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223664u;
        // 0x223668: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22366Cu;
    // 0x22366c: 0x0  nop
    ctx->pc = 0x22366cu;
    // NOP
    ctx->pc = 0x223670u;
}
