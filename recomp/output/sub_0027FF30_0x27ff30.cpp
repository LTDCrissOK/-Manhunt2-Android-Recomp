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

// Function: sub_0027FF30
// Address: 0x27ff30 - 0x280000
void sub_0027FF30_0x27ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027FF30_0x27ff30");
#endif

    switch (ctx->pc) {
        case 0x27ff68u: goto label_27ff68;
        case 0x27ff8cu: goto label_27ff8c;
        case 0x27ffc0u: goto label_27ffc0;
        case 0x27ffdcu: goto label_27ffdc;
        default: break;
    }

    ctx->pc = 0x27ff30u;

    // 0x27ff30: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x27ff34: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27ff34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27ff38: 0x8c43cb4c  lw          $v1, -0x34B4($v0)
    ctx->pc = 0x27ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x66CB4Cu));
    // 0x27ff3c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x27ff3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x27ff40: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x27ff40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x27ff44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27ff44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27ff48: 0xe7b80060  swc1        $f24, 0x60($sp)
    ctx->pc = 0x27ff48u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27ff4c: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x27ff4cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27ff50: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x27ff50u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27ff54: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x27ff54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27ff58: 0x106000ac  beqz        $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x27FF58u;
    {
        const bool branch_taken_0x27ff58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF58u;
        // 0x27ff5c: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff58) {
            ctx->pc = 0x28020Cu;
            return;
        }
    }
    ctx->pc = 0x27FF60u;
    // 0x27ff60: 0xc0a0340  jal         func_280D00
    ctx->pc = 0x27FF60u;
    SET_GPR_U32(ctx, 31, 0x27FF68u);
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x27FF60u, 0x27FF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF68u;
label_27ff68:
    // 0x27ff68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27ff6c: 0x144300a8  bne         $v0, $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x27FF6Cu;
    {
        const bool branch_taken_0x27ff6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF6Cu;
        // 0x27ff70: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff6c) {
            ctx->pc = 0x280210u;
            return;
        }
    }
    ctx->pc = 0x27FF74u;
    // 0x27ff74: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27ff74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27ff78: 0x8c62a330  lw          $v0, -0x5CD0($v1)
    ctx->pc = 0x27ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA330u));
    // 0x27ff7c: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x27FF7Cu;
    {
        const bool branch_taken_0x27ff7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF7Cu;
        // 0x27ff80: 0x2470a330  addiu       $s0, $v1, -0x5CD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff7c) {
            ctx->pc = 0x28020Cu;
            return;
        }
    }
    ctx->pc = 0x27FF84u;
    // 0x27ff84: 0xc0f8134  jal         func_3E04D0
    ctx->pc = 0x27FF84u;
    SET_GPR_U32(ctx, 31, 0x27FF8Cu);
    ctx->pc = 0x3E04D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E04D0u, 0x27FF84u, 0x27FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF8Cu;
label_27ff8c:
    // 0x27ff8c: 0x3c013f74  lui         $at, 0x3F74
    ctx->pc = 0x27ff8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16244 << 16));
    // 0x27ff90: 0x3421bc6a  ori         $at, $at, 0xBC6A
    ctx->pc = 0x27ff90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48234);
    // 0x27ff94: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27ff94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27ff98: 0x3c01bb44  lui         $at, 0xBB44
    ctx->pc = 0x27ff98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47940 << 16));
    // 0x27ff9c: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x27ff9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x27ffa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27ffa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27ffa4: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x27ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x27ffa8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x27ffa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x27ffac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27ffacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27ffb0: 0x24849f78  addiu       $a0, $a0, -0x6088
    ctx->pc = 0x27ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942584));
    // 0x27ffb4: 0x460105c2  mul.s       $f23, $f0, $f1
    ctx->pc = 0x27ffb4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27ffb8: 0xc09f5e8  jal         func_27D7A0
    ctx->pc = 0x27FFB8u;
    SET_GPR_U32(ctx, 31, 0x27FFC0u);
    ctx->pc = 0x27FFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFB8u;
    // 0x27ffbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D7A0u, 0x27FFB8u, 0x27FFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFC0u;
label_27ffc0:
    // 0x27ffc0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x27ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x27ffc4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x27ffc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27ffc8: 0x24519f80  addiu       $s1, $v0, -0x6080
    ctx->pc = 0x27ffc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942592));
    // 0x27ffcc: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x27ffccu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x27ffd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ffd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ffd4: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x27FFD4u;
    SET_GPR_U32(ctx, 31, 0x27FFDCu);
    ctx->pc = 0x27FFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFD4u;
    // 0x27ffd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x27FFD4u, 0x27FFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFDCu;
label_27ffdc:
    // 0x27ffdc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x27ffdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27ffe0: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x27ffe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x27ffe4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27FFE4u;
    {
        const bool branch_taken_0x27ffe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFE4u;
        // 0x27ffe8: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ffe4) {
            ctx->pc = 0x280008u;
            return;
        }
    }
    ctx->pc = 0x27FFECu;
    // 0x27ffec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27ffecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x27fff0: 0x24a59f88  addiu       $a1, $a1, -0x6078
    ctx->pc = 0x27fff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942600));
    // 0x27fff4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27fff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fff8: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x27FFF8u;
    SET_GPR_U32(ctx, 31, 0x280000u);
    ctx->pc = 0x27FFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFF8u;
    // 0x27fffc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x27FFF8u, 0x280000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280000u;
}
