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

// Function: sub_00225F30
// Address: 0x225f30 - 0x226048
void sub_00225F30_0x225f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225F30_0x225f30");
#endif

    switch (ctx->pc) {
        case 0x225f88u: goto label_225f88;
        case 0x225f9cu: goto label_225f9c;
        case 0x225fc0u: goto label_225fc0;
        case 0x225ff0u: goto label_225ff0;
        case 0x22602cu: goto label_22602c;
        default: break;
    }

    ctx->pc = 0x225f30u;

    // 0x225f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225f34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225f38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x225f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x225f3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x225f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225f44: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x225f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x225f48: 0x8e22019c  lw          $v0, 0x19C($s1)
    ctx->pc = 0x225f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
    // 0x225f4c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x225F4Cu;
    {
        const bool branch_taken_0x225f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F4Cu;
        // 0x225f50: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f4c) {
            ctx->pc = 0x225F74u;
            goto label_225f74;
        }
    }
    ctx->pc = 0x225F54u;
    // 0x225f54: 0x8c450228  lw          $a1, 0x228($v0)
    ctx->pc = 0x225f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 552)));
    // 0x225f58: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x225f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x225f5c: 0x8ca40220  lw          $a0, 0x220($a1)
    ctx->pc = 0x225f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 544)));
    // 0x225f60: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x225f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x225f64: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x225f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x225f68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x225f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x225f6c: 0x30720003  andi        $s2, $v1, 0x3
    ctx->pc = 0x225f6cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x225f70: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x225f70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_225f74:
    // 0x225f74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x225f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225f78: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x225f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x225f7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225f7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f80: 0xc0dba1c  jal         func_36E870
    ctx->pc = 0x225F80u;
    SET_GPR_U32(ctx, 31, 0x225F88u);
    ctx->pc = 0x225F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F80u;
    // 0x225f84: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E870u, 0x225F80u, 0x225F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F88u;
label_225f88:
    // 0x225f88: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x225f88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x225f8c: 0xc6200230  lwc1        $f0, 0x230($s1)
    ctx->pc = 0x225f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225f90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f94: 0xc084aba  jal         func_212AE8
    ctx->pc = 0x225F94u;
    SET_GPR_U32(ctx, 31, 0x225F9Cu);
    ctx->pc = 0x225F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F94u;
    // 0x225f98: 0xe600bd04  swc1        $f0, -0x42FC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294950148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212AE8u, 0x225F94u, 0x225F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F9Cu;
label_225f9c:
    // 0x225f9c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x225f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x225fa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x225fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x225fa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x225fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225fa8: 0x8c45bd78  lw          $a1, -0x4288($v0)
    ctx->pc = 0x225fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD78u));
    // 0x225fac: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x225facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x225fb0: 0xe600bd04  swc1        $f0, -0x42FC($s0)
    ctx->pc = 0x225fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294950148), bits); }
    // 0x225fb4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x225fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x225fb8: 0xc0dba1c  jal         func_36E870
    ctx->pc = 0x225FB8u;
    SET_GPR_U32(ctx, 31, 0x225FC0u);
    ctx->pc = 0x225FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FB8u;
    // 0x225fbc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E870u, 0x225FB8u, 0x225FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FC0u;
label_225fc0:
    // 0x225fc0: 0x8e22019c  lw          $v0, 0x19C($s1)
    ctx->pc = 0x225fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
    // 0x225fc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x225FC4u;
    {
        const bool branch_taken_0x225fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225fc4) {
            ctx->pc = 0x225FE8u;
            goto label_225fe8;
        }
    }
    ctx->pc = 0x225FCCu;
    // 0x225fcc: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x225FCCu;
    {
        const bool branch_taken_0x225fcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x225fcc) {
            ctx->pc = 0x225FE8u;
            goto label_225fe8;
        }
    }
    ctx->pc = 0x225FD4u;
    // 0x225fd4: 0x8c420228  lw          $v0, 0x228($v0)
    ctx->pc = 0x225fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 552)));
    // 0x225fd8: 0x8c440220  lw          $a0, 0x220($v0)
    ctx->pc = 0x225fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x225fdc: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x225fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x225fe0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x225fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x225fe4: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x225fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
label_225fe8:
    // 0x225fe8: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x225FE8u;
    SET_GPR_U32(ctx, 31, 0x225FF0u);
    ctx->pc = 0x225FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FE8u;
    // 0x225fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x225FE8u, 0x225FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FF0u;
label_225ff0:
    // 0x225ff0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x225ff0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ff4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x225FF4u;
    {
        const bool branch_taken_0x225ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225FF4u;
        // 0x225ff8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ff4) {
            ctx->pc = 0x226030u;
            goto label_226030;
        }
    }
    ctx->pc = 0x225FFCu;
    // 0x225ffc: 0x92220144  lbu         $v0, 0x144($s1)
    ctx->pc = 0x225ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x226000: 0xac620144  sw          $v0, 0x144($v1)
    ctx->pc = 0x226000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 2));
    // 0x226004: 0x6a220127  ldl         $v0, 0x127($s1)
    ctx->pc = 0x226004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x226008: 0x6e220120  ldr         $v0, 0x120($s1)
    ctx->pc = 0x226008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22600c: 0x6a25012f  ldl         $a1, 0x12F($s1)
    ctx->pc = 0x22600cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x226010: 0x6e250128  ldr         $a1, 0x128($s1)
    ctx->pc = 0x226010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x226014: 0xb0620127  sdl         $v0, 0x127($v1)
    ctx->pc = 0x226014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226018: 0xb4620120  sdr         $v0, 0x120($v1)
    ctx->pc = 0x226018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22601c: 0xb065012f  sdl         $a1, 0x12F($v1)
    ctx->pc = 0x22601cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226020: 0xb4650128  sdr         $a1, 0x128($v1)
    ctx->pc = 0x226020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226024: 0xc0c5ce6  jal         func_317398
    ctx->pc = 0x226024u;
    SET_GPR_U32(ctx, 31, 0x22602Cu);
    ctx->pc = 0x226028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226024u;
    // 0x226028: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317398u, 0x226024u, 0x22602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22602Cu;
label_22602c:
    // 0x22602c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22602cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226030:
    // 0x226030: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x226030u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226034: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x226034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226038: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x226038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22603c: 0x3e00008  jr          $ra
    ctx->pc = 0x22603Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22603Cu;
        // 0x226040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22603Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226044u;
    // 0x226044: 0x0  nop
    ctx->pc = 0x226044u;
    // NOP
    ctx->pc = 0x226048u;
}
