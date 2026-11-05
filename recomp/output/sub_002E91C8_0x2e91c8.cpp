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

// Function: sub_002E91C8
// Address: 0x2e91c8 - 0x2e9358
void sub_002E91C8_0x2e91c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E91C8_0x2e91c8");
#endif

    switch (ctx->pc) {
        case 0x2e9200u: goto label_2e9200;
        case 0x2e9238u: goto label_2e9238;
        case 0x2e9260u: goto label_2e9260;
        case 0x2e929cu: goto label_2e929c;
        case 0x2e92b4u: goto label_2e92b4;
        case 0x2e92ccu: goto label_2e92cc;
        case 0x2e92f8u: goto label_2e92f8;
        case 0x2e9300u: goto label_2e9300;
        case 0x2e9310u: goto label_2e9310;
        case 0x2e9318u: goto label_2e9318;
        default: break;
    }

    ctx->pc = 0x2e91c8u;

    // 0x2e91c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e91c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e91cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e91ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e91d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e91d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e91d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e91d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e91d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e91d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e91dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e91dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e91e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e91e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2e91e4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2e91e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2e91e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e91e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e91ec: 0x8e4401a4  lw          $a0, 0x1A4($s2)
    ctx->pc = 0x2e91ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 420)));
    // 0x2e91f0: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2E91F0u;
    {
        const bool branch_taken_0x2e91f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e91f0) {
            ctx->pc = 0x2E91F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E91F0u;
            // 0x2e91f4: 0x8e430224  lw          $v1, 0x224($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9220u;
            goto label_2e9220;
        }
    }
    ctx->pc = 0x2E91F8u;
    // 0x2e91f8: 0xc0b4b34  jal         func_2D2CD0
    ctx->pc = 0x2E91F8u;
    SET_GPR_U32(ctx, 31, 0x2E9200u);
    ctx->pc = 0x2D2CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2CD0u, 0x2E91F8u, 0x2E9200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9200u;
label_2e9200:
    // 0x2e9200: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e9200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9204: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e9204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9208: 0x0  nop
    ctx->pc = 0x2e9208u;
    // NOP
    // 0x2e920c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e920cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9210: 0x0  nop
    ctx->pc = 0x2e9210u;
    // NOP
    // 0x2e9214: 0x45010047  bc1t        . + 4 + (0x47 << 2)
    ctx->pc = 0x2E9214u;
    {
        const bool branch_taken_0x2e9214 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E9218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9214u;
        // 0x2e9218: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9214) {
            ctx->pc = 0x2E9334u;
            goto label_2e9334;
        }
    }
    ctx->pc = 0x2E921Cu;
    // 0x2e921c: 0x8e430224  lw          $v1, 0x224($s2)
    ctx->pc = 0x2e921cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_2e9220:
    // 0x2e9220: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e9220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e9224: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2E9224u;
    {
        const bool branch_taken_0x2e9224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9224u;
        // 0x2e9228: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9224) {
            ctx->pc = 0x2E9330u;
            goto label_2e9330;
        }
    }
    ctx->pc = 0x2E922Cu;
    // 0x2e922c: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x2e922cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e9230: 0x24140067  addiu       $s4, $zero, 0x67
    ctx->pc = 0x2e9230u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x2e9234: 0x0  nop
    ctx->pc = 0x2e9234u;
    // NOP
label_2e9238:
    // 0x2e9238: 0x12750037  beq         $s3, $s5, . + 4 + (0x37 << 2)
    ctx->pc = 0x2E9238u;
    {
        const bool branch_taken_0x2e9238 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        ctx->pc = 0x2E923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9238u;
        // 0x2e923c: 0x131880  sll         $v1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9238) {
            ctx->pc = 0x2E9318u;
            goto label_2e9318;
        }
    }
    ctx->pc = 0x2E9240u;
    // 0x2e9240: 0x8e420224  lw          $v0, 0x224($s2)
    ctx->pc = 0x2e9240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x2e9244: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2e9244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e9248: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e9248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e924c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2e924cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e9250: 0x52200032  beql        $s1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x2E9250u;
    {
        const bool branch_taken_0x2e9250 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9250) {
            ctx->pc = 0x2E9254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9250u;
            // 0x2e9254: 0x8e430224  lw          $v1, 0x224($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E931Cu;
            goto label_2e931c;
        }
    }
    ctx->pc = 0x2E9258u;
    // 0x2e9258: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2E9258u;
    SET_GPR_U32(ctx, 31, 0x2E9260u);
    ctx->pc = 0x2E925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9258u;
    // 0x2e925c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2E9258u, 0x2E9260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9260u;
label_2e9260:
    // 0x2e9260: 0x5222002e  beql        $s1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2E9260u;
    {
        const bool branch_taken_0x2e9260 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e9260) {
            ctx->pc = 0x2E9264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9260u;
            // 0x2e9264: 0x8e430224  lw          $v1, 0x224($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E931Cu;
            goto label_2e931c;
        }
    }
    ctx->pc = 0x2E9268u;
    // 0x2e9268: 0x6a420127  ldl         $v0, 0x127($s2)
    ctx->pc = 0x2e9268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2e926c: 0x6e420120  ldr         $v0, 0x120($s2)
    ctx->pc = 0x2e926cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2e9270: 0x6a43012f  ldl         $v1, 0x12F($s2)
    ctx->pc = 0x2e9270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e9274: 0x6e430128  ldr         $v1, 0x128($s2)
    ctx->pc = 0x2e9274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e9278: 0xb2220127  sdl         $v0, 0x127($s1)
    ctx->pc = 0x2e9278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e927c: 0xb6220120  sdr         $v0, 0x120($s1)
    ctx->pc = 0x2e927cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e9280: 0xb223012f  sdl         $v1, 0x12F($s1)
    ctx->pc = 0x2e9280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e9284: 0xb6230128  sdr         $v1, 0x128($s1)
    ctx->pc = 0x2e9284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e9288: 0x8e300238  lw          $s0, 0x238($s1)
    ctx->pc = 0x2e9288u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x2e928c: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2E928Cu;
    {
        const bool branch_taken_0x2e928c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e928c) {
            ctx->pc = 0x2E9290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E928Cu;
            // 0x2e9290: 0x8e220254  lw          $v0, 0x254($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E92BCu;
            goto label_2e92bc;
        }
    }
    ctx->pc = 0x2E9294u;
    // 0x2e9294: 0xc0c313a  jal         func_30C4E8
    ctx->pc = 0x2E9294u;
    SET_GPR_U32(ctx, 31, 0x2E929Cu);
    ctx->pc = 0x2E9298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9294u;
    // 0x2e9298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C4E8u, 0x2E9294u, 0x2E929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E929Cu;
label_2e929c:
    // 0x2e929c: 0x92450144  lbu         $a1, 0x144($s2)
    ctx->pc = 0x2e929cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x2e92a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e92a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e92a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e92a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e92a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e92a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e92ac: 0xc0c2ecc  jal         func_30BB30
    ctx->pc = 0x2E92ACu;
    SET_GPR_U32(ctx, 31, 0x2E92B4u);
    ctx->pc = 0x2E92B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E92ACu;
    // 0x2e92b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BB30u, 0x2E92ACu, 0x2E92B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E92B4u;
label_2e92b4:
    // 0x2e92b4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2E92B4u;
    {
        const bool branch_taken_0x2e92b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92B4u;
        // 0x2e92b8: 0x8e430224  lw          $v1, 0x224($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e92b4) {
            ctx->pc = 0x2E931Cu;
            goto label_2e931c;
        }
    }
    ctx->pc = 0x2E92BCu;
label_2e92bc:
    // 0x2e92bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E92BCu;
    {
        const bool branch_taken_0x2e92bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E92C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92BCu;
        // 0x2e92c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e92bc) {
            ctx->pc = 0x2E92D4u;
            goto label_2e92d4;
        }
    }
    ctx->pc = 0x2E92C4u;
    // 0x2e92c4: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x2E92C4u;
    SET_GPR_U32(ctx, 31, 0x2E92CCu);
    ctx->pc = 0x2E92C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E92C4u;
    // 0x2e92c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2E92C4u, 0x2E92CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E92CCu;
label_2e92cc:
    // 0x2e92cc: 0x14540002  bne         $v0, $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E92CCu;
    {
        const bool branch_taken_0x2e92cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2e92cc) {
            ctx->pc = 0x2E92D8u;
            goto label_2e92d8;
        }
    }
    ctx->pc = 0x2E92D4u;
label_2e92d4:
    // 0x2e92d4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2e92d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e92d8:
    // 0x2e92d8: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E92D8u;
    {
        const bool branch_taken_0x2e92d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e92d8) {
            ctx->pc = 0x2E92DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E92D8u;
            // 0x2e92dc: 0x8e430224  lw          $v1, 0x224($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E931Cu;
            goto label_2e931c;
        }
    }
    ctx->pc = 0x2E92E0u;
    // 0x2e92e0: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2e92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2e92e4: 0x8c430220  lw          $v1, 0x220($v0)
    ctx->pc = 0x2e92e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x2e92e8: 0x14740003  bne         $v1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E92E8u;
    {
        const bool branch_taken_0x2e92e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x2e92e8) {
            ctx->pc = 0x2E92F8u;
            goto label_2e92f8;
        }
    }
    ctx->pc = 0x2E92F0u;
    // 0x2e92f0: 0xc0982c8  jal         func_260B20
    ctx->pc = 0x2E92F0u;
    SET_GPR_U32(ctx, 31, 0x2E92F8u);
    ctx->pc = 0x2E92F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E92F0u;
    // 0x2e92f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B20u, 0x2E92F0u, 0x2E92F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E92F8u;
label_2e92f8:
    // 0x2e92f8: 0xc0c313a  jal         func_30C4E8
    ctx->pc = 0x2E92F8u;
    SET_GPR_U32(ctx, 31, 0x2E9300u);
    ctx->pc = 0x2E92FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E92F8u;
    // 0x2e92fc: 0x8e240104  lw          $a0, 0x104($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C4E8u, 0x2E92F8u, 0x2E9300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9300u;
label_2e9300:
    // 0x2e9300: 0x92420144  lbu         $v0, 0x144($s2)
    ctx->pc = 0x2e9300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x2e9304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9308: 0xc0c5ce6  jal         func_317398
    ctx->pc = 0x2E9308u;
    SET_GPR_U32(ctx, 31, 0x2E9310u);
    ctx->pc = 0x2E930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9308u;
    // 0x2e930c: 0xae220144  sw          $v0, 0x144($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317398u, 0x2E9308u, 0x2E9310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9310u;
label_2e9310:
    // 0x2e9310: 0xc085122  jal         func_214488
    ctx->pc = 0x2E9310u;
    SET_GPR_U32(ctx, 31, 0x2E9318u);
    ctx->pc = 0x2E9314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9310u;
    // 0x2e9314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214488u, 0x2E9310u, 0x2E9318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9318u;
label_2e9318:
    // 0x2e9318: 0x8e430224  lw          $v1, 0x224($s2)
    ctx->pc = 0x2e9318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_2e931c:
    // 0x2e931c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e931cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e9320: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e9320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e9324: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2e9324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e9328: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x2E9328u;
    {
        const bool branch_taken_0x2e9328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9328) {
            ctx->pc = 0x2E9238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9238;
        }
    }
    ctx->pc = 0x2E9330u;
label_2e9330:
    // 0x2e9330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e9330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e9334:
    // 0x2e9334: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e9334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e9338: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e9338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e933c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e933cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e9340: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e9340u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9344: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2e9344u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e9348: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e9348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e934c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E934Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E934Cu;
        // 0x2e9350: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E934Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9354u;
    // 0x2e9354: 0x0  nop
    ctx->pc = 0x2e9354u;
    // NOP
    ctx->pc = 0x2e9358u;
}
