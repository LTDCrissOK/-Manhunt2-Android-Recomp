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

// Function: sub_00296A48
// Address: 0x296a48 - 0x296b08
void sub_00296A48_0x296a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296A48_0x296a48");
#endif

    switch (ctx->pc) {
        case 0x296a74u: goto label_296a74;
        case 0x296a7cu: goto label_296a7c;
        case 0x296a8cu: goto label_296a8c;
        case 0x296a98u: goto label_296a98;
        case 0x296aacu: goto label_296aac;
        default: break;
    }

    ctx->pc = 0x296a48u;

    // 0x296a48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x296a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x296a4c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x296a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x296a50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x296a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x296a54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x296a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a58: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x296a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x296a5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x296a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a60: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x296a60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a64: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x296a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x296a68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x296a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x296a6c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x296A6Cu;
    SET_GPR_U32(ctx, 31, 0x296A74u);
    ctx->pc = 0x296A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A6Cu;
    // 0x296a70: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x296A6Cu, 0x296A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A74u;
label_296a74:
    // 0x296a74: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x296A74u;
    SET_GPR_U32(ctx, 31, 0x296A7Cu);
    ctx->pc = 0x296A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A74u;
    // 0x296a78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x296A74u, 0x296A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A7Cu;
label_296a7c:
    // 0x296a7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x296a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x296a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a84: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x296A84u;
    SET_GPR_U32(ctx, 31, 0x296A8Cu);
    ctx->pc = 0x296A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A84u;
    // 0x296a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x296A84u, 0x296A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A8Cu;
label_296a8c:
    // 0x296a8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x296a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a90: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x296A90u;
    SET_GPR_U32(ctx, 31, 0x296A98u);
    ctx->pc = 0x296A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A90u;
    // 0x296a94: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x296A90u, 0x296A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A98u;
label_296a98:
    // 0x296a98: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x296a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296a9c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x296a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x296aa0: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x296aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296aa4: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x296AA4u;
    SET_GPR_U32(ctx, 31, 0x296AACu);
    ctx->pc = 0x296AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296AA4u;
    // 0x296aa8: 0xe601001c  swc1        $f1, 0x1C($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x296AA4u, 0x296AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296AACu;
label_296aac:
    // 0x296aac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x296aacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ab0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x296ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296ab4: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x296ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
    // 0x296ab8: 0x32e3a  dsrl        $a1, $v1, 24
    ctx->pc = 0x296ab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 24);
    // 0x296abc: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x296abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
    // 0x296ac0: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x296ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x296ac4: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x296ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x296ac8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x296ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296acc: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x296accu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x296ad0: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x296ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x296ad4: 0x8ba30003  lwl         $v1, 0x3($sp)
    ctx->pc = 0x296ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x296ad8: 0x9ba30000  lwr         $v1, 0x0($sp)
    ctx->pc = 0x296ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x296adc: 0xaa030017  swl         $v1, 0x17($s0)
    ctx->pc = 0x296adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x296ae0: 0xba030014  swr         $v1, 0x14($s0)
    ctx->pc = 0x296ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x296ae4: 0xa206006c  sb          $a2, 0x6C($s0)
    ctx->pc = 0x296ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 6));
    // 0x296ae8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x296ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296aec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x296aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296af0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x296af0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296af4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x296af4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296af8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x296af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296afc: 0x3e00008  jr          $ra
    ctx->pc = 0x296AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AFCu;
        // 0x296b00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296B04u;
    // 0x296b04: 0x0  nop
    ctx->pc = 0x296b04u;
    // NOP
    ctx->pc = 0x296b08u;
}
