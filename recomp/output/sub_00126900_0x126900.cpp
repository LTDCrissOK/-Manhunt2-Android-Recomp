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

// Function: sub_00126900
// Address: 0x126900 - 0x1269a8
void sub_00126900_0x126900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126900_0x126900");
#endif

    switch (ctx->pc) {
        case 0x126918u: goto label_126918;
        case 0x126940u: goto label_126940;
        case 0x126950u: goto label_126950;
        default: break;
    }

    ctx->pc = 0x126900u;

    // 0x126900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x126904: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x126904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x126908: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x126908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12690c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12690cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x126910: 0xc049a34  jal         func_1268D0
    ctx->pc = 0x126910u;
    SET_GPR_U32(ctx, 31, 0x126918u);
    ctx->pc = 0x126914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126910u;
    // 0x126914: 0x26050304  addiu       $a1, $s0, 0x304 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268D0u, 0x126910u, 0x126918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126918u;
label_126918:
    // 0x126918: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x126918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x12691c: 0x37a40008  ori         $a0, $sp, 0x8
    ctx->pc = 0x12691cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x126920: 0x2449cdd0  addiu       $t1, $v0, -0x3230
    ctx->pc = 0x126920u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954448));
    // 0x126924: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x126924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x126928: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x126928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12692c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x12692cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x126930: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x126930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x126934: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x126934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x126938: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x126938u;
    SET_GPR_U32(ctx, 31, 0x126940u);
    ctx->pc = 0x12693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126938u;
    // 0x12693c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x126938u, 0x126940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126940u;
label_126940:
    // 0x126940: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x126940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x126944: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x126944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126948: 0xc0477ec  jal         func_11DFB0
    ctx->pc = 0x126948u;
    SET_GPR_U32(ctx, 31, 0x126950u);
    ctx->pc = 0x12694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126948u;
    // 0x12694c: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFB0u, 0x126948u, 0x126950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126950u;
label_126950:
    // 0x126950: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x126950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x126954: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x126954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x126958: 0x24060055  addiu       $a2, $zero, 0x55
    ctx->pc = 0x126958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x12695c: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x12695cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x126960: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x126960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x126964: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126968: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x126968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12696c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x12696cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x126970: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x126970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x126974: 0xae030320  sw          $v1, 0x320($s0)
    ctx->pc = 0x126974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 3));
    // 0x126978: 0xae020304  sw          $v0, 0x304($s0)
    ctx->pc = 0x126978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 2));
    // 0x12697c: 0xe6010308  swc1        $f1, 0x308($s0)
    ctx->pc = 0x12697cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 776), bits); }
    // 0x126980: 0xe6000310  swc1        $f0, 0x310($s0)
    ctx->pc = 0x126980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 784), bits); }
    // 0x126984: 0xae060314  sw          $a2, 0x314($s0)
    ctx->pc = 0x126984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 6));
    // 0x126988: 0xae040318  sw          $a0, 0x318($s0)
    ctx->pc = 0x126988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 4));
    // 0x12698c: 0xae05031c  sw          $a1, 0x31C($s0)
    ctx->pc = 0x12698cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 5));
    // 0x126990: 0xae00030c  sw          $zero, 0x30C($s0)
    ctx->pc = 0x126990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 0));
    // 0x126994: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x126994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126998: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x126998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12699c: 0x3e00008  jr          $ra
    ctx->pc = 0x12699Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1269A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12699Cu;
        // 0x1269a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12699Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1269A4u;
    // 0x1269a4: 0x0  nop
    ctx->pc = 0x1269a4u;
    // NOP
    ctx->pc = 0x1269a8u;
}
