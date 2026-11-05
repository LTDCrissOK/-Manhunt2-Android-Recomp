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

// Function: sub_00176210
// Address: 0x176210 - 0x176390
void sub_00176210_0x176210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176210_0x176210");
#endif

    switch (ctx->pc) {
        case 0x176270u: goto label_176270;
        case 0x17628cu: goto label_17628c;
        case 0x1762a0u: goto label_1762a0;
        case 0x1762b0u: goto label_1762b0;
        case 0x1762c0u: goto label_1762c0;
        case 0x176300u: goto label_176300;
        case 0x17630cu: goto label_17630c;
        case 0x176338u: goto label_176338;
        default: break;
    }

    ctx->pc = 0x176210u;

    // 0x176210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x176210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x176214: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x176218: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x176218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17621c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17621cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176220: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x176220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x176224: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x176224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x176228: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x176228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17622c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17622cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x176230: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x176230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x176234: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x176234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x176238: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x176238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17623c: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x17623cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x176240: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x176240u;
    {
        const bool branch_taken_0x176240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176240u;
        // 0x176244: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176240) {
            ctx->pc = 0x176364u;
            goto label_176364;
        }
    }
    ctx->pc = 0x176248u;
    // 0x176248: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x176248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x17624c: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x17624Cu;
    {
        const bool branch_taken_0x17624c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17624Cu;
        // 0x176250: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17624c) {
            ctx->pc = 0x176364u;
            goto label_176364;
        }
    }
    ctx->pc = 0x176254u;
    // 0x176254: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x176254u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176258: 0x24579c14  addiu       $s7, $v0, -0x63EC
    ctx->pc = 0x176258u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x17625c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17625cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176260: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x176260u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176264: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x176264u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x176268: 0x24150009  addiu       $s5, $zero, 0x9
    ctx->pc = 0x176268u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17626c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17626cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_176270:
    // 0x176270: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x176270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x176274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176278: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x176278u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17627c: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x17627Cu;
    {
        const bool branch_taken_0x17627c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x176280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17627Cu;
        // 0x176280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17627c) {
            ctx->pc = 0x17634Cu;
            goto label_17634c;
        }
    }
    ctx->pc = 0x176284u;
    // 0x176284: 0xc04f8e6  jal         func_13E398
    ctx->pc = 0x176284u;
    SET_GPR_U32(ctx, 31, 0x17628Cu);
    ctx->pc = 0x176288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176284u;
    // 0x176288: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E398u, 0x176284u, 0x17628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17628Cu;
label_17628c:
    // 0x17628c: 0x1453002b  bne         $v0, $s3, . + 4 + (0x2B << 2)
    ctx->pc = 0x17628Cu;
    {
        const bool branch_taken_0x17628c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x176290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17628Cu;
        // 0x176290: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17628c) {
            ctx->pc = 0x17633Cu;
            goto label_17633c;
        }
    }
    ctx->pc = 0x176294u;
    // 0x176294: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x176294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x176298: 0xc04ef9c  jal         func_13BE70
    ctx->pc = 0x176298u;
    SET_GPR_U32(ctx, 31, 0x1762A0u);
    ctx->pc = 0x17629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176298u;
    // 0x17629c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BE70u, 0x176298u, 0x1762A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1762A0u;
label_1762a0:
    // 0x1762a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1762a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1762a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762a8: 0xc04f8e0  jal         func_13E380
    ctx->pc = 0x1762A8u;
    SET_GPR_U32(ctx, 31, 0x1762B0u);
    ctx->pc = 0x1762ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1762A8u;
    // 0x1762ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E380u, 0x1762A8u, 0x1762B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1762B0u;
label_1762b0:
    // 0x1762b0: 0x8e2600b4  lw          $a2, 0xB4($s1)
    ctx->pc = 0x1762b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x1762b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1762b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762b8: 0xc05d8fe  jal         func_1763F8
    ctx->pc = 0x1762B8u;
    SET_GPR_U32(ctx, 31, 0x1762C0u);
    ctx->pc = 0x1762BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1762B8u;
    // 0x1762bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1763F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1763F8u, 0x1762B8u, 0x1762C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1762C0u;
label_1762c0:
    // 0x1762c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1762c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1762c4: 0x8e2300b4  lw          $v1, 0xB4($s1)
    ctx->pc = 0x1762c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x1762c8: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1762c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1762cc: 0x10730003  beq         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1762CCu;
    {
        const bool branch_taken_0x1762cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1762D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762CCu;
        // 0x1762d0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762cc) {
            ctx->pc = 0x1762DCu;
            goto label_1762dc;
        }
    }
    ctx->pc = 0x1762D4u;
    // 0x1762d4: 0x5476000e  bnel        $v1, $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x1762D4u;
    {
        const bool branch_taken_0x1762d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x1762d4) {
            ctx->pc = 0x1762D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1762D4u;
            // 0x1762d8: 0x8e22005c  lw          $v0, 0x5C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176310u;
            goto label_176310;
        }
    }
    ctx->pc = 0x1762DCu;
label_1762dc:
    // 0x1762dc: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x1762dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1762e0: 0x1055000a  beq         $v0, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x1762E0u;
    {
        const bool branch_taken_0x1762e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x1762E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762E0u;
        // 0x1762e4: 0x28420003  slti        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762e0) {
            ctx->pc = 0x17630Cu;
            goto label_17630c;
        }
    }
    ctx->pc = 0x1762E8u;
    // 0x1762e8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1762E8u;
    {
        const bool branch_taken_0x1762e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1762e8) {
            ctx->pc = 0x1762ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1762E8u;
            // 0x1762ec: 0x8e22005c  lw          $v0, 0x5C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176310u;
            goto label_176310;
        }
    }
    ctx->pc = 0x1762F0u;
    // 0x1762f0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1762F0u;
    {
        const bool branch_taken_0x1762f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1762F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762F0u;
        // 0x1762f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762f0) {
            ctx->pc = 0x17630Cu;
            goto label_17630c;
        }
    }
    ctx->pc = 0x1762F8u;
    // 0x1762f8: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x1762F8u;
    SET_GPR_U32(ctx, 31, 0x176300u);
    ctx->pc = 0x1762FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1762F8u;
    // 0x1762fc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x1762F8u, 0x176300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176300u;
label_176300:
    // 0x176300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176304: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x176304u;
    SET_GPR_U32(ctx, 31, 0x17630Cu);
    ctx->pc = 0x176308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176304u;
    // 0x176308: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x176304u, 0x17630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17630Cu;
label_17630c:
    // 0x17630c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x17630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_176310:
    // 0x176310: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x176310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x176314: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x176314u;
    {
        const bool branch_taken_0x176314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x176318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176314u;
        // 0x176318: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176314) {
            ctx->pc = 0x17633Cu;
            goto label_17633c;
        }
    }
    ctx->pc = 0x17631Cu;
    // 0x17631c: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x17631cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x176320: 0x14530006  bne         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x176320u;
    {
        const bool branch_taken_0x176320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x176324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176320u;
        // 0x176324: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176320) {
            ctx->pc = 0x17633Cu;
            goto label_17633c;
        }
    }
    ctx->pc = 0x176328u;
    // 0x176328: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176328u;
    {
        const bool branch_taken_0x176328 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176328u;
        // 0x17632c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176328) {
            ctx->pc = 0x17633Cu;
            goto label_17633c;
        }
    }
    ctx->pc = 0x176330u;
    // 0x176330: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x176330u;
    SET_GPR_U32(ctx, 31, 0x176338u);
    ctx->pc = 0x176334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176330u;
    // 0x176334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x176330u, 0x176338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176338u;
label_176338:
    // 0x176338: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x176338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_17633c:
    // 0x17633c: 0x92230009  lbu         $v1, 0x9($s1)
    ctx->pc = 0x17633cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x176340: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x176340u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x176344: 0x12830007  beq         $s4, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x176344u;
    {
        const bool branch_taken_0x176344 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x176348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176344u;
        // 0x176348: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176344) {
            ctx->pc = 0x176364u;
            goto label_176364;
        }
    }
    ctx->pc = 0x17634Cu;
label_17634c:
    // 0x17634c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x17634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x176350: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x176350u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x176354: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x176354u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x176358: 0x5460ffc5  bnel        $v1, $zero, . + 4 + (-0x3B << 2)
    ctx->pc = 0x176358u;
    {
        const bool branch_taken_0x176358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x176358) {
            ctx->pc = 0x17635Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176358u;
            // 0x17635c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176270;
        }
    }
    ctx->pc = 0x176360u;
    // 0x176360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176364:
    // 0x176364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176368: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x176368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17636c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17636cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x176370: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x176370u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176374: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x176374u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x176378: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x176378u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17637c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17637cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x176380: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x176380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176384: 0x3e00008  jr          $ra
    ctx->pc = 0x176384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176384u;
        // 0x176388: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17638Cu;
    // 0x17638c: 0x0  nop
    ctx->pc = 0x17638cu;
    // NOP
    ctx->pc = 0x176390u;
}
