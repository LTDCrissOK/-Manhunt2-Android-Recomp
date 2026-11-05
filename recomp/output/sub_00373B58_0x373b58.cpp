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

// Function: sub_00373B58
// Address: 0x373b58 - 0x373cd0
void sub_00373B58_0x373b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373B58_0x373b58");
#endif

    switch (ctx->pc) {
        case 0x373b88u: goto label_373b88;
        case 0x373b98u: goto label_373b98;
        case 0x373ba4u: goto label_373ba4;
        case 0x373bd4u: goto label_373bd4;
        case 0x373bdcu: goto label_373bdc;
        case 0x373bf4u: goto label_373bf4;
        case 0x373c00u: goto label_373c00;
        case 0x373c1cu: goto label_373c1c;
        case 0x373c38u: goto label_373c38;
        case 0x373c54u: goto label_373c54;
        case 0x373c68u: goto label_373c68;
        case 0x373c74u: goto label_373c74;
        case 0x373c84u: goto label_373c84;
        default: break;
    }

    ctx->pc = 0x373b58u;

    // 0x373b58: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x373b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x373b5c: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x373b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x373b60: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x373b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x373b64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b68: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x373b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x373b6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x373b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b70: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x373b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x373b74: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x373b74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b78: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x373b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x373b7c: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x373b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x373b80: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x373B80u;
    SET_GPR_U32(ctx, 31, 0x373B88u);
    ctx->pc = 0x373B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373B80u;
    // 0x373b84: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x373B80u, 0x373B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373B88u;
label_373b88:
    // 0x373b88: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x373b88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x373b8c: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x373b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x373b90: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x373B90u;
    SET_GPR_U32(ctx, 31, 0x373B98u);
    ctx->pc = 0x373B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373B90u;
    // 0x373b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x373B90u, 0x373B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373B98u;
label_373b98:
    // 0x373b98: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x373b98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x373b9c: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x373B9Cu;
    SET_GPR_U32(ctx, 31, 0x373BA4u);
    ctx->pc = 0x373BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373B9Cu;
    // 0x373ba0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x373B9Cu, 0x373BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373BA4u;
label_373ba4:
    // 0x373ba4: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x373ba4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x373ba8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x373ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x373bac: 0x24a55c40  addiu       $a1, $a1, 0x5C40
    ctx->pc = 0x373bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23616));
    // 0x373bb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x373bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373bb4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x373bb4u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x655C40u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x655C40u, _value); } while (0);
    // 0x373bb8: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x373bb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x373bbc: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x373bbcu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x655C50u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x655C50u, _value); } while (0);
    // 0x373bc0: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x373bc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x373bc4: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x373bc4u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x655C60u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x655C60u, _value); } while (0);
    // 0x373bc8: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x373bc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x373bcc: 0xc0dec2c  jal         func_37B0B0
    ctx->pc = 0x373BCCu;
    SET_GPR_U32(ctx, 31, 0x373BD4u);
    ctx->pc = 0x373BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373BCCu;
    // 0x373bd0: 0x7ca20030  sq          $v0, 0x30($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0B0u, 0x373BCCu, 0x373BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373BD4u;
label_373bd4:
    // 0x373bd4: 0xc0dec2c  jal         func_37B0B0
    ctx->pc = 0x373BD4u;
    SET_GPR_U32(ctx, 31, 0x373BDCu);
    ctx->pc = 0x373BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373BD4u;
    // 0x373bd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0B0u, 0x373BD4u, 0x373BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373BDCu;
label_373bdc:
    // 0x373bdc: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x373bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x373be0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x373be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x373be4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x373be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x373be8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x373be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373bec: 0xc0df566  jal         func_37D598
    ctx->pc = 0x373BECu;
    SET_GPR_U32(ctx, 31, 0x373BF4u);
    ctx->pc = 0x373BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373BECu;
    // 0x373bf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D598u, 0x373BECu, 0x373BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373BF4u;
label_373bf4:
    // 0x373bf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x373bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373bf8: 0xc0dec9e  jal         func_37B278
    ctx->pc = 0x373BF8u;
    SET_GPR_U32(ctx, 31, 0x373C00u);
    ctx->pc = 0x373BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373BF8u;
    // 0x373bfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B278u, 0x373BF8u, 0x373C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C00u;
label_373c00:
    // 0x373c00: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x373c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x373c04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x373c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c08: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x373c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x373c0c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x373c0cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x373c10: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x373c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x373c14: 0xc0dec6a  jal         func_37B1A8
    ctx->pc = 0x373C14u;
    SET_GPR_U32(ctx, 31, 0x373C1Cu);
    ctx->pc = 0x373C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C14u;
    // 0x373c18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B1A8u, 0x373C14u, 0x373C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C1Cu;
label_373c1c:
    // 0x373c1c: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x373c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x373c20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x373c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c24: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x373c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x373c28: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x373c28u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x373c2c: 0xc60e0018  lwc1        $f14, 0x18($s0)
    ctx->pc = 0x373c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x373c30: 0xc0dec6a  jal         func_37B1A8
    ctx->pc = 0x373C30u;
    SET_GPR_U32(ctx, 31, 0x373C38u);
    ctx->pc = 0x373C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C30u;
    // 0x373c34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B1A8u, 0x373C30u, 0x373C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C38u;
label_373c38:
    // 0x373c38: 0xc60e0028  lwc1        $f14, 0x28($s0)
    ctx->pc = 0x373c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x373c3c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x373c3cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x373c40: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x373c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x373c44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x373c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c48: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x373c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x373c4c: 0xc0dec6a  jal         func_37B1A8
    ctx->pc = 0x373C4Cu;
    SET_GPR_U32(ctx, 31, 0x373C54u);
    ctx->pc = 0x373C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C4Cu;
    // 0x373c50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B1A8u, 0x373C4Cu, 0x373C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C54u;
label_373c54:
    // 0x373c54: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x373c54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x373c58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x373c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x373c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c60: 0xc0ded20  jal         func_37B480
    ctx->pc = 0x373C60u;
    SET_GPR_U32(ctx, 31, 0x373C68u);
    ctx->pc = 0x373C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C60u;
    // 0x373c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B480u, 0x373C60u, 0x373C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C68u;
label_373c68:
    // 0x373c68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x373c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c6c: 0xc0ded16  jal         func_37B458
    ctx->pc = 0x373C6Cu;
    SET_GPR_U32(ctx, 31, 0x373C74u);
    ctx->pc = 0x373C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C6Cu;
    // 0x373c70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B458u, 0x373C6Cu, 0x373C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C74u;
label_373c74:
    // 0x373c74: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x373c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x373c78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x373c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c7c: 0xc0ded16  jal         func_37B458
    ctx->pc = 0x373C7Cu;
    SET_GPR_U32(ctx, 31, 0x373C84u);
    ctx->pc = 0x373C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C7Cu;
    // 0x373c80: 0x24845b80  addiu       $a0, $a0, 0x5B80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B458u, 0x373C7Cu, 0x373C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C84u;
label_373c84:
    // 0x373c84: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x373c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x373c88: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x373c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x373c8c: 0x8c82cd00  lw          $v0, -0x3300($a0)
    ctx->pc = 0x373c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x373c90: 0x8ca3cd34  lw          $v1, -0x32CC($a1)
    ctx->pc = 0x373c90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCD34u));
    // 0x373c94: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x373c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x373c98: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x373c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x373c9c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x373c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x373ca0: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x373ca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x373ca4: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x373ca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x373ca8: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x373ca8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x373cac: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x373cacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x373cb0: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x373cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373cb4: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x373cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x373cb8: 0xac82cd00  sw          $v0, -0x3300($a0)
    ctx->pc = 0x373cb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FCD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD00u, _value); } while (0);
    // 0x373cbc: 0xaca3cd34  sw          $v1, -0x32CC($a1)
    ctx->pc = 0x373cbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FCD34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD34u, _value); } while (0);
    // 0x373cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x373CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373CC0u;
        // 0x373cc4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373CC8u;
    // 0x373cc8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x373cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x373ccc: 0x0  nop
    ctx->pc = 0x373cccu;
    // NOP
    ctx->pc = 0x373cd0u;
}
