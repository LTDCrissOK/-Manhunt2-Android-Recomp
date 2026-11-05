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

// Function: sub_00220258
// Address: 0x220258 - 0x220428
void sub_00220258_0x220258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220258_0x220258");
#endif

    switch (ctx->pc) {
        case 0x22028cu: goto label_22028c;
        case 0x2202a0u: goto label_2202a0;
        case 0x2202b8u: goto label_2202b8;
        case 0x2202ccu: goto label_2202cc;
        case 0x2202f0u: goto label_2202f0;
        case 0x220304u: goto label_220304;
        case 0x22031cu: goto label_22031c;
        case 0x220340u: goto label_220340;
        case 0x220354u: goto label_220354;
        case 0x22036cu: goto label_22036c;
        case 0x220380u: goto label_220380;
        case 0x220398u: goto label_220398;
        case 0x2203acu: goto label_2203ac;
        case 0x2203c4u: goto label_2203c4;
        case 0x2203e0u: goto label_2203e0;
        case 0x2203f8u: goto label_2203f8;
        case 0x220408u: goto label_220408;
        default: break;
    }

    ctx->pc = 0x220258u;

    // 0x220258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22025c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x22025cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x220260: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220264: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x220264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220268: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x220268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22026c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22026cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x220270: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x220270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220274: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220278: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x220278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22027c: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x22027cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x220280: 0x24a52598  addiu       $a1, $a1, 0x2598
    ctx->pc = 0x220280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9624));
    // 0x220284: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220284u;
    SET_GPR_U32(ctx, 31, 0x22028Cu);
    ctx->pc = 0x220288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220284u;
    // 0x220288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220284u, 0x22028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22028Cu;
label_22028c:
    // 0x22028c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22028cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220290: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220290u;
    {
        const bool branch_taken_0x220290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220290u;
        // 0x220294: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220290) {
            ctx->pc = 0x2202A8u;
            goto label_2202a8;
        }
    }
    ctx->pc = 0x220298u;
    // 0x220298: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x220298u;
    SET_GPR_U32(ctx, 31, 0x2202A0u);
    ctx->pc = 0x22029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220298u;
    // 0x22029c: 0x262501a0  addiu       $a1, $s1, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x220298u, 0x2202A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2202A0u;
label_2202a0:
    // 0x2202a0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2202A0u;
    {
        const bool branch_taken_0x2202a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2202A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202A0u;
        // 0x2202a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202a0) {
            ctx->pc = 0x22040Cu;
            goto label_22040c;
        }
    }
    ctx->pc = 0x2202A8u;
label_2202a8:
    // 0x2202a8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2202a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2202ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2202acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2202b0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2202B0u;
    SET_GPR_U32(ctx, 31, 0x2202B8u);
    ctx->pc = 0x2202B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202B0u;
    // 0x2202b4: 0x24a527c0  addiu       $a1, $a1, 0x27C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2202B0u, 0x2202B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2202B8u;
label_2202b8:
    // 0x2202b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2202b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2202bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2202BCu;
    {
        const bool branch_taken_0x2202bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2202C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202BCu;
        // 0x2202c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202bc) {
            ctx->pc = 0x2202E0u;
            goto label_2202e0;
        }
    }
    ctx->pc = 0x2202C4u;
    // 0x2202c4: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2202C4u;
    SET_GPR_U32(ctx, 31, 0x2202CCu);
    ctx->pc = 0x2202C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202C4u;
    // 0x2202c8: 0x262501a8  addiu       $a1, $s1, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2202C4u, 0x2202CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2202CCu;
label_2202cc:
    // 0x2202cc: 0x8e2201b0  lw          $v0, 0x1B0($s1)
    ctx->pc = 0x2202ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x2202d0: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2202D0u;
    {
        const bool branch_taken_0x2202d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2202D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202D0u;
        // 0x2202d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202d0) {
            ctx->pc = 0x22040Cu;
            goto label_22040c;
        }
    }
    ctx->pc = 0x2202D8u;
    // 0x2202d8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2202D8u;
    {
        const bool branch_taken_0x2202d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2202DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202D8u;
        // 0x2202dc: 0xae2201b0  sw          $v0, 0x1B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202d8) {
            ctx->pc = 0x22040Cu;
            goto label_22040c;
        }
    }
    ctx->pc = 0x2202E0u;
label_2202e0:
    // 0x2202e0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2202e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2202e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2202e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2202e8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2202E8u;
    SET_GPR_U32(ctx, 31, 0x2202F0u);
    ctx->pc = 0x2202ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202E8u;
    // 0x2202ec: 0x24a527c8  addiu       $a1, $a1, 0x27C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2202E8u, 0x2202F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2202F0u;
label_2202f0:
    // 0x2202f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2202f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2202f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2202F4u;
    {
        const bool branch_taken_0x2202f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2202F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202F4u;
        // 0x2202f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202f4) {
            ctx->pc = 0x22030Cu;
            goto label_22030c;
        }
    }
    ctx->pc = 0x2202FCu;
    // 0x2202fc: 0xc09e056  jal         func_278158
    ctx->pc = 0x2202FCu;
    SET_GPR_U32(ctx, 31, 0x220304u);
    ctx->pc = 0x220300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202FCu;
    // 0x220300: 0x262501b0  addiu       $a1, $s1, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2202FCu, 0x220304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220304u;
label_220304:
    // 0x220304: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x220304u;
    {
        const bool branch_taken_0x220304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220304u;
        // 0x220308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220304) {
            ctx->pc = 0x22040Cu;
            goto label_22040c;
        }
    }
    ctx->pc = 0x22030Cu;
label_22030c:
    // 0x22030c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22030cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220314: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220314u;
    SET_GPR_U32(ctx, 31, 0x22031Cu);
    ctx->pc = 0x220318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220314u;
    // 0x220318: 0x24a527d8  addiu       $a1, $a1, 0x27D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220314u, 0x22031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22031Cu;
label_22031c:
    // 0x22031c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22031cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220320: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x220320u;
    {
        const bool branch_taken_0x220320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220320u;
        // 0x220324: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220320) {
            ctx->pc = 0x220330u;
            goto label_220330;
        }
    }
    ctx->pc = 0x220328u;
    // 0x220328: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x220328u;
    {
        const bool branch_taken_0x220328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220328u;
        // 0x22032c: 0xae2201b4  sw          $v0, 0x1B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220328) {
            ctx->pc = 0x22040Cu;
            goto label_22040c;
        }
    }
    ctx->pc = 0x220330u;
label_220330:
    // 0x220330: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220338: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220338u;
    SET_GPR_U32(ctx, 31, 0x220340u);
    ctx->pc = 0x22033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220338u;
    // 0x22033c: 0x24a527e8  addiu       $a1, $a1, 0x27E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220338u, 0x220340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220340u;
label_220340:
    // 0x220340: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220344: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220344u;
    {
        const bool branch_taken_0x220344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220344u;
        // 0x220348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220344) {
            ctx->pc = 0x22035Cu;
            goto label_22035c;
        }
    }
    ctx->pc = 0x22034Cu;
    // 0x22034c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x22034Cu;
    SET_GPR_U32(ctx, 31, 0x220354u);
    ctx->pc = 0x220350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22034Cu;
    // 0x220350: 0x262501b8  addiu       $a1, $s1, 0x1B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x22034Cu, 0x220354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220354u;
label_220354:
    // 0x220354: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x220354u;
    {
        const bool branch_taken_0x220354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220354u;
        // 0x220358: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220354) {
            ctx->pc = 0x22040Cu;
            goto label_22040c;
        }
    }
    ctx->pc = 0x22035Cu;
label_22035c:
    // 0x22035c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22035cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220364: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220364u;
    SET_GPR_U32(ctx, 31, 0x22036Cu);
    ctx->pc = 0x220368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220364u;
    // 0x220368: 0x24a52800  addiu       $a1, $a1, 0x2800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220364u, 0x22036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22036Cu;
label_22036c:
    // 0x22036c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22036cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220370: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220370u;
    {
        const bool branch_taken_0x220370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220370u;
        // 0x220374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220370) {
            ctx->pc = 0x220388u;
            goto label_220388;
        }
    }
    ctx->pc = 0x220378u;
    // 0x220378: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x220378u;
    SET_GPR_U32(ctx, 31, 0x220380u);
    ctx->pc = 0x22037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220378u;
    // 0x22037c: 0x262501c0  addiu       $a1, $s1, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x220378u, 0x220380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220380u;
label_220380:
    // 0x220380: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x220380u;
    {
        const bool branch_taken_0x220380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220380u;
        // 0x220384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220380) {
            ctx->pc = 0x22040Cu;
            goto label_22040c;
        }
    }
    ctx->pc = 0x220388u;
label_220388:
    // 0x220388: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22038c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22038cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220390: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220390u;
    SET_GPR_U32(ctx, 31, 0x220398u);
    ctx->pc = 0x220394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220390u;
    // 0x220394: 0x24a52818  addiu       $a1, $a1, 0x2818 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220390u, 0x220398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220398u;
label_220398:
    // 0x220398: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22039c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22039Cu;
    {
        const bool branch_taken_0x22039c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2203A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22039Cu;
        // 0x2203a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22039c) {
            ctx->pc = 0x2203B4u;
            goto label_2203b4;
        }
    }
    ctx->pc = 0x2203A4u;
    // 0x2203a4: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2203A4u;
    SET_GPR_U32(ctx, 31, 0x2203ACu);
    ctx->pc = 0x2203A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203A4u;
    // 0x2203a8: 0x262501c8  addiu       $a1, $s1, 0x1C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2203A4u, 0x2203ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203ACu;
label_2203ac:
    // 0x2203ac: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2203ACu;
    {
        const bool branch_taken_0x2203ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2203B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203ACu;
        // 0x2203b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203ac) {
            ctx->pc = 0x22040Cu;
            goto label_22040c;
        }
    }
    ctx->pc = 0x2203B4u;
label_2203b4:
    // 0x2203b4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2203b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2203b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2203b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203bc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2203BCu;
    SET_GPR_U32(ctx, 31, 0x2203C4u);
    ctx->pc = 0x2203C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203BCu;
    // 0x2203c0: 0x24a52830  addiu       $a1, $a1, 0x2830 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2203BCu, 0x2203C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203C4u;
label_2203c4:
    // 0x2203c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2203c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2203c8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2203C8u;
    {
        const bool branch_taken_0x2203c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2203CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203C8u;
        // 0x2203cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203c8) {
            ctx->pc = 0x220400u;
            goto label_220400;
        }
    }
    ctx->pc = 0x2203D0u;
    // 0x2203d0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2203d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2203d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2203d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203d8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2203D8u;
    SET_GPR_U32(ctx, 31, 0x2203E0u);
    ctx->pc = 0x2203DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203D8u;
    // 0x2203dc: 0x24a526e0  addiu       $a1, $a1, 0x26E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2203D8u, 0x2203E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203E0u;
label_2203e0:
    // 0x2203e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2203e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2203e4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2203E4u;
    {
        const bool branch_taken_0x2203e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2203E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203E4u;
        // 0x2203e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203e4) {
            ctx->pc = 0x22040Cu;
            goto label_22040c;
        }
    }
    ctx->pc = 0x2203ECu;
    // 0x2203ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2203ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203f0: 0xc08753c  jal         func_21D4F0
    ctx->pc = 0x2203F0u;
    SET_GPR_U32(ctx, 31, 0x2203F8u);
    ctx->pc = 0x2203F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203F0u;
    // 0x2203f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D4F0u, 0x2203F0u, 0x2203F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203F8u;
label_2203f8:
    // 0x2203f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2203F8u;
    {
        const bool branch_taken_0x2203f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2203FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203F8u;
        // 0x2203fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203f8) {
            ctx->pc = 0x220410u;
            goto label_220410;
        }
    }
    ctx->pc = 0x220400u;
label_220400:
    // 0x220400: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x220400u;
    SET_GPR_U32(ctx, 31, 0x220408u);
    ctx->pc = 0x220404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220400u;
    // 0x220404: 0x262501d0  addiu       $a1, $s1, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x220400u, 0x220408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220408u;
label_220408:
    // 0x220408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x220408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22040c:
    // 0x22040c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22040cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_220410:
    // 0x220410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220414: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x220414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220418: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x220418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22041c: 0x3e00008  jr          $ra
    ctx->pc = 0x22041Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22041Cu;
        // 0x220420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22041Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220424u;
    // 0x220424: 0x0  nop
    ctx->pc = 0x220424u;
    // NOP
    ctx->pc = 0x220428u;
}
