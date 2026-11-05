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

// Function: sub_00133930
// Address: 0x133930 - 0x133b40
void sub_00133930_0x133930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133930_0x133930");
#endif

    switch (ctx->pc) {
        case 0x133950u: goto label_133950;
        case 0x133960u: goto label_133960;
        case 0x13399cu: goto label_13399c;
        case 0x1339b0u: goto label_1339b0;
        case 0x1339c4u: goto label_1339c4;
        case 0x1339d8u: goto label_1339d8;
        case 0x1339ecu: goto label_1339ec;
        case 0x133a00u: goto label_133a00;
        case 0x133a14u: goto label_133a14;
        case 0x133a28u: goto label_133a28;
        case 0x133a3cu: goto label_133a3c;
        case 0x133a50u: goto label_133a50;
        case 0x133a64u: goto label_133a64;
        case 0x133a78u: goto label_133a78;
        case 0x133a8cu: goto label_133a8c;
        case 0x133aa0u: goto label_133aa0;
        case 0x133ab4u: goto label_133ab4;
        case 0x133ac8u: goto label_133ac8;
        case 0x133adcu: goto label_133adc;
        case 0x133af0u: goto label_133af0;
        case 0x133b04u: goto label_133b04;
        case 0x133b14u: goto label_133b14;
        case 0x133b24u: goto label_133b24;
        default: break;
    }

    ctx->pc = 0x133930u;

    // 0x133930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133934: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x133934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x133938: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x133938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13393c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13393cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133940: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133944: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x133944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x133948: 0xc04ce3a  jal         func_1338E8
    ctx->pc = 0x133948u;
    SET_GPR_U32(ctx, 31, 0x133950u);
    ctx->pc = 0x13394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133948u;
    // 0x13394c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1338E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1338E8u, 0x133948u, 0x133950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133950u;
label_133950:
    // 0x133950: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x133950u;
    {
        const bool branch_taken_0x133950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133950) {
            ctx->pc = 0x133954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133950u;
            // 0x133954: 0x8e230028  lw          $v1, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133968u;
            goto label_133968;
        }
    }
    ctx->pc = 0x133958u;
    // 0x133958: 0xc04b3f8  jal         func_12CFE0
    ctx->pc = 0x133958u;
    SET_GPR_U32(ctx, 31, 0x133960u);
    ctx->pc = 0x13395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133958u;
    // 0x13395c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CFE0u, 0x133958u, 0x133960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133960u;
label_133960:
    // 0x133960: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x133960u;
    {
        const bool branch_taken_0x133960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133960u;
        // 0x133964: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133960) {
            ctx->pc = 0x133B28u;
            goto label_133b28;
        }
    }
    ctx->pc = 0x133968u;
label_133968:
    // 0x133968: 0x2c620013  sltiu       $v0, $v1, 0x13
    ctx->pc = 0x133968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x13396c: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x13396Cu;
    {
        const bool branch_taken_0x13396c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13396Cu;
        // 0x133970: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13396c) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x133974u;
    // 0x133974: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x133974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x133978: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x133978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13397c: 0x2442ded0  addiu       $v0, $v0, -0x2130
    ctx->pc = 0x13397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958800));
    // 0x133980: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x133980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x133984: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x133984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x133988: 0x800008  jr          $a0
    ctx->pc = 0x133988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133990u: goto label_133990;
            case 0x1339A4u: goto label_1339a4;
            case 0x1339B8u: goto label_1339b8;
            case 0x1339CCu: goto label_1339cc;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339F4u: goto label_1339f4;
            case 0x133A08u: goto label_133a08;
            case 0x133A1Cu: goto label_133a1c;
            case 0x133A30u: goto label_133a30;
            case 0x133A44u: goto label_133a44;
            case 0x133A58u: goto label_133a58;
            case 0x133A6Cu: goto label_133a6c;
            case 0x133A80u: goto label_133a80;
            case 0x133A94u: goto label_133a94;
            case 0x133AA8u: goto label_133aa8;
            case 0x133ABCu: goto label_133abc;
            case 0x133AD0u: goto label_133ad0;
            case 0x133AE4u: goto label_133ae4;
            case 0x133AF8u: goto label_133af8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133988u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x133990u;
label_133990:
    // 0x133990: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x133990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x133994: 0xc04c032  jal         func_1300C8
    ctx->pc = 0x133994u;
    SET_GPR_U32(ctx, 31, 0x13399Cu);
    ctx->pc = 0x133998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133994u;
    // 0x133998: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1300C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1300C8u, 0x133994u, 0x13399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13399Cu;
label_13399c:
    // 0x13399c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x13399Cu;
    {
        const bool branch_taken_0x13399c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1339A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13399Cu;
        // 0x1339a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13399c) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x1339A4u;
label_1339a4:
    // 0x1339a4: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1339a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1339a8: 0xc04c042  jal         func_130108
    ctx->pc = 0x1339A8u;
    SET_GPR_U32(ctx, 31, 0x1339B0u);
    ctx->pc = 0x1339ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339A8u;
    // 0x1339ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130108u, 0x1339A8u, 0x1339B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339B0u;
label_1339b0:
    // 0x1339b0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1339B0u;
    {
        const bool branch_taken_0x1339b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1339B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339B0u;
        // 0x1339b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339b0) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x1339B8u;
label_1339b8:
    // 0x1339b8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1339b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1339bc: 0xc04c060  jal         func_130180
    ctx->pc = 0x1339BCu;
    SET_GPR_U32(ctx, 31, 0x1339C4u);
    ctx->pc = 0x1339C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339BCu;
    // 0x1339c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130180u, 0x1339BCu, 0x1339C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339C4u;
label_1339c4:
    // 0x1339c4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1339C4u;
    {
        const bool branch_taken_0x1339c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1339C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339C4u;
        // 0x1339c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339c4) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x1339CCu;
label_1339cc:
    // 0x1339cc: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1339ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1339d0: 0xc04c0aa  jal         func_1302A8
    ctx->pc = 0x1339D0u;
    SET_GPR_U32(ctx, 31, 0x1339D8u);
    ctx->pc = 0x1339D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339D0u;
    // 0x1339d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1302A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1302A8u, 0x1339D0u, 0x1339D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339D8u;
label_1339d8:
    // 0x1339d8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1339D8u;
    {
        const bool branch_taken_0x1339d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1339DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339D8u;
        // 0x1339dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339d8) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x1339E0u;
label_1339e0:
    // 0x1339e0: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1339e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1339e4: 0xc04c108  jal         func_130420
    ctx->pc = 0x1339E4u;
    SET_GPR_U32(ctx, 31, 0x1339ECu);
    ctx->pc = 0x1339E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339E4u;
    // 0x1339e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130420u, 0x1339E4u, 0x1339ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339ECu;
label_1339ec:
    // 0x1339ec: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1339ECu;
    {
        const bool branch_taken_0x1339ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1339F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339ECu;
        // 0x1339f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339ec) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x1339F4u;
label_1339f4:
    // 0x1339f4: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1339f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1339f8: 0xc04c12e  jal         func_1304B8
    ctx->pc = 0x1339F8u;
    SET_GPR_U32(ctx, 31, 0x133A00u);
    ctx->pc = 0x1339FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339F8u;
    // 0x1339fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1304B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1304B8u, 0x1339F8u, 0x133A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A00u;
label_133a00:
    // 0x133a00: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x133A00u;
    {
        const bool branch_taken_0x133a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A00u;
        // 0x133a04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a00) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x133A08u;
label_133a08:
    // 0x133a08: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x133a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x133a0c: 0xc04c204  jal         func_130810
    ctx->pc = 0x133A0Cu;
    SET_GPR_U32(ctx, 31, 0x133A14u);
    ctx->pc = 0x133A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A0Cu;
    // 0x133a10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130810u, 0x133A0Cu, 0x133A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A14u;
label_133a14:
    // 0x133a14: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x133A14u;
    {
        const bool branch_taken_0x133a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A14u;
        // 0x133a18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a14) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x133A1Cu;
label_133a1c:
    // 0x133a1c: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x133a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x133a20: 0xc04c156  jal         func_130558
    ctx->pc = 0x133A20u;
    SET_GPR_U32(ctx, 31, 0x133A28u);
    ctx->pc = 0x133A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A20u;
    // 0x133a24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130558u, 0x133A20u, 0x133A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A28u;
label_133a28:
    // 0x133a28: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x133A28u;
    {
        const bool branch_taken_0x133a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A28u;
        // 0x133a2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a28) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x133A30u;
label_133a30:
    // 0x133a30: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x133a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x133a34: 0xc04c18c  jal         func_130630
    ctx->pc = 0x133A34u;
    SET_GPR_U32(ctx, 31, 0x133A3Cu);
    ctx->pc = 0x133A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A34u;
    // 0x133a38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130630u, 0x133A34u, 0x133A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A3Cu;
label_133a3c:
    // 0x133a3c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x133A3Cu;
    {
        const bool branch_taken_0x133a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A3Cu;
        // 0x133a40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a3c) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x133A44u;
label_133a44:
    // 0x133a44: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x133a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x133a48: 0xc04c1c4  jal         func_130710
    ctx->pc = 0x133A48u;
    SET_GPR_U32(ctx, 31, 0x133A50u);
    ctx->pc = 0x133A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A48u;
    // 0x133a4c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130710u, 0x133A48u, 0x133A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A50u;
label_133a50:
    // 0x133a50: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x133A50u;
    {
        const bool branch_taken_0x133a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A50u;
        // 0x133a54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a50) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x133A58u;
label_133a58:
    // 0x133a58: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x133a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x133a5c: 0xc04c234  jal         func_1308D0
    ctx->pc = 0x133A5Cu;
    SET_GPR_U32(ctx, 31, 0x133A64u);
    ctx->pc = 0x133A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A5Cu;
    // 0x133a60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1308D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1308D0u, 0x133A5Cu, 0x133A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A64u;
label_133a64:
    // 0x133a64: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x133A64u;
    {
        const bool branch_taken_0x133a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A64u;
        // 0x133a68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a64) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x133A6Cu;
label_133a6c:
    // 0x133a6c: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x133a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x133a70: 0xc04c25a  jal         func_130968
    ctx->pc = 0x133A70u;
    SET_GPR_U32(ctx, 31, 0x133A78u);
    ctx->pc = 0x133A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A70u;
    // 0x133a74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130968u, 0x133A70u, 0x133A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A78u;
label_133a78:
    // 0x133a78: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x133A78u;
    {
        const bool branch_taken_0x133a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A78u;
        // 0x133a7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a78) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x133A80u;
label_133a80:
    // 0x133a80: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x133a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x133a84: 0xc04c28c  jal         func_130A30
    ctx->pc = 0x133A84u;
    SET_GPR_U32(ctx, 31, 0x133A8Cu);
    ctx->pc = 0x133A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A84u;
    // 0x133a88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130A30u, 0x133A84u, 0x133A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A8Cu;
label_133a8c:
    // 0x133a8c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x133A8Cu;
    {
        const bool branch_taken_0x133a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A8Cu;
        // 0x133a90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a8c) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x133A94u;
label_133a94:
    // 0x133a94: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x133a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x133a98: 0xc04c2ac  jal         func_130AB0
    ctx->pc = 0x133A98u;
    SET_GPR_U32(ctx, 31, 0x133AA0u);
    ctx->pc = 0x133A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A98u;
    // 0x133a9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130AB0u, 0x133A98u, 0x133AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AA0u;
label_133aa0:
    // 0x133aa0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x133AA0u;
    {
        const bool branch_taken_0x133aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AA0u;
        // 0x133aa4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133aa0) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x133AA8u;
label_133aa8:
    // 0x133aa8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x133aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x133aac: 0xc04c2d4  jal         func_130B50
    ctx->pc = 0x133AACu;
    SET_GPR_U32(ctx, 31, 0x133AB4u);
    ctx->pc = 0x133AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133AACu;
    // 0x133ab0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130B50u, 0x133AACu, 0x133AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AB4u;
label_133ab4:
    // 0x133ab4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x133AB4u;
    {
        const bool branch_taken_0x133ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AB4u;
        // 0x133ab8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ab4) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x133ABCu;
label_133abc:
    // 0x133abc: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x133abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x133ac0: 0xc04c2f2  jal         func_130BC8
    ctx->pc = 0x133AC0u;
    SET_GPR_U32(ctx, 31, 0x133AC8u);
    ctx->pc = 0x133AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133AC0u;
    // 0x133ac4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130BC8u, 0x133AC0u, 0x133AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AC8u;
label_133ac8:
    // 0x133ac8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x133AC8u;
    {
        const bool branch_taken_0x133ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AC8u;
        // 0x133acc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ac8) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x133AD0u;
label_133ad0:
    // 0x133ad0: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x133ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x133ad4: 0xc04c32c  jal         func_130CB0
    ctx->pc = 0x133AD4u;
    SET_GPR_U32(ctx, 31, 0x133ADCu);
    ctx->pc = 0x133AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133AD4u;
    // 0x133ad8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130CB0u, 0x133AD4u, 0x133ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133ADCu;
label_133adc:
    // 0x133adc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x133ADCu;
    {
        const bool branch_taken_0x133adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133ADCu;
        // 0x133ae0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133adc) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x133AE4u;
label_133ae4:
    // 0x133ae4: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x133ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x133ae8: 0xc04c350  jal         func_130D40
    ctx->pc = 0x133AE8u;
    SET_GPR_U32(ctx, 31, 0x133AF0u);
    ctx->pc = 0x133AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133AE8u;
    // 0x133aec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130D40u, 0x133AE8u, 0x133AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AF0u;
label_133af0:
    // 0x133af0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x133AF0u;
    {
        const bool branch_taken_0x133af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AF0u;
        // 0x133af4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133af0) {
            ctx->pc = 0x133B08u;
            goto label_133b08;
        }
    }
    ctx->pc = 0x133AF8u;
label_133af8:
    // 0x133af8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x133af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x133afc: 0xc04c38a  jal         func_130E28
    ctx->pc = 0x133AFCu;
    SET_GPR_U32(ctx, 31, 0x133B04u);
    ctx->pc = 0x133B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133AFCu;
    // 0x133b00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130E28u, 0x133AFCu, 0x133B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B04u;
label_133b04:
    // 0x133b04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x133b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133b08:
    // 0x133b08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x133b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133b0c: 0xc04ced0  jal         func_133B40
    ctx->pc = 0x133B0Cu;
    SET_GPR_U32(ctx, 31, 0x133B14u);
    ctx->pc = 0x133B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B0Cu;
    // 0x133b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133B40u, 0x133B0Cu, 0x133B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B14u;
label_133b14:
    // 0x133b14: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133B14u;
    {
        const bool branch_taken_0x133b14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x133B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B14u;
        // 0x133b18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133b14) {
            ctx->pc = 0x133B28u;
            goto label_133b28;
        }
    }
    ctx->pc = 0x133B1Cu;
    // 0x133b1c: 0xc04b3f8  jal         func_12CFE0
    ctx->pc = 0x133B1Cu;
    SET_GPR_U32(ctx, 31, 0x133B24u);
    ctx->pc = 0x133B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B1Cu;
    // 0x133b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CFE0u, 0x133B1Cu, 0x133B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B24u;
label_133b24:
    // 0x133b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_133b28:
    // 0x133b28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x133b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133b2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x133b2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133b30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x133b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x133b34: 0x3e00008  jr          $ra
    ctx->pc = 0x133B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B34u;
        // 0x133b38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133B3Cu;
    // 0x133b3c: 0x0  nop
    ctx->pc = 0x133b3cu;
    // NOP
    ctx->pc = 0x133b40u;
}
