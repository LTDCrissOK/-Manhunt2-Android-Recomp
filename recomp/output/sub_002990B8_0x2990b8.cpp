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

// Function: sub_002990B8
// Address: 0x2990b8 - 0x2991a0
void sub_002990B8_0x2990b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002990B8_0x2990b8");
#endif

    switch (ctx->pc) {
        case 0x2990ecu: goto label_2990ec;
        case 0x2990f8u: goto label_2990f8;
        case 0x299120u: goto label_299120;
        case 0x29912cu: goto label_29912c;
        case 0x299140u: goto label_299140;
        default: break;
    }

    ctx->pc = 0x2990b8u;

    // 0x2990b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2990b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2990bc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2990bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2990c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2990c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2990c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2990c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990c8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2990c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2990cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2990ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990d0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2990d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2990d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2990d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990d8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2990d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2990dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2990e0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2990e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2990e4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2990E4u;
    SET_GPR_U32(ctx, 31, 0x2990ECu);
    ctx->pc = 0x2990E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2990E4u;
    // 0x2990e8: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2990E4u, 0x2990ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2990ECu;
label_2990ec:
    // 0x2990ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2990ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990f0: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x2990F0u;
    SET_GPR_U32(ctx, 31, 0x2990F8u);
    ctx->pc = 0x2990F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2990F0u;
    // 0x2990f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x2990F0u, 0x2990F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2990F8u;
label_2990f8:
    // 0x2990f8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2990f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2990fc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2990fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x299100: 0x246330d0  addiu       $v1, $v1, 0x30D0
    ctx->pc = 0x299100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12496));
    // 0x299104: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x299104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
    // 0x299108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29910c: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x29910cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x299110: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x299110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299118: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x299118u;
    SET_GPR_U32(ctx, 31, 0x299120u);
    ctx->pc = 0x29911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299118u;
    // 0x29911c: 0xa2020078  sb          $v0, 0x78($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x299118u, 0x299120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299120u;
label_299120:
    // 0x299120: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x299120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299124: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x299124u;
    SET_GPR_U32(ctx, 31, 0x29912Cu);
    ctx->pc = 0x299128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299124u;
    // 0x299128: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x299124u, 0x29912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29912Cu;
label_29912c:
    // 0x29912c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x29912cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299130: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x299130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299134: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x299134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x299138: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x299138u;
    SET_GPR_U32(ctx, 31, 0x299140u);
    ctx->pc = 0x29913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299138u;
    // 0x29913c: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x299138u, 0x299140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299140u;
label_299140:
    // 0x299140: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x299140u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299144: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x299144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x299148: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x299148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
    // 0x29914c: 0x32e3a  dsrl        $a1, $v1, 24
    ctx->pc = 0x29914cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 24);
    // 0x299150: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x299150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
    // 0x299154: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x299154u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x299158: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x299158u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x29915c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29915cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299160: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x299160u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x299164: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x299164u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x299168: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x299168u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29916c: 0x8ba30003  lwl         $v1, 0x3($sp)
    ctx->pc = 0x29916cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x299170: 0x9ba30000  lwr         $v1, 0x0($sp)
    ctx->pc = 0x299170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x299174: 0xaa030017  swl         $v1, 0x17($s0)
    ctx->pc = 0x299174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x299178: 0xba030014  swr         $v1, 0x14($s0)
    ctx->pc = 0x299178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x29917c: 0xa2140078  sb          $s4, 0x78($s0)
    ctx->pc = 0x29917cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 20));
    // 0x299180: 0xa200006e  sb          $zero, 0x6E($s0)
    ctx->pc = 0x299180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x299184: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x299184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299188: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x299188u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29918c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x29918cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299190: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x299190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x299194: 0x3e00008  jr          $ra
    ctx->pc = 0x299194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299194u;
        // 0x299198: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29919Cu;
    // 0x29919c: 0x0  nop
    ctx->pc = 0x29919cu;
    // NOP
    ctx->pc = 0x2991a0u;
}
