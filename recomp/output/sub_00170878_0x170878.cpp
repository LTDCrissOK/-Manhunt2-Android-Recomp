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

// Function: sub_00170878
// Address: 0x170878 - 0x170a38
void sub_00170878_0x170878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170878_0x170878");
#endif

    switch (ctx->pc) {
        case 0x1708d0u: goto label_1708d0;
        case 0x1708ecu: goto label_1708ec;
        case 0x170900u: goto label_170900;
        case 0x170910u: goto label_170910;
        case 0x170920u: goto label_170920;
        case 0x170940u: goto label_170940;
        case 0x170950u: goto label_170950;
        case 0x170978u: goto label_170978;
        case 0x170988u: goto label_170988;
        case 0x1709bcu: goto label_1709bc;
        case 0x1709e8u: goto label_1709e8;
        default: break;
    }

    ctx->pc = 0x170878u;

    // 0x170878: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x170878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17087c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17087cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x170880: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170884: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x170884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170888: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x170888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17088c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17088cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x170890: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x170890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x170894: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x170894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x170898: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x170898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17089c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x17089cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1708a0: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x1708a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x1708a4: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1708A4u;
    {
        const bool branch_taken_0x1708a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708A4u;
        // 0x1708a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708a4) {
            ctx->pc = 0x170A14u;
            goto label_170a14;
        }
    }
    ctx->pc = 0x1708ACu;
    // 0x1708ac: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x1708acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x1708b0: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1708B0u;
    {
        const bool branch_taken_0x1708b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708B0u;
        // 0x1708b4: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708b0) {
            ctx->pc = 0x170A14u;
            goto label_170a14;
        }
    }
    ctx->pc = 0x1708B8u;
    // 0x1708b8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1708b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1708bc: 0x24569c14  addiu       $s6, $v0, -0x63EC
    ctx->pc = 0x1708bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x1708c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1708c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1708c4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1708c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1708c8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1708c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1708cc: 0x0  nop
    ctx->pc = 0x1708ccu;
    // NOP
label_1708d0:
    // 0x1708d0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1708d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1708d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1708d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1708d8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1708d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1708dc: 0x12400047  beqz        $s2, . + 4 + (0x47 << 2)
    ctx->pc = 0x1708DCu;
    {
        const bool branch_taken_0x1708dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708DCu;
        // 0x1708e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708dc) {
            ctx->pc = 0x1709FCu;
            goto label_1709fc;
        }
    }
    ctx->pc = 0x1708E4u;
    // 0x1708e4: 0xc04f8e6  jal         func_13E398
    ctx->pc = 0x1708E4u;
    SET_GPR_U32(ctx, 31, 0x1708ECu);
    ctx->pc = 0x1708E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1708E4u;
    // 0x1708e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E398u, 0x1708E4u, 0x1708ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1708ECu;
label_1708ec:
    // 0x1708ec: 0x1454003f  bne         $v0, $s4, . + 4 + (0x3F << 2)
    ctx->pc = 0x1708ECu;
    {
        const bool branch_taken_0x1708ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1708F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708ECu;
        // 0x1708f0: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708ec) {
            ctx->pc = 0x1709ECu;
            goto label_1709ec;
        }
    }
    ctx->pc = 0x1708F4u;
    // 0x1708f4: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x1708f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1708f8: 0xc04ef9c  jal         func_13BE70
    ctx->pc = 0x1708F8u;
    SET_GPR_U32(ctx, 31, 0x170900u);
    ctx->pc = 0x1708FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1708F8u;
    // 0x1708fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BE70u, 0x1708F8u, 0x170900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170900u;
label_170900:
    // 0x170900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170904: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x170904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170908: 0xc04f8e0  jal         func_13E380
    ctx->pc = 0x170908u;
    SET_GPR_U32(ctx, 31, 0x170910u);
    ctx->pc = 0x17090Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170908u;
    // 0x17090c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E380u, 0x170908u, 0x170910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170910u;
label_170910:
    // 0x170910: 0x8e2600b4  lw          $a2, 0xB4($s1)
    ctx->pc = 0x170910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x170914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170918: 0xc05cd5c  jal         func_173570
    ctx->pc = 0x170918u;
    SET_GPR_U32(ctx, 31, 0x170920u);
    ctx->pc = 0x17091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170918u;
    // 0x17091c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173570u, 0x170918u, 0x170920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170920u;
label_170920:
    // 0x170920: 0x8e2300b4  lw          $v1, 0xB4($s1)
    ctx->pc = 0x170920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x170924: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x170924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x170928: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x170928u;
    {
        const bool branch_taken_0x170928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170928u;
        // 0x17092c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170928) {
            ctx->pc = 0x170958u;
            goto label_170958;
        }
    }
    ctx->pc = 0x170930u;
    // 0x170930: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x170930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x170934: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x170934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x170938: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x170938u;
    SET_GPR_U32(ctx, 31, 0x170940u);
    ctx->pc = 0x17093Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170938u;
    // 0x17093c: 0x8c50001c  lw          $s0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x170938u, 0x170940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170940u;
label_170940:
    // 0x170940: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x170940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x170944: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170948: 0xc044498  jal         func_111260
    ctx->pc = 0x170948u;
    SET_GPR_U32(ctx, 31, 0x170950u);
    ctx->pc = 0x17094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170948u;
    // 0x17094c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111260u, 0x170948u, 0x170950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170950u;
label_170950:
    // 0x170950: 0x8e2300b4  lw          $v1, 0xB4($s1)
    ctx->pc = 0x170950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x170954: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x170954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_170958:
    // 0x170958: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x170958u;
    {
        const bool branch_taken_0x170958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x170958) {
            ctx->pc = 0x17095Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170958u;
            // 0x17095c: 0x8e2300b4  lw          $v1, 0xB4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17098Cu;
            goto label_17098c;
        }
    }
    ctx->pc = 0x170960u;
    // 0x170960: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x170960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x170964: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x170964u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x170968: 0x54740008  bnel        $v1, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x170968u;
    {
        const bool branch_taken_0x170968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x170968) {
            ctx->pc = 0x17096Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170968u;
            // 0x17096c: 0x8e2300b4  lw          $v1, 0xB4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17098Cu;
            goto label_17098c;
        }
    }
    ctx->pc = 0x170970u;
    // 0x170970: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x170970u;
    SET_GPR_U32(ctx, 31, 0x170978u);
    ctx->pc = 0x170974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170970u;
    // 0x170974: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x170970u, 0x170978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170978u;
label_170978:
    // 0x170978: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x170978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x17097c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17097cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170980: 0xc05a08a  jal         func_168228
    ctx->pc = 0x170980u;
    SET_GPR_U32(ctx, 31, 0x170988u);
    ctx->pc = 0x170984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170980u;
    // 0x170984: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168228u, 0x170980u, 0x170988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170988u;
label_170988:
    // 0x170988: 0x8e2300b4  lw          $v1, 0xB4($s1)
    ctx->pc = 0x170988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_17098c:
    // 0x17098c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x17098cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x170990: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x170990u;
    {
        const bool branch_taken_0x170990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x170990) {
            ctx->pc = 0x170994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170990u;
            // 0x170994: 0x8e2300b4  lw          $v1, 0xB4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1709C0u;
            goto label_1709c0;
        }
    }
    ctx->pc = 0x170998u;
    // 0x170998: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x170998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x17099c: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x17099cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1709a0: 0x54740007  bnel        $v1, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1709A0u;
    {
        const bool branch_taken_0x1709a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x1709a0) {
            ctx->pc = 0x1709A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1709A0u;
            // 0x1709a4: 0x8e2300b4  lw          $v1, 0xB4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1709C0u;
            goto label_1709c0;
        }
    }
    ctx->pc = 0x1709A8u;
    // 0x1709a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1709a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1709acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709b0: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1709b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1709b4: 0xc04fb7a  jal         func_13EDE8
    ctx->pc = 0x1709B4u;
    SET_GPR_U32(ctx, 31, 0x1709BCu);
    ctx->pc = 0x1709B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1709B4u;
    // 0x1709b8: 0x24070029  addiu       $a3, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EDE8u, 0x1709B4u, 0x1709BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1709BCu;
label_1709bc:
    // 0x1709bc: 0x8e2300b4  lw          $v1, 0xB4($s1)
    ctx->pc = 0x1709bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_1709c0:
    // 0x1709c0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1709c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1709c4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1709C4u;
    {
        const bool branch_taken_0x1709c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1709C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1709C4u;
        // 0x1709c8: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1709c4) {
            ctx->pc = 0x1709ECu;
            goto label_1709ec;
        }
    }
    ctx->pc = 0x1709CCu;
    // 0x1709cc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1709ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1709d0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1709d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1709d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1709d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1709d8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1709D8u;
    {
        const bool branch_taken_0x1709d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1709DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1709D8u;
        // 0x1709dc: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1709d8) {
            ctx->pc = 0x1709ECu;
            goto label_1709ec;
        }
    }
    ctx->pc = 0x1709E0u;
    // 0x1709e0: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x1709E0u;
    SET_GPR_U32(ctx, 31, 0x1709E8u);
    ctx->pc = 0x1709E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1709E0u;
    // 0x1709e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x1709E0u, 0x1709E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1709E8u;
label_1709e8:
    // 0x1709e8: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x1709e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1709ec:
    // 0x1709ec: 0x92230009  lbu         $v1, 0x9($s1)
    ctx->pc = 0x1709ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x1709f0: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1709f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1709f4: 0x12a30007  beq         $s5, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1709F4u;
    {
        const bool branch_taken_0x1709f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        ctx->pc = 0x1709F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1709F4u;
        // 0x1709f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1709f4) {
            ctx->pc = 0x170A14u;
            goto label_170a14;
        }
    }
    ctx->pc = 0x1709FCu;
label_1709fc:
    // 0x1709fc: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1709fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x170a00: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x170a00u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x170a04: 0x2e630010  sltiu       $v1, $s3, 0x10
    ctx->pc = 0x170a04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x170a08: 0x5460ffb1  bnel        $v1, $zero, . + 4 + (-0x4F << 2)
    ctx->pc = 0x170A08u;
    {
        const bool branch_taken_0x170a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x170a08) {
            ctx->pc = 0x170A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170A08u;
            // 0x170a0c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1708D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1708d0;
        }
    }
    ctx->pc = 0x170A10u;
    // 0x170a10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_170a14:
    // 0x170a14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x170a14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170a18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x170a18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170a1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x170a1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x170a20: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x170a20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170a24: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x170a24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x170a28: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x170a28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170a2c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x170a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x170a30: 0x3e00008  jr          $ra
    ctx->pc = 0x170A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A30u;
        // 0x170a34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170A38u;
}
