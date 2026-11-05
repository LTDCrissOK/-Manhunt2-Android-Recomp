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

// Function: sub_00127928
// Address: 0x127928 - 0x127b58
void sub_00127928_0x127928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127928_0x127928");
#endif

    switch (ctx->pc) {
        case 0x1279acu: goto label_1279ac;
        case 0x1279d4u: goto label_1279d4;
        case 0x127a34u: goto label_127a34;
        case 0x127a44u: goto label_127a44;
        case 0x127a68u: goto label_127a68;
        case 0x127a98u: goto label_127a98;
        case 0x127abcu: goto label_127abc;
        case 0x127accu: goto label_127acc;
        case 0x127ad8u: goto label_127ad8;
        case 0x127ae4u: goto label_127ae4;
        case 0x127af0u: goto label_127af0;
        case 0x127af8u: goto label_127af8;
        case 0x127b0cu: goto label_127b0c;
        case 0x127b18u: goto label_127b18;
        case 0x127b24u: goto label_127b24;
        case 0x127b34u: goto label_127b34;
        default: break;
    }

    ctx->pc = 0x127928u;

    // 0x127928: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x127928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12792c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x12792cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x127930: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x127930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x127934: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x127934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x127938: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x127938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12793c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12793cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x127940: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x127940u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127944: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x127944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x127948: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x127948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12794c: 0x12400079  beqz        $s2, . + 4 + (0x79 << 2)
    ctx->pc = 0x12794Cu;
    {
        const bool branch_taken_0x12794c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x127950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12794Cu;
        // 0x127950: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12794c) {
            ctx->pc = 0x127B34u;
            goto label_127b34;
        }
    }
    ctx->pc = 0x127954u;
    // 0x127954: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x127954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x127958: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x127958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x12795c: 0xa32018  mult        $a0, $a1, $v1
    ctx->pc = 0x12795cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x127960: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x127960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x127964: 0x941821  addu        $v1, $a0, $s4
    ctx->pc = 0x127964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x127968: 0x90620448  lbu         $v0, 0x448($v1)
    ctx->pc = 0x127968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1096)));
    // 0x12796c: 0x2445fffe  addiu       $a1, $v0, -0x2
    ctx->pc = 0x12796cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x127970: 0x2ca30006  sltiu       $v1, $a1, 0x6
    ctx->pc = 0x127970u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x127974: 0x1060006f  beqz        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x127974u;
    {
        const bool branch_taken_0x127974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x127978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127974u;
        // 0x127978: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127974) {
            ctx->pc = 0x127B34u;
            goto label_127b34;
        }
    }
    ctx->pc = 0x12797Cu;
    // 0x12797c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x12797cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x127980: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x127980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x127984: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x127984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
    // 0x127988: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x127988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12798c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12798cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127990: 0x800008  jr          $a0
    ctx->pc = 0x127990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127998u: goto label_127998;
            case 0x1279B4u: goto label_1279b4;
            case 0x1279C0u: goto label_1279c0;
            case 0x1279CCu: goto label_1279cc;
            case 0x1279FCu: goto label_1279fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127990u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x127998u;
label_127998:
    // 0x127998: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x127998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x12799c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12799cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1279a0: 0x24849e60  addiu       $a0, $a0, -0x61A0
    ctx->pc = 0x1279a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942304));
    // 0x1279a4: 0xc04800a  jal         func_120028
    ctx->pc = 0x1279A4u;
    SET_GPR_U32(ctx, 31, 0x1279ACu);
    ctx->pc = 0x1279A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1279A4u;
    // 0x1279a8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120028u, 0x1279A4u, 0x1279ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1279ACu;
label_1279ac:
    // 0x1279ac: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1279ACu;
    {
        const bool branch_taken_0x1279ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1279B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279ACu;
        // 0x1279b0: 0x3c110049  lui         $s1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279ac) {
            ctx->pc = 0x127A04u;
            goto label_127a04;
        }
    }
    ctx->pc = 0x1279B4u;
label_1279b4:
    // 0x1279b4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1279b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1279b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1279B8u;
    {
        const bool branch_taken_0x1279b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1279BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279B8u;
        // 0x1279bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279b8) {
            ctx->pc = 0x127A00u;
            goto label_127a00;
        }
    }
    ctx->pc = 0x1279C0u;
label_1279c0:
    // 0x1279c0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1279c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1279c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1279C4u;
    {
        const bool branch_taken_0x1279c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1279C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279C4u;
        // 0x1279c8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279c4) {
            ctx->pc = 0x127A00u;
            goto label_127a00;
        }
    }
    ctx->pc = 0x1279CCu;
label_1279cc:
    // 0x1279cc: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x1279CCu;
    SET_GPR_U32(ctx, 31, 0x1279D4u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x1279CCu, 0x1279D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1279D4u;
label_1279d4:
    // 0x1279d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1279d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1279d8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1279d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1279dc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1279DCu;
    {
        const bool branch_taken_0x1279dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1279dc) {
            ctx->pc = 0x1279E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1279DCu;
            // 0x1279e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1279E4u;
            goto label_1279e4;
        }
    }
    ctx->pc = 0x1279E4u;
label_1279e4:
    // 0x1279e4: 0x2010  mfhi        $a0
    ctx->pc = 0x1279e4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1279e8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1279E8u;
    {
        const bool branch_taken_0x1279e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1279ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279E8u;
        // 0x1279ec: 0x3c110049  lui         $s1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279e8) {
            ctx->pc = 0x127A04u;
            goto label_127a04;
        }
    }
    ctx->pc = 0x1279F0u;
    // 0x1279f0: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1279f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1279f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1279F4u;
    {
        const bool branch_taken_0x1279f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1279F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279F4u;
        // 0x1279f8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279f4) {
            ctx->pc = 0x127A04u;
            goto label_127a04;
        }
    }
    ctx->pc = 0x1279FCu;
label_1279fc:
    // 0x1279fc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1279fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127a00:
    // 0x127a00: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x127a00u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
label_127a04:
    // 0x127a04: 0x12600026  beqz        $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x127A04u;
    {
        const bool branch_taken_0x127a04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x127A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A04u;
        // 0x127a08: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a04) {
            ctx->pc = 0x127AA0u;
            goto label_127aa0;
        }
    }
    ctx->pc = 0x127A0Cu;
    // 0x127a0c: 0x26229a08  addiu       $v0, $s1, -0x65F8
    ctx->pc = 0x127a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941192));
    // 0x127a10: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x127a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x127a14: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x127a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x127a18: 0x50800047  beql        $a0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x127A18u;
    {
        const bool branch_taken_0x127a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x127a18) {
            ctx->pc = 0x127A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127A18u;
            // 0x127a1c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127B38u;
            goto label_127b38;
        }
    }
    ctx->pc = 0x127A20u;
    // 0x127a20: 0x8c840ff4  lw          $a0, 0xFF4($a0)
    ctx->pc = 0x127a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4084)));
    // 0x127a24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127A24u;
    {
        const bool branch_taken_0x127a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x127A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A24u;
        // 0x127a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a24) {
            ctx->pc = 0x127A34u;
            goto label_127a34;
        }
    }
    ctx->pc = 0x127A2Cu;
    // 0x127a2c: 0xc0619d2  jal         func_186748
    ctx->pc = 0x127A2Cu;
    SET_GPR_U32(ctx, 31, 0x127A34u);
    ctx->pc = 0x186748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186748u, 0x127A2Cu, 0x127A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A34u;
label_127a34:
    // 0x127a34: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x127A34u;
    {
        const bool branch_taken_0x127a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127a34) {
            ctx->pc = 0x127A60u;
            goto label_127a60;
        }
    }
    ctx->pc = 0x127A3Cu;
    // 0x127a3c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x127A3Cu;
    SET_GPR_U32(ctx, 31, 0x127A44u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x127A3Cu, 0x127A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A44u;
label_127a44:
    // 0x127a44: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x127a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x127a48: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x127a48u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x127a4c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x127A4Cu;
    {
        const bool branch_taken_0x127a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127a4c) {
            ctx->pc = 0x127A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127A4Cu;
            // 0x127a50: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x127A54u;
            goto label_127a54;
        }
    }
    ctx->pc = 0x127A54u;
label_127a54:
    // 0x127a54: 0x2010  mfhi        $a0
    ctx->pc = 0x127a54u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x127a58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x127A58u;
    {
        const bool branch_taken_0x127a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A58u;
        // 0x127a5c: 0x2c840003  sltiu       $a0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a58) {
            ctx->pc = 0x127A80u;
            goto label_127a80;
        }
    }
    ctx->pc = 0x127A60u;
label_127a60:
    // 0x127a60: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x127A60u;
    SET_GPR_U32(ctx, 31, 0x127A68u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x127A60u, 0x127A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A68u;
label_127a68:
    // 0x127a68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x127a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127a6c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x127a6cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x127a70: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x127A70u;
    {
        const bool branch_taken_0x127a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127a70) {
            ctx->pc = 0x127A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127A70u;
            // 0x127a74: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x127A78u;
            goto label_127a78;
        }
    }
    ctx->pc = 0x127A78u;
label_127a78:
    // 0x127a78: 0x2010  mfhi        $a0
    ctx->pc = 0x127a78u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x127a7c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x127a7cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_127a80:
    // 0x127a80: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x127A80u;
    {
        const bool branch_taken_0x127a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x127A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A80u;
        // 0x127a84: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a80) {
            ctx->pc = 0x127B34u;
            goto label_127b34;
        }
    }
    ctx->pc = 0x127A88u;
    // 0x127a88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x127a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a8c: 0x24849e60  addiu       $a0, $a0, -0x61A0
    ctx->pc = 0x127a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942304));
    // 0x127a90: 0xc047fd8  jal         func_11FF60
    ctx->pc = 0x127A90u;
    SET_GPR_U32(ctx, 31, 0x127A98u);
    ctx->pc = 0x127A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A90u;
    // 0x127a94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF60u, 0x127A90u, 0x127A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A98u;
label_127a98:
    // 0x127a98: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x127A98u;
    {
        const bool branch_taken_0x127a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127a98) {
            ctx->pc = 0x127A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127A98u;
            // 0x127a9c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127B38u;
            goto label_127b38;
        }
    }
    ctx->pc = 0x127AA0u;
label_127aa0:
    // 0x127aa0: 0x26229a08  addiu       $v0, $s1, -0x65F8
    ctx->pc = 0x127aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941192));
    // 0x127aa4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x127aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x127aa8: 0x8c53020c  lw          $s3, 0x20C($v0)
    ctx->pc = 0x127aa8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x127aac: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x127AACu;
    {
        const bool branch_taken_0x127aac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x127AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AACu;
        // 0x127ab0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127aac) {
            ctx->pc = 0x127B34u;
            goto label_127b34;
        }
    }
    ctx->pc = 0x127AB4u;
    // 0x127ab4: 0xc04a2ce  jal         func_128B38
    ctx->pc = 0x127AB4u;
    SET_GPR_U32(ctx, 31, 0x127ABCu);
    ctx->pc = 0x127AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127AB4u;
    // 0x127ab8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128B38u, 0x127AB4u, 0x127ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127ABCu;
label_127abc:
    // 0x127abc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x127abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ac0: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x127ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x127ac4: 0xc046138  jal         func_1184E0
    ctx->pc = 0x127AC4u;
    SET_GPR_U32(ctx, 31, 0x127ACCu);
    ctx->pc = 0x127AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127AC4u;
    // 0x127ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x127AC4u, 0x127ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127ACCu;
label_127acc:
    // 0x127acc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x127accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ad0: 0xc046154  jal         func_118550
    ctx->pc = 0x127AD0u;
    SET_GPR_U32(ctx, 31, 0x127AD8u);
    ctx->pc = 0x127AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127AD0u;
    // 0x127ad4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x127AD0u, 0x127AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127AD8u;
label_127ad8:
    // 0x127ad8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x127ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127adc: 0xc046164  jal         func_118590
    ctx->pc = 0x127ADCu;
    SET_GPR_U32(ctx, 31, 0x127AE4u);
    ctx->pc = 0x127AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127ADCu;
    // 0x127ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x127ADCu, 0x127AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127AE4u;
label_127ae4:
    // 0x127ae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x127ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ae8: 0xc046256  jal         func_118958
    ctx->pc = 0x127AE8u;
    SET_GPR_U32(ctx, 31, 0x127AF0u);
    ctx->pc = 0x127AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127AE8u;
    // 0x127aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x127AE8u, 0x127AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127AF0u;
label_127af0:
    // 0x127af0: 0xc04a2ee  jal         func_128BB8
    ctx->pc = 0x127AF0u;
    SET_GPR_U32(ctx, 31, 0x127AF8u);
    ctx->pc = 0x127AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127AF0u;
    // 0x127af4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128BB8u, 0x127AF0u, 0x127AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127AF8u;
label_127af8:
    // 0x127af8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x127af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127afc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x127afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x127b00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x127b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b04: 0xc045612  jal         func_115848
    ctx->pc = 0x127B04u;
    SET_GPR_U32(ctx, 31, 0x127B0Cu);
    ctx->pc = 0x127B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127B04u;
    // 0x127b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x127B04u, 0x127B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127B0Cu;
label_127b0c:
    // 0x127b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b10: 0xc045668  jal         func_1159A0
    ctx->pc = 0x127B10u;
    SET_GPR_U32(ctx, 31, 0x127B18u);
    ctx->pc = 0x127B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127B10u;
    // 0x127b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x127B10u, 0x127B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127B18u;
label_127b18:
    // 0x127b18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x127b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b1c: 0xc0456b2  jal         func_115AC8
    ctx->pc = 0x127B1Cu;
    SET_GPR_U32(ctx, 31, 0x127B24u);
    ctx->pc = 0x127B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127B1Cu;
    // 0x127b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AC8u, 0x127B1Cu, 0x127B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127B24u;
label_127b24:
    // 0x127b24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x127b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x127b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b2c: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x127B2Cu;
    SET_GPR_U32(ctx, 31, 0x127B34u);
    ctx->pc = 0x127B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127B2Cu;
    // 0x127b30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x127B2Cu, 0x127B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127B34u;
label_127b34:
    // 0x127b34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x127b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_127b38:
    // 0x127b38: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x127b38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127b3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x127b3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127b40: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x127b40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x127b44: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x127b44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127b48: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x127b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x127b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x127B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B4Cu;
        // 0x127b50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127B54u;
    // 0x127b54: 0x0  nop
    ctx->pc = 0x127b54u;
    // NOP
    ctx->pc = 0x127b58u;
}
