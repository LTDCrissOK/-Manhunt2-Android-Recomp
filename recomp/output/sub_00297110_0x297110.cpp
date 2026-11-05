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

// Function: sub_00297110
// Address: 0x297110 - 0x297220
void sub_00297110_0x297110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297110_0x297110");
#endif

    switch (ctx->pc) {
        case 0x29713cu: goto label_29713c;
        case 0x297148u: goto label_297148;
        case 0x297180u: goto label_297180;
        case 0x29719cu: goto label_29719c;
        default: break;
    }

    ctx->pc = 0x297110u;

    // 0x297110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x297110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x297114: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x297114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x297118: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x297118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29711c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29711cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x297120: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x297120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297124: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x297124u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x297128: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x297128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29712c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29712cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x297130: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x297130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x297134: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x297134u;
    SET_GPR_U32(ctx, 31, 0x29713Cu);
    ctx->pc = 0x297138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297134u;
    // 0x297138: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x297134u, 0x29713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29713Cu;
label_29713c:
    // 0x29713c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29713cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297140: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x297140u;
    SET_GPR_U32(ctx, 31, 0x297148u);
    ctx->pc = 0x297144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297140u;
    // 0x297144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x297140u, 0x297148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297148u;
label_297148:
    // 0x297148: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x297148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x29714c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x29714cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x297150: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297154: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x297154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x297158: 0x24633290  addiu       $v1, $v1, 0x3290
    ctx->pc = 0x297158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12944));
    // 0x29715c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29715cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x297160: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x297160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x297164: 0xae230074  sw          $v1, 0x74($s1)
    ctx->pc = 0x297164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
    // 0x297168: 0x24a5bb50  addiu       $a1, $a1, -0x44B0
    ctx->pc = 0x297168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949712));
    // 0x29716c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29716cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297170: 0xe620007c  swc1        $f0, 0x7C($s1)
    ctx->pc = 0x297170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
    // 0x297174: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x297174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x297178: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x297178u;
    SET_GPR_U32(ctx, 31, 0x297180u);
    ctx->pc = 0x29717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297178u;
    // 0x29717c: 0xae200078  sw          $zero, 0x78($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x297178u, 0x297180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297180u;
label_297180:
    // 0x297180: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x297180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297184: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x297184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297188: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x297188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29718c: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x29718cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x297190: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x297190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x297194: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x297194u;
    SET_GPR_U32(ctx, 31, 0x29719Cu);
    ctx->pc = 0x297198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297194u;
    // 0x297198: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x297194u, 0x29719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29719Cu;
label_29719c:
    // 0x29719c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x29719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2971a0: 0x22e3a  dsrl        $a1, $v0, 24
    ctx->pc = 0x2971a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 24);
    // 0x2971a4: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x2971a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x2971a8: 0x2243a  dsrl        $a0, $v0, 16
    ctx->pc = 0x2971a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 16);
    // 0x2971ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2971acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2971b0: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x2971b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2971b4: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x2971b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2971b8: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x2971b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2971bc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2971bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2971c0: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x2971c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x2971c4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x2971c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2971c8: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x2971c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2971cc: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x2971ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2971d0: 0xaa220017  swl         $v0, 0x17($s1)
    ctx->pc = 0x2971d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2971d4: 0xba220014  swr         $v0, 0x14($s1)
    ctx->pc = 0x2971d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2971d8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2971D8u;
    {
        const bool branch_taken_0x2971d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2971DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971D8u;
        // 0x2971dc: 0xe634007c  swc1        $f20, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2971d8) {
            ctx->pc = 0x2971E4u;
            goto label_2971e4;
        }
    }
    ctx->pc = 0x2971E0u;
    // 0x2971e0: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2971e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_2971e4:
    // 0x2971e4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2971e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2971e8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2971e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2971ec: 0x0  nop
    ctx->pc = 0x2971ecu;
    // NOP
    // 0x2971f0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2971F0u;
    {
        const bool branch_taken_0x2971f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2971f0) {
            ctx->pc = 0x2971F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2971F0u;
            // 0x2971f4: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2971F8u;
            goto label_2971f8;
        }
    }
    ctx->pc = 0x2971F8u;
label_2971f8:
    // 0x2971f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2971f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2971fc: 0xa220006c  sb          $zero, 0x6C($s1)
    ctx->pc = 0x2971fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x297200: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x297200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297204: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x297204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x297208: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x297208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29720c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x29720cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x297210: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x297210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x297214: 0x3e00008  jr          $ra
    ctx->pc = 0x297214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297214u;
        // 0x297218: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29721Cu;
    // 0x29721c: 0x0  nop
    ctx->pc = 0x29721cu;
    // NOP
    ctx->pc = 0x297220u;
}
