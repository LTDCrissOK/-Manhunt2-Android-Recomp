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

// Function: sub_002D5150
// Address: 0x2d5150 - 0x2d53a0
void sub_002D5150_0x2d5150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5150_0x2d5150");
#endif

    switch (ctx->pc) {
        case 0x2d5188u: goto label_2d5188;
        case 0x2d51b0u: goto label_2d51b0;
        case 0x2d51bcu: goto label_2d51bc;
        case 0x2d51f0u: goto label_2d51f0;
        case 0x2d5214u: goto label_2d5214;
        case 0x2d526cu: goto label_2d526c;
        case 0x2d52f0u: goto label_2d52f0;
        case 0x2d531cu: goto label_2d531c;
        case 0x2d532cu: goto label_2d532c;
        case 0x2d5338u: goto label_2d5338;
        case 0x2d5344u: goto label_2d5344;
        case 0x2d5350u: goto label_2d5350;
        case 0x2d5358u: goto label_2d5358;
        case 0x2d5360u: goto label_2d5360;
        case 0x2d5370u: goto label_2d5370;
        case 0x2d537cu: goto label_2d537c;
        default: break;
    }

    ctx->pc = 0x2d5150u;

    // 0x2d5150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5154: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d5154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d5158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d5158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d515c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d515cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5160: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d5160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d5164: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d5164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d5168: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d5168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d516c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2d516cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2d5170: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2d5170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d5174: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D5174u;
    {
        const bool branch_taken_0x2d5174 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D5178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5174u;
        // 0x2d5178: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5174) {
            ctx->pc = 0x2D51E0u;
            goto label_2d51e0;
        }
    }
    ctx->pc = 0x2D517Cu;
    // 0x2d517c: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x2d517cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d5180: 0x941018  mult        $v0, $a0, $s4
    ctx->pc = 0x2d5180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d5184: 0x0  nop
    ctx->pc = 0x2d5184u;
    // NOP
label_2d5188:
    // 0x2d5188: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2d5188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2d518c: 0x24930001  addiu       $s3, $a0, 0x1
    ctx->pc = 0x2d518cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d5190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d5190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d5194: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d5194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d5198: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d5198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d519c: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D519Cu;
    {
        const bool branch_taken_0x2d519c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d519c) {
            ctx->pc = 0x2D51A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D519Cu;
            // 0x2d51a0: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D51CCu;
            goto label_2d51cc;
        }
    }
    ctx->pc = 0x2D51A4u;
    // 0x2d51a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d51a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d51a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d51a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d51ac: 0x0  nop
    ctx->pc = 0x2d51acu;
    // NOP
label_2d51b0:
    // 0x2d51b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d51b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d51b4: 0xc0b4f80  jal         func_2D3E00
    ctx->pc = 0x2D51B4u;
    SET_GPR_U32(ctx, 31, 0x2D51BCu);
    ctx->pc = 0x2D51B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D51B4u;
    // 0x2d51b8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3E00u, 0x2D51B4u, 0x2D51BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D51BCu;
label_2d51bc:
    // 0x2d51bc: 0x0  nop
    ctx->pc = 0x2d51bcu;
    // NOP
    // 0x2d51c0: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D51C0u;
    {
        const bool branch_taken_0x2d51c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D51C0u;
        // 0x2d51c4: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d51c0) {
            ctx->pc = 0x2D51B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d51b0;
        }
    }
    ctx->pc = 0x2D51C8u;
    // 0x2d51c8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2d51c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2d51cc:
    // 0x2d51cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d51ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d51d0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2d51d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d51d4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2D51D4u;
    {
        const bool branch_taken_0x2d51d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D51D4u;
        // 0x2d51d8: 0x941018  mult        $v0, $a0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d51d4) {
            ctx->pc = 0x2D5188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5188;
        }
    }
    ctx->pc = 0x2D51DCu;
    // 0x2d51dc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2d51dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2d51e0:
    // 0x2d51e0: 0x1840003e  blez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D51E0u;
    {
        const bool branch_taken_0x2d51e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D51E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D51E0u;
        // 0x2d51e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d51e0) {
            ctx->pc = 0x2D52DCu;
            goto label_2d52dc;
        }
    }
    ctx->pc = 0x2D51E8u;
    // 0x2d51e8: 0x24070118  addiu       $a3, $zero, 0x118
    ctx->pc = 0x2d51e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2d51ec: 0xc71818  mult        $v1, $a2, $a3
    ctx->pc = 0x2d51ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2d51f0:
    // 0x2d51f0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2d51f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2d51f4: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2d51f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2d51f8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2d51f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d51fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d51fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d5200: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x2d5200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2d5204: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2d5204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2d5208: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D5208u;
    {
        const bool branch_taken_0x2d5208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5208u;
        // 0x2d520c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5208) {
            ctx->pc = 0x2D5268u;
            goto label_2d5268;
        }
    }
    ctx->pc = 0x2D5210u;
    // 0x2d5210: 0x24a40100  addiu       $a0, $a1, 0x100
    ctx->pc = 0x2d5210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
label_2d5214:
    // 0x2d5214: 0x68a60007  ldl         $a2, 0x7($a1)
    ctx->pc = 0x2d5214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2d5218: 0x6ca60000  ldr         $a2, 0x0($a1)
    ctx->pc = 0x2d5218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2d521c: 0x68a8000f  ldl         $t0, 0xF($a1)
    ctx->pc = 0x2d521cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2d5220: 0x6ca80008  ldr         $t0, 0x8($a1)
    ctx->pc = 0x2d5220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2d5224: 0x68a90017  ldl         $t1, 0x17($a1)
    ctx->pc = 0x2d5224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2d5228: 0x6ca90010  ldr         $t1, 0x10($a1)
    ctx->pc = 0x2d5228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2d522c: 0x68aa001f  ldl         $t2, 0x1F($a1)
    ctx->pc = 0x2d522cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2d5230: 0x6caa0018  ldr         $t2, 0x18($a1)
    ctx->pc = 0x2d5230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2d5234: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x2d5234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d5238: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x2d5238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d523c: 0xb068000f  sdl         $t0, 0xF($v1)
    ctx->pc = 0x2d523cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d5240: 0xb4680008  sdr         $t0, 0x8($v1)
    ctx->pc = 0x2d5240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d5244: 0xb0690017  sdl         $t1, 0x17($v1)
    ctx->pc = 0x2d5244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d5248: 0xb4690010  sdr         $t1, 0x10($v1)
    ctx->pc = 0x2d5248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d524c: 0xb06a001f  sdl         $t2, 0x1F($v1)
    ctx->pc = 0x2d524cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d5250: 0xb46a0018  sdr         $t2, 0x18($v1)
    ctx->pc = 0x2d5250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d5254: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2d5254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2d5258: 0x14a4ffee  bne         $a1, $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2D5258u;
    {
        const bool branch_taken_0x2d5258 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5258u;
        // 0x2d525c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5258) {
            ctx->pc = 0x2D5214u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5214;
        }
    }
    ctx->pc = 0x2D5260u;
    // 0x2d5260: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D5260u;
    {
        const bool branch_taken_0x2d5260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5260) {
            ctx->pc = 0x2D5298u;
            goto label_2d5298;
        }
    }
    ctx->pc = 0x2D5268u;
label_2d5268:
    // 0x2d5268: 0x24a40100  addiu       $a0, $a1, 0x100
    ctx->pc = 0x2d5268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
label_2d526c:
    // 0x2d526c: 0xdca60000  ld          $a2, 0x0($a1)
    ctx->pc = 0x2d526cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d5270: 0xdca80008  ld          $t0, 0x8($a1)
    ctx->pc = 0x2d5270u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d5274: 0xdca90010  ld          $t1, 0x10($a1)
    ctx->pc = 0x2d5274u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d5278: 0xdcaa0018  ld          $t2, 0x18($a1)
    ctx->pc = 0x2d5278u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2d527c: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x2d527cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x2d5280: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x2d5280u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x2d5284: 0xfc690010  sd          $t1, 0x10($v1)
    ctx->pc = 0x2d5284u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 9));
    // 0x2d5288: 0xfc6a0018  sd          $t2, 0x18($v1)
    ctx->pc = 0x2d5288u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 10));
    // 0x2d528c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2d528cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2d5290: 0x14a4fff6  bne         $a1, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D5290u;
    {
        const bool branch_taken_0x2d5290 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D5294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5290u;
        // 0x2d5294: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5290) {
            ctx->pc = 0x2D526Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d526c;
        }
    }
    ctx->pc = 0x2D5298u;
label_2d5298:
    // 0x2d5298: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x2d5298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2d529c: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x2d529cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2d52a0: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x2d52a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2d52a4: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x2d52a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2d52a8: 0x68a80017  ldl         $t0, 0x17($a1)
    ctx->pc = 0x2d52a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2d52ac: 0x6ca80010  ldr         $t0, 0x10($a1)
    ctx->pc = 0x2d52acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2d52b0: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x2d52b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d52b4: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x2d52b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d52b8: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x2d52b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d52bc: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x2d52bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d52c0: 0xb0680017  sdl         $t0, 0x17($v1)
    ctx->pc = 0x2d52c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d52c4: 0xb4680010  sdr         $t0, 0x10($v1)
    ctx->pc = 0x2d52c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d52c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d52c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d52cc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2d52ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d52d0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2d52d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d52d4: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x2D52D4u;
    {
        const bool branch_taken_0x2d52d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D52D4u;
        // 0x2d52d8: 0xc71818  mult        $v1, $a2, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d52d4) {
            ctx->pc = 0x2D51F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d51f0;
        }
    }
    ctx->pc = 0x2D52DCu;
label_2d52dc:
    // 0x2d52dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d52dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d52e0: 0x8e51000c  lw          $s1, 0xC($s2)
    ctx->pc = 0x2d52e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2d52e4: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D52E4u;
    {
        const bool branch_taken_0x2d52e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D52E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D52E4u;
        // 0x2d52e8: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d52e4) {
            ctx->pc = 0x2D5308u;
            goto label_2d5308;
        }
    }
    ctx->pc = 0x2D52ECu;
    // 0x2d52ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d52ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2d52f0:
    // 0x2d52f0: 0x0  nop
    ctx->pc = 0x2d52f0u;
    // NOP
    // 0x2d52f4: 0x0  nop
    ctx->pc = 0x2d52f4u;
    // NOP
    // 0x2d52f8: 0x0  nop
    ctx->pc = 0x2d52f8u;
    // NOP
    // 0x2d52fc: 0x0  nop
    ctx->pc = 0x2d52fcu;
    // NOP
    // 0x2d5300: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D5300u;
    {
        const bool branch_taken_0x2d5300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5300) {
            ctx->pc = 0x2D5304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5300u;
            // 0x2d5304: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D52F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d52f0;
        }
    }
    ctx->pc = 0x2D5308u;
label_2d5308:
    // 0x2d5308: 0x1223001d  beq         $s1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D5308u;
    {
        const bool branch_taken_0x2d5308 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5308u;
        // 0x2d530c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5308) {
            ctx->pc = 0x2D5380u;
            goto label_2d5380;
        }
    }
    ctx->pc = 0x2D5310u;
    // 0x2d5310: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d5310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5314: 0xc0b580e  jal         func_2D6038
    ctx->pc = 0x2D5314u;
    SET_GPR_U32(ctx, 31, 0x2D531Cu);
    ctx->pc = 0x2D5318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5314u;
    // 0x2d5318: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6038u, 0x2D5314u, 0x2D531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D531Cu;
label_2d531c:
    // 0x2d531c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2d531cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2d5320: 0x8e05bd48  lw          $a1, -0x42B8($s0)
    ctx->pc = 0x2d5320u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x2d5324: 0xc0c884e  jal         func_322138
    ctx->pc = 0x2D5324u;
    SET_GPR_U32(ctx, 31, 0x2D532Cu);
    ctx->pc = 0x2D5328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5324u;
    // 0x2d5328: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322138u, 0x2D5324u, 0x2D532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D532Cu;
label_2d532c:
    // 0x2d532c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d532cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5330: 0xc0b57ea  jal         func_2D5FA8
    ctx->pc = 0x2D5330u;
    SET_GPR_U32(ctx, 31, 0x2D5338u);
    ctx->pc = 0x2D5334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5330u;
    // 0x2d5334: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5FA8u, 0x2D5330u, 0x2D5338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5338u;
label_2d5338:
    // 0x2d5338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d5338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d533c: 0xc0b5794  jal         func_2D5E50
    ctx->pc = 0x2D533Cu;
    SET_GPR_U32(ctx, 31, 0x2D5344u);
    ctx->pc = 0x2D5340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D533Cu;
    // 0x2d5340: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E50u, 0x2D533Cu, 0x2D5344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5344u;
label_2d5344:
    // 0x2d5344: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5344u;
    {
        const bool branch_taken_0x2d5344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5344u;
        // 0x2d5348: 0xae510024  sw          $s1, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5344) {
            ctx->pc = 0x2D5358u;
            goto label_2d5358;
        }
    }
    ctx->pc = 0x2D534Cu;
    // 0x2d534c: 0x0  nop
    ctx->pc = 0x2d534cu;
    // NOP
label_2d5350:
    // 0x2d5350: 0xc0b54e8  jal         func_2D53A0
    ctx->pc = 0x2D5350u;
    SET_GPR_U32(ctx, 31, 0x2D5358u);
    ctx->pc = 0x2D5354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5350u;
    // 0x2d5354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D53A0u, 0x2D5350u, 0x2D5358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5358u;
label_2d5358:
    // 0x2d5358: 0xc0b5888  jal         func_2D6220
    ctx->pc = 0x2D5358u;
    SET_GPR_U32(ctx, 31, 0x2D5360u);
    ctx->pc = 0x2D535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5358u;
    // 0x2d535c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6220u, 0x2D5358u, 0x2D5360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5360u;
label_2d5360:
    // 0x2d5360: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D5360u;
    {
        const bool branch_taken_0x2d5360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5360u;
        // 0x2d5364: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5360) {
            ctx->pc = 0x2D5350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5350;
        }
    }
    ctx->pc = 0x2D5368u;
    // 0x2d5368: 0xc0b580e  jal         func_2D6038
    ctx->pc = 0x2D5368u;
    SET_GPR_U32(ctx, 31, 0x2D5370u);
    ctx->pc = 0x2D536Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5368u;
    // 0x2d536c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6038u, 0x2D5368u, 0x2D5370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5370u;
label_2d5370:
    // 0x2d5370: 0x8e05bd48  lw          $a1, -0x42B8($s0)
    ctx->pc = 0x2d5370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950216)));
    // 0x2d5374: 0xc0c8848  jal         func_322120
    ctx->pc = 0x2D5374u;
    SET_GPR_U32(ctx, 31, 0x2D537Cu);
    ctx->pc = 0x2D5378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5374u;
    // 0x2d5378: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322120u, 0x2D5374u, 0x2D537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D537Cu;
label_2d537c:
    // 0x2d537c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d537cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d5380:
    // 0x2d5380: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d5380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5384: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d5384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5388: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d5388u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d538c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d538cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5390: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2d5390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5394: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5394u;
        // 0x2d5398: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D539Cu;
    // 0x2d539c: 0x0  nop
    ctx->pc = 0x2d539cu;
    // NOP
    ctx->pc = 0x2d53a0u;
}
