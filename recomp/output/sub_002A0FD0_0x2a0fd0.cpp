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

// Function: sub_002A0FD0
// Address: 0x2a0fd0 - 0x2a1090
void sub_002A0FD0_0x2a0fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0FD0_0x2a0fd0");
#endif

    switch (ctx->pc) {
        case 0x2a0ffcu: goto label_2a0ffc;
        case 0x2a1004u: goto label_2a1004;
        case 0x2a1014u: goto label_2a1014;
        case 0x2a1020u: goto label_2a1020;
        case 0x2a1034u: goto label_2a1034;
        default: break;
    }

    ctx->pc = 0x2a0fd0u;

    // 0x2a0fd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a0fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a0fd4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2a0fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2a0fd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a0fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a0fdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a0fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fe0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2a0fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2a0fe4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a0fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fe8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a0fe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a0fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a0ff0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a0ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a0ff4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2A0FF4u;
    SET_GPR_U32(ctx, 31, 0x2A0FFCu);
    ctx->pc = 0x2A0FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0FF4u;
    // 0x2a0ff8: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2A0FF4u, 0x2A0FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0FFCu;
label_2a0ffc:
    // 0x2a0ffc: 0xc0a832e  jal         func_2A0CB8
    ctx->pc = 0x2A0FFCu;
    SET_GPR_U32(ctx, 31, 0x2A1004u);
    ctx->pc = 0x2A1000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0FFCu;
    // 0x2a1000: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0CB8u, 0x2A0FFCu, 0x2A1004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1004u;
label_2a1004:
    // 0x2a1004: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a1004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1008: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a1008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a100c: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x2A100Cu;
    SET_GPR_U32(ctx, 31, 0x2A1014u);
    ctx->pc = 0x2A1010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A100Cu;
    // 0x2a1010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2A100Cu, 0x2A1014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1014u;
label_2a1014:
    // 0x2a1014: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a1014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1018: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x2A1018u;
    SET_GPR_U32(ctx, 31, 0x2A1020u);
    ctx->pc = 0x2A101Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1018u;
    // 0x2a101c: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2A1018u, 0x2A1020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1020u;
label_2a1020:
    // 0x2a1020: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2a1020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1024: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2a1024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2a1028: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2a1028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a102c: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x2A102Cu;
    SET_GPR_U32(ctx, 31, 0x2A1034u);
    ctx->pc = 0x2A1030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A102Cu;
    // 0x2a1030: 0xe601001c  swc1        $f1, 0x1C($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x2A102Cu, 0x2A1034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1034u;
label_2a1034:
    // 0x2a1034: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a1034u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1038: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a1038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a103c: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x2a103cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
    // 0x2a1040: 0x32e3a  dsrl        $a1, $v1, 24
    ctx->pc = 0x2a1040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 24);
    // 0x2a1044: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x2a1044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
    // 0x2a1048: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x2a1048u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a104c: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x2a104cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a1050: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a1050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1054: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x2a1054u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a1058: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x2a1058u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a105c: 0x8ba30003  lwl         $v1, 0x3($sp)
    ctx->pc = 0x2a105cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2a1060: 0x9ba30000  lwr         $v1, 0x0($sp)
    ctx->pc = 0x2a1060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2a1064: 0xaa030017  swl         $v1, 0x17($s0)
    ctx->pc = 0x2a1064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a1068: 0xba030014  swr         $v1, 0x14($s0)
    ctx->pc = 0x2a1068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a106c: 0xa206006c  sb          $a2, 0x6C($s0)
    ctx->pc = 0x2a106cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a1070: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a1070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1074: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2a1074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a1078: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a1078u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a107c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2a107cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a1080: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a1080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1084: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1084u;
        // 0x2a1088: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A108Cu;
    // 0x2a108c: 0x0  nop
    ctx->pc = 0x2a108cu;
    // NOP
    ctx->pc = 0x2a1090u;
}
