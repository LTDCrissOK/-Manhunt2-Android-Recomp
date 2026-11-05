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

// Function: sub_001F1608
// Address: 0x1f1608 - 0x1f1778
void sub_001F1608_0x1f1608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1608_0x1f1608");
#endif

    switch (ctx->pc) {
        case 0x1f1668u: goto label_1f1668;
        case 0x1f16e8u: goto label_1f16e8;
        case 0x1f1740u: goto label_1f1740;
        default: break;
    }

    ctx->pc = 0x1f1608u;

    // 0x1f1608: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f1608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f160c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f160cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f1610: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f1610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f1614: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f1614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f1618: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x1f1618u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1f161c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f161cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f1620: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f1620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1624: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f1624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1f1628: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x1f1628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f162c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1f162cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1f1630: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x1f1630u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x1f1634: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1f1634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1f1638: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f1638u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f163c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1f163cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1f1640: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x1f1640u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1644: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1f1644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1f1648: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1f1648u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f164c: 0x2448ed50  addiu       $t0, $v0, -0x12B0
    ctx->pc = 0x1f164cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962512));
    // 0x1f1650: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x1f1650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f1654: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x1f1654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f1658: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1f1658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f165c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1f165cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f1660: 0x92a29280  lbu         $v0, -0x6D80($s5)
    ctx->pc = 0x1f1660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F9280u));
    // 0x1f1664: 0x0  nop
    ctx->pc = 0x1f1664u;
    // NOP
label_1f1668:
    // 0x1f1668: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f166c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f166cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f1670: 0x2c63000a  sltiu       $v1, $v1, 0xA
    ctx->pc = 0x1f1670u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f1674: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1674u;
    {
        const bool branch_taken_0x1f1674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1674u;
        // 0x1f1678: 0xa2a29280  sb          $v0, -0x6D80($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 4294939264), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1674) {
            ctx->pc = 0x1F1680u;
            goto label_1f1680;
        }
    }
    ctx->pc = 0x1F167Cu;
    // 0x1f167c: 0xa2609280  sb          $zero, -0x6D80($s3)
    ctx->pc = 0x1f167cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4294939264), (uint8_t)GPR_U32(ctx, 0));
label_1f1680:
    // 0x1f1680: 0x12160012  beq         $s0, $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F1680u;
    {
        const bool branch_taken_0x1f1680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x1F1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1680u;
        // 0x1f1684: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1680) {
            ctx->pc = 0x1F16CCu;
            goto label_1f16cc;
        }
    }
    ctx->pc = 0x1F1688u;
    // 0x1f1688: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1688u;
    {
        const bool branch_taken_0x1f1688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1688) {
            ctx->pc = 0x1F168Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1688u;
            // 0x1f168c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F16A0u;
            goto label_1f16a0;
        }
    }
    ctx->pc = 0x1F1690u;
    // 0x1f1690: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1690u;
    {
        const bool branch_taken_0x1f1690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1690u;
        // 0x1f1694: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1690) {
            ctx->pc = 0x1F16B8u;
            goto label_1f16b8;
        }
    }
    ctx->pc = 0x1F1698u;
    // 0x1f1698: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1F1698u;
    {
        const bool branch_taken_0x1f1698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1698u;
        // 0x1f169c: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1698) {
            ctx->pc = 0x1F1754u;
            goto label_1f1754;
        }
    }
    ctx->pc = 0x1F16A0u;
label_1f16a0:
    // 0x1f16a0: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F16A0u;
    {
        const bool branch_taken_0x1f16a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F16A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16A0u;
        // 0x1f16a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16a0) {
            ctx->pc = 0x1F16F0u;
            goto label_1f16f0;
        }
    }
    ctx->pc = 0x1F16A8u;
    // 0x1f16a8: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F16A8u;
    {
        const bool branch_taken_0x1f16a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f16a8) {
            ctx->pc = 0x1F170Cu;
            goto label_1f170c;
        }
    }
    ctx->pc = 0x1F16B0u;
    // 0x1f16b0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1F16B0u;
    {
        const bool branch_taken_0x1f16b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16B0u;
        // 0x1f16b4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16b0) {
            ctx->pc = 0x1F1750u;
            goto label_1f1750;
        }
    }
    ctx->pc = 0x1F16B8u;
label_1f16b8:
    // 0x1f16b8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x1f16b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x1f16bc: 0x92659280  lbu         $a1, -0x6D80($s3)
    ctx->pc = 0x1f16bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294939264)));
    // 0x1f16c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f16c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f16c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F16C4u;
    {
        const bool branch_taken_0x1f16c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F16C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16C4u;
        // 0x1f16c8: 0x24e7ed58  addiu       $a3, $a3, -0x12A8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16c4) {
            ctx->pc = 0x1F16DCu;
            goto label_1f16dc;
        }
    }
    ctx->pc = 0x1F16CCu;
label_1f16cc:
    // 0x1f16cc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x1f16ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x1f16d0: 0x92659280  lbu         $a1, -0x6D80($s3)
    ctx->pc = 0x1f16d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294939264)));
    // 0x1f16d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f16d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f16d8: 0x24e7ed68  addiu       $a3, $a3, -0x1298
    ctx->pc = 0x1f16d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962536));
label_1f16dc:
    // 0x1f16dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f16dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f16e0: 0xc07c638  jal         func_1F18E0
    ctx->pc = 0x1F16E0u;
    SET_GPR_U32(ctx, 31, 0x1F16E8u);
    ctx->pc = 0x1F16E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F16E0u;
    // 0x1f16e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F18E0u, 0x1F16E0u, 0x1F16E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16E8u;
label_1f16e8:
    // 0x1f16e8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1F16E8u;
    {
        const bool branch_taken_0x1f16e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16E8u;
        // 0x1f16ec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16e8) {
            ctx->pc = 0x1F1750u;
            goto label_1f1750;
        }
    }
    ctx->pc = 0x1F16F0u;
label_1f16f0:
    // 0x1f16f0: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F16F0u;
    {
        const bool branch_taken_0x1f16f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F16F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16F0u;
        // 0x1f16f4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16f0) {
            ctx->pc = 0x1F1704u;
            goto label_1f1704;
        }
    }
    ctx->pc = 0x1F16F8u;
    // 0x1f16f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f16fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F16FCu;
    {
        const bool branch_taken_0x1f16fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16FCu;
        // 0x1f1700: 0x2447ed70  addiu       $a3, $v0, -0x1290 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16fc) {
            ctx->pc = 0x1F1724u;
            goto label_1f1724;
        }
    }
    ctx->pc = 0x1F1704u;
label_1f1704:
    // 0x1f1704: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1704u;
    {
        const bool branch_taken_0x1f1704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1704u;
        // 0x1f1708: 0x2447ed80  addiu       $a3, $v0, -0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1704) {
            ctx->pc = 0x1F1724u;
            goto label_1f1724;
        }
    }
    ctx->pc = 0x1F170Cu;
label_1f170c:
    // 0x1f170c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F170Cu;
    {
        const bool branch_taken_0x1f170c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F170Cu;
        // 0x1f1710: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f170c) {
            ctx->pc = 0x1F1720u;
            goto label_1f1720;
        }
    }
    ctx->pc = 0x1F1714u;
    // 0x1f1714: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f1714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f1718: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1718u;
    {
        const bool branch_taken_0x1f1718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1718u;
        // 0x1f171c: 0x2447ed90  addiu       $a3, $v0, -0x1270 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1718) {
            ctx->pc = 0x1F1724u;
            goto label_1f1724;
        }
    }
    ctx->pc = 0x1F1720u;
label_1f1720:
    // 0x1f1720: 0x2447eda0  addiu       $a3, $v0, -0x1260
    ctx->pc = 0x1f1720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962592));
label_1f1724:
    // 0x1f1724: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x1f1724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f1728: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f1728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f172c: 0x92659280  lbu         $a1, -0x6D80($s3)
    ctx->pc = 0x1f172cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294939264)));
    // 0x1f1730: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f1730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1734: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f1734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f1738: 0xc07c638  jal         func_1F18E0
    ctx->pc = 0x1F1738u;
    SET_GPR_U32(ctx, 31, 0x1F1740u);
    ctx->pc = 0x1F173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1738u;
    // 0x1f173c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F18E0u, 0x1F1738u, 0x1F1740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1740u;
label_1f1740:
    // 0x1f1740: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1f1740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f1744: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1F1744u;
    {
        const bool branch_taken_0x1f1744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1744u;
        // 0x1f1748: 0x92a29280  lbu         $v0, -0x6D80($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294939264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1744) {
            ctx->pc = 0x1F1668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1668;
        }
    }
    ctx->pc = 0x1F174Cu;
    // 0x1f174c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f174cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1750:
    // 0x1f1750: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f1750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f1754:
    // 0x1f1754: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f1754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1758: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f1758u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f175c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1f175cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1760: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1f1760u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f1764: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1f1764u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f1768: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1f1768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f176c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F176Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F176Cu;
        // 0x1f1770: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F176Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1774u;
    // 0x1f1774: 0x0  nop
    ctx->pc = 0x1f1774u;
    // NOP
    ctx->pc = 0x1f1778u;
}
