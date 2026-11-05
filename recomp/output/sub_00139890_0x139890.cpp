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

// Function: sub_00139890
// Address: 0x139890 - 0x139bc0
void sub_00139890_0x139890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139890_0x139890");
#endif

    switch (ctx->pc) {
        case 0x1398d0u: goto label_1398d0;
        case 0x139920u: goto label_139920;
        case 0x139950u: goto label_139950;
        case 0x139978u: goto label_139978;
        case 0x13998cu: goto label_13998c;
        case 0x1399acu: goto label_1399ac;
        case 0x1399b8u: goto label_1399b8;
        case 0x1399ccu: goto label_1399cc;
        case 0x139a48u: goto label_139a48;
        case 0x139a5cu: goto label_139a5c;
        case 0x139a6cu: goto label_139a6c;
        case 0x139a84u: goto label_139a84;
        case 0x139ab8u: goto label_139ab8;
        case 0x139ac8u: goto label_139ac8;
        case 0x139aecu: goto label_139aec;
        case 0x139b10u: goto label_139b10;
        case 0x139b34u: goto label_139b34;
        case 0x139b4cu: goto label_139b4c;
        case 0x139b74u: goto label_139b74;
        case 0x139b80u: goto label_139b80;
        case 0x139b94u: goto label_139b94;
        default: break;
    }

    ctx->pc = 0x139890u;

    // 0x139890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x139890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x139894: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x139894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x139898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x139898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13989c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13989cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1398a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1398a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1398a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1398a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1398a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1398a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1398ac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1398acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1398b0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1398b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1398b4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1398b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1398b8: 0x8e220ab8  lw          $v0, 0xAB8($s1)
    ctx->pc = 0x1398b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2744)));
    // 0x1398bc: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1398BCu;
    {
        const bool branch_taken_0x1398bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1398C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1398BCu;
        // 0x1398c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1398bc) {
            ctx->pc = 0x139B98u;
            goto label_139b98;
        }
    }
    ctx->pc = 0x1398C4u;
    // 0x1398c4: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1398c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1398c8: 0xc04eaf0  jal         func_13ABC0
    ctx->pc = 0x1398C8u;
    SET_GPR_U32(ctx, 31, 0x1398D0u);
    ctx->pc = 0x1398CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1398C8u;
    // 0x1398cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ABC0u, 0x1398C8u, 0x1398D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1398D0u;
label_1398d0:
    // 0x1398d0: 0x544000b1  bnel        $v0, $zero, . + 4 + (0xB1 << 2)
    ctx->pc = 0x1398D0u;
    {
        const bool branch_taken_0x1398d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1398d0) {
            ctx->pc = 0x1398D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1398D0u;
            // 0x1398d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139B98u;
            goto label_139b98;
        }
    }
    ctx->pc = 0x1398D8u;
    // 0x1398d8: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x1398d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1398dc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1398dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1398e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1398e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1398e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1398e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1398e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1398e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1398ec: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1398ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1398f0: 0x126000a9  beqz        $s3, . + 4 + (0xA9 << 2)
    ctx->pc = 0x1398F0u;
    {
        const bool branch_taken_0x1398f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1398F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1398F0u;
        // 0x1398f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1398f0) {
            ctx->pc = 0x139B98u;
            goto label_139b98;
        }
    }
    ctx->pc = 0x1398F8u;
    // 0x1398f8: 0x8e220abc  lw          $v0, 0xABC($s1)
    ctx->pc = 0x1398f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2748)));
    // 0x1398fc: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x1398fcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x139900: 0x2621026  xor         $v0, $s3, $v0
    ctx->pc = 0x139900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 2));
    // 0x139904: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x139904u;
    {
        const bool branch_taken_0x139904 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x139908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139904u;
        // 0x139908: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139904) {
            ctx->pc = 0x139928u;
            goto label_139928;
        }
    }
    ctx->pc = 0x13990Cu;
    // 0x13990c: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x13990Cu;
    {
        const bool branch_taken_0x13990c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x139910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13990Cu;
        // 0x139910: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13990c) {
            ctx->pc = 0x13992Cu;
            goto label_13992c;
        }
    }
    ctx->pc = 0x139914u;
    // 0x139914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139918: 0xc04eaea  jal         func_13ABA8
    ctx->pc = 0x139918u;
    SET_GPR_U32(ctx, 31, 0x139920u);
    ctx->pc = 0x13991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139918u;
    // 0x13991c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ABA8u, 0x139918u, 0x139920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139920u;
label_139920:
    // 0x139920: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x139920u;
    {
        const bool branch_taken_0x139920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139920u;
        // 0x139924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139920) {
            ctx->pc = 0x139B98u;
            goto label_139b98;
        }
    }
    ctx->pc = 0x139928u;
label_139928:
    // 0x139928: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x139928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_13992c:
    // 0x13992c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x13992cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x139930: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x139930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x139934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139938: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x139938u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x13993c: 0x56000025  bnel        $s0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x13993Cu;
    {
        const bool branch_taken_0x13993c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13993c) {
            ctx->pc = 0x139940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13993Cu;
            // 0x139940: 0x9223046c  lbu         $v1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1399D4u;
            goto label_1399d4;
        }
    }
    ctx->pc = 0x139944u;
    // 0x139944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139948: 0xc04eabe  jal         func_13AAF8
    ctx->pc = 0x139948u;
    SET_GPR_U32(ctx, 31, 0x139950u);
    ctx->pc = 0x13994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139948u;
    // 0x13994c: 0x2414005c  addiu       $s4, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAF8u, 0x139948u, 0x139950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139950u;
label_139950:
    // 0x139950: 0x263004f0  addiu       $s0, $s1, 0x4F0
    ctx->pc = 0x139950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1264));
    // 0x139954: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x139954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x139958: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x139958u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x13995c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13995cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139960: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x139960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139964: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x139964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x139968: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x139968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13996c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x13996cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x139970: 0xc04eaea  jal         func_13ABA8
    ctx->pc = 0x139970u;
    SET_GPR_U32(ctx, 31, 0x139978u);
    ctx->pc = 0x139974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139970u;
    // 0x139974: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ABA8u, 0x139970u, 0x139978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139978u;
label_139978:
    // 0x139978: 0x12400087  beqz        $s2, . + 4 + (0x87 << 2)
    ctx->pc = 0x139978u;
    {
        const bool branch_taken_0x139978 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139978u;
        // 0x13997c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139978) {
            ctx->pc = 0x139B98u;
            goto label_139b98;
        }
    }
    ctx->pc = 0x139980u;
    // 0x139980: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x139980u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x139984: 0xc04eabe  jal         func_13AAF8
    ctx->pc = 0x139984u;
    SET_GPR_U32(ctx, 31, 0x13998Cu);
    ctx->pc = 0x139988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139984u;
    // 0x139988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAF8u, 0x139984u, 0x13998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13998Cu;
label_13998c:
    // 0x13998c: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x13998cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x139990: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x139990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139998: 0x541818  mult        $v1, $v0, $s4
    ctx->pc = 0x139998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13999c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x13999cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1399a0: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1399a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x1399a4: 0xc04eaea  jal         func_13ABA8
    ctx->pc = 0x1399A4u;
    SET_GPR_U32(ctx, 31, 0x1399ACu);
    ctx->pc = 0x1399A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1399A4u;
    // 0x1399a8: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ABA8u, 0x1399A4u, 0x1399ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1399ACu;
label_1399ac:
    // 0x1399ac: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1399acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1399b0: 0xc04eda6  jal         func_13B698
    ctx->pc = 0x1399B0u;
    SET_GPR_U32(ctx, 31, 0x1399B8u);
    ctx->pc = 0x1399B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1399B0u;
    // 0x1399b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B698u, 0x1399B0u, 0x1399B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1399B8u;
label_1399b8:
    // 0x1399b8: 0xae200ab8  sw          $zero, 0xAB8($s1)
    ctx->pc = 0x1399b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2744), GPR_U32(ctx, 0));
    // 0x1399bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1399bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1399c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1399c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1399c4: 0xc04ea9a  jal         func_13AA68
    ctx->pc = 0x1399C4u;
    SET_GPR_U32(ctx, 31, 0x1399CCu);
    ctx->pc = 0x1399C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1399C4u;
    // 0x1399c8: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AA68u, 0x1399C4u, 0x1399CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1399CCu;
label_1399cc:
    // 0x1399cc: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1399CCu;
    {
        const bool branch_taken_0x1399cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1399D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1399CCu;
        // 0x1399d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1399cc) {
            ctx->pc = 0x139B98u;
            goto label_139b98;
        }
    }
    ctx->pc = 0x1399D4u;
label_1399d4:
    // 0x1399d4: 0x2412005c  addiu       $s2, $zero, 0x5C
    ctx->pc = 0x1399d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1399d8: 0x262404f0  addiu       $a0, $s1, 0x4F0
    ctx->pc = 0x1399d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1264));
    // 0x1399dc: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x1399dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1399e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1399e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1399e4: 0x24150012  addiu       $s5, $zero, 0x12
    ctx->pc = 0x1399e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1399e8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1399e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1399ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1399ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1399f0: 0x14550004  bne         $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1399F0u;
    {
        const bool branch_taken_0x1399f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x1399F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1399F0u;
        // 0x1399f4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1399f0) {
            ctx->pc = 0x139A04u;
            goto label_139a04;
        }
    }
    ctx->pc = 0x1399F8u;
    // 0x1399f8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1399f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1399fc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1399fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139a00: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x139a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_139a04:
    // 0x139a04: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x139a04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x139a08: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x139a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x139a0c: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x139a0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x139a10: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x139a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x139a14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x139a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139a18: 0x1464005f  bne         $v1, $a0, . + 4 + (0x5F << 2)
    ctx->pc = 0x139A18u;
    {
        const bool branch_taken_0x139a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x139A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A18u;
        // 0x139a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a18) {
            ctx->pc = 0x139B98u;
            goto label_139b98;
        }
    }
    ctx->pc = 0x139A20u;
    // 0x139a20: 0x54c00027  bnel        $a2, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x139A20u;
    {
        const bool branch_taken_0x139a20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x139a20) {
            ctx->pc = 0x139A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139A20u;
            // 0x139a24: 0x8e250ab0  lw          $a1, 0xAB0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139AC0u;
            goto label_139ac0;
        }
    }
    ctx->pc = 0x139A28u;
    // 0x139a28: 0x8e220464  lw          $v0, 0x464($s1)
    ctx->pc = 0x139a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1124)));
    // 0x139a2c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x139a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x139a30: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x139a30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x139a34: 0x8e260ab0  lw          $a2, 0xAB0($s1)
    ctx->pc = 0x139a34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2736)));
    // 0x139a38: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x139a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x139a3c: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x139a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x139a40: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x139A40u;
    SET_GPR_U32(ctx, 31, 0x139A48u);
    ctx->pc = 0x139A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139A40u;
    // 0x139a44: 0x24e78738  addiu       $a3, $a3, -0x78C8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x139A40u, 0x139A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A48u;
label_139a48:
    // 0x139a48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x139a48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a4c: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x139A4Cu;
    {
        const bool branch_taken_0x139a4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x139A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A4Cu;
        // 0x139a50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a4c) {
            ctx->pc = 0x139A90u;
            goto label_139a90;
        }
    }
    ctx->pc = 0x139A54u;
    // 0x139a54: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x139A54u;
    SET_GPR_U32(ctx, 31, 0x139A5Cu);
    ctx->pc = 0x139A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139A54u;
    // 0x139a58: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x139A54u, 0x139A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A5Cu;
label_139a5c:
    // 0x139a5c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x139a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x139a60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x139a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a64: 0xc042128  jal         func_1084A0
    ctx->pc = 0x139A64u;
    SET_GPR_U32(ctx, 31, 0x139A6Cu);
    ctx->pc = 0x139A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139A64u;
    // 0x139a68: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x139A64u, 0x139A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A6Cu;
label_139a6c:
    // 0x139a6c: 0x56130009  bnel        $s0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x139A6Cu;
    {
        const bool branch_taken_0x139a6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x139a6c) {
            ctx->pc = 0x139A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139A6Cu;
            // 0x139a70: 0x9222046c  lbu         $v0, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139A94u;
            goto label_139a94;
        }
    }
    ctx->pc = 0x139A74u;
    // 0x139a74: 0x52c00007  beql        $s6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x139A74u;
    {
        const bool branch_taken_0x139a74 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x139a74) {
            ctx->pc = 0x139A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139A74u;
            // 0x139a78: 0x9222046c  lbu         $v0, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139A94u;
            goto label_139a94;
        }
    }
    ctx->pc = 0x139A7Cu;
    // 0x139a7c: 0xc04ed64  jal         func_13B590
    ctx->pc = 0x139A7Cu;
    SET_GPR_U32(ctx, 31, 0x139A84u);
    ctx->pc = 0x139A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139A7Cu;
    // 0x139a80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B590u, 0x139A7Cu, 0x139A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A84u;
label_139a84:
    // 0x139a84: 0xae330abc  sw          $s3, 0xABC($s1)
    ctx->pc = 0x139a84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2748), GPR_U32(ctx, 19));
    // 0x139a88: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x139A88u;
    {
        const bool branch_taken_0x139a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A88u;
        // 0x139a8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a88) {
            ctx->pc = 0x139B98u;
            goto label_139b98;
        }
    }
    ctx->pc = 0x139A90u;
label_139a90:
    // 0x139a90: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x139a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
label_139a94:
    // 0x139a94: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x139a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x139a98: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x139a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x139a9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139aa0: 0x433018  mult        $a2, $v0, $v1
    ctx->pc = 0x139aa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x139aa4: 0xd41021  addu        $v0, $a2, $s4
    ctx->pc = 0x139aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x139aa8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x139aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x139aac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x139aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139ab0: 0xc04eaea  jal         func_13ABA8
    ctx->pc = 0x139AB0u;
    SET_GPR_U32(ctx, 31, 0x139AB8u);
    ctx->pc = 0x139AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139AB0u;
    // 0x139ab4: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ABA8u, 0x139AB0u, 0x139AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139AB8u;
label_139ab8:
    // 0x139ab8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x139AB8u;
    {
        const bool branch_taken_0x139ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139AB8u;
        // 0x139abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ab8) {
            ctx->pc = 0x139B98u;
            goto label_139b98;
        }
    }
    ctx->pc = 0x139AC0u;
label_139ac0:
    // 0x139ac0: 0xc044234  jal         func_1108D0
    ctx->pc = 0x139AC0u;
    SET_GPR_U32(ctx, 31, 0x139AC8u);
    ctx->pc = 0x139AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139AC0u;
    // 0x139ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x139AC0u, 0x139AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139AC8u;
label_139ac8:
    // 0x139ac8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x139ac8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139acc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x139accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x139ad0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x139AD0u;
    {
        const bool branch_taken_0x139ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x139AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139AD0u;
        // 0x139ad4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ad0) {
            ctx->pc = 0x139B08u;
            goto label_139b08;
        }
    }
    ctx->pc = 0x139AD8u;
    // 0x139ad8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x139AD8u;
    {
        const bool branch_taken_0x139ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139ad8) {
            ctx->pc = 0x139B08u;
            goto label_139b08;
        }
    }
    ctx->pc = 0x139AE0u;
    // 0x139ae0: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x139ae0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x139ae4: 0xc04eabe  jal         func_13AAF8
    ctx->pc = 0x139AE4u;
    SET_GPR_U32(ctx, 31, 0x139AECu);
    ctx->pc = 0x139AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139AE4u;
    // 0x139ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAF8u, 0x139AE4u, 0x139AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139AECu;
label_139aec:
    // 0x139aec: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x139aecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x139af0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x139af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139af8: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x139af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x139afc: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x139afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x139b00: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x139B00u;
    {
        const bool branch_taken_0x139b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139B00u;
        // 0x139b04: 0xac550000  sw          $s5, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b00) {
            ctx->pc = 0x139B6Cu;
            goto label_139b6c;
        }
    }
    ctx->pc = 0x139B08u;
label_139b08:
    // 0x139b08: 0xc044240  jal         func_110900
    ctx->pc = 0x139B08u;
    SET_GPR_U32(ctx, 31, 0x139B10u);
    ctx->pc = 0x139B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139B08u;
    // 0x139b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110900u, 0x139B08u, 0x139B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B10u;
label_139b10:
    // 0x139b10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x139b10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b14: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x139b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x139b18: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139B18u;
    {
        const bool branch_taken_0x139b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x139B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139B18u;
        // 0x139b1c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b18) {
            ctx->pc = 0x139B28u;
            goto label_139b28;
        }
    }
    ctx->pc = 0x139B20u;
    // 0x139b20: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x139B20u;
    {
        const bool branch_taken_0x139b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139b20) {
            ctx->pc = 0x139B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139B20u;
            // 0x139b24: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139B44u;
            goto label_139b44;
        }
    }
    ctx->pc = 0x139B28u;
label_139b28:
    // 0x139b28: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x139b28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x139b2c: 0xc04eac4  jal         func_13AB10
    ctx->pc = 0x139B2Cu;
    SET_GPR_U32(ctx, 31, 0x139B34u);
    ctx->pc = 0x139B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139B2Cu;
    // 0x139b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB10u, 0x139B2Cu, 0x139B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B34u;
label_139b34:
    // 0x139b34: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x139B34u;
    {
        const bool branch_taken_0x139b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139b34) {
            ctx->pc = 0x139B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139B34u;
            // 0x139b38: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139B44u;
            goto label_139b44;
        }
    }
    ctx->pc = 0x139B3Cu;
    // 0x139b3c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x139B3Cu;
    {
        const bool branch_taken_0x139b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139B3Cu;
        // 0x139b40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b3c) {
            ctx->pc = 0x139B98u;
            goto label_139b98;
        }
    }
    ctx->pc = 0x139B44u;
label_139b44:
    // 0x139b44: 0xc04eabe  jal         func_13AAF8
    ctx->pc = 0x139B44u;
    SET_GPR_U32(ctx, 31, 0x139B4Cu);
    ctx->pc = 0x139B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139B44u;
    // 0x139b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAF8u, 0x139B44u, 0x139B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B4Cu;
label_139b4c:
    // 0x139b4c: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x139b4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x139b50: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x139b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x139b54: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x139b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x139b58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x139b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139b5c: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x139b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x139b60: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x139b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x139b64: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x139b64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x139b68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_139b6c:
    // 0x139b6c: 0xc04eaea  jal         func_13ABA8
    ctx->pc = 0x139B6Cu;
    SET_GPR_U32(ctx, 31, 0x139B74u);
    ctx->pc = 0x139B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139B6Cu;
    // 0x139b70: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ABA8u, 0x139B6Cu, 0x139B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B74u;
label_139b74:
    // 0x139b74: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x139b74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x139b78: 0xc04eda6  jal         func_13B698
    ctx->pc = 0x139B78u;
    SET_GPR_U32(ctx, 31, 0x139B80u);
    ctx->pc = 0x139B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139B78u;
    // 0x139b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B698u, 0x139B78u, 0x139B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B80u;
label_139b80:
    // 0x139b80: 0xae200ab8  sw          $zero, 0xAB8($s1)
    ctx->pc = 0x139b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2744), GPR_U32(ctx, 0));
    // 0x139b84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x139b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139b8c: 0xc04ea9a  jal         func_13AA68
    ctx->pc = 0x139B8Cu;
    SET_GPR_U32(ctx, 31, 0x139B94u);
    ctx->pc = 0x139B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139B8Cu;
    // 0x139b90: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AA68u, 0x139B8Cu, 0x139B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B94u;
label_139b94:
    // 0x139b94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x139b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139b98:
    // 0x139b98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139b9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x139b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139ba0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x139ba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139ba4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x139ba4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139ba8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x139ba8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139bac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x139bacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x139bb0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x139bb0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139bb4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x139bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x139BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139BB8u;
        // 0x139bbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139BC0u;
}
