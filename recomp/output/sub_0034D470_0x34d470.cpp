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

// Function: sub_0034D470
// Address: 0x34d470 - 0x34d5a8
void sub_0034D470_0x34d470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D470_0x34d470");
#endif

    switch (ctx->pc) {
        case 0x34d4b0u: goto label_34d4b0;
        case 0x34d4e8u: goto label_34d4e8;
        case 0x34d520u: goto label_34d520;
        case 0x34d538u: goto label_34d538;
        case 0x34d578u: goto label_34d578;
        default: break;
    }

    ctx->pc = 0x34d470u;

    // 0x34d470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34d470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34d474: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34d474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x34d478: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34d478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34d47c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x34d47cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d480: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x34d480u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34d484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34d484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34d488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34d48c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x34d48cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x34d490: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34d490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34d494: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x34d494u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x34d498: 0x8c43c60c  lw          $v1, -0x39F4($v0)
    ctx->pc = 0x34d498u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FC60Cu));
    // 0x34d49c: 0x90620045  lbu         $v0, 0x45($v1)
    ctx->pc = 0x34d49cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 69)));
    // 0x34d4a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34D4A0u;
    {
        const bool branch_taken_0x34d4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D4A0u;
        // 0x34d4a4: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d4a0) {
            ctx->pc = 0x34D4C8u;
            goto label_34d4c8;
        }
    }
    ctx->pc = 0x34D4A8u;
    // 0x34d4a8: 0x24630045  addiu       $v1, $v1, 0x45
    ctx->pc = 0x34d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 69));
    // 0x34d4ac: 0x0  nop
    ctx->pc = 0x34d4acu;
    // NOP
label_34d4b0:
    // 0x34d4b0: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x34d4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x34d4b4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x34d4b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34d4b8: 0x0  nop
    ctx->pc = 0x34d4b8u;
    // NOP
    // 0x34d4bc: 0x0  nop
    ctx->pc = 0x34d4bcu;
    // NOP
    // 0x34d4c0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x34D4C0u;
    {
        const bool branch_taken_0x34d4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D4C0u;
        // 0x34d4c4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d4c0) {
            ctx->pc = 0x34D4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d4b0;
        }
    }
    ctx->pc = 0x34D4C8u;
label_34d4c8:
    // 0x34d4c8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x34d4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34d4cc: 0x8cd0c60c  lw          $s0, -0x39F4($a2)
    ctx->pc = 0x34d4ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294952460)));
    // 0x34d4d0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x34d4d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34d4d4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x34d4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34d4d8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x34d4d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34d4dc: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34d4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d4e0: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x34D4E0u;
    SET_GPR_U32(ctx, 31, 0x34D4E8u);
    ctx->pc = 0x34D4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D4E0u;
    // 0x34d4e4: 0x4600a547  neg.s       $f21, $f20 (Delay Slot)
    ctx->f[21] = FPU_NEG_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x34D4E0u, 0x34D4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D4E8u;
label_34d4e8:
    // 0x34d4e8: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x34d4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34d4ec: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x34d4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34d4f0: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x34d4f0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x34d4f4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x34d4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x34d4f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34d4f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34d4fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34d4fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d500: 0x0  nop
    ctx->pc = 0x34d500u;
    // NOP
    // 0x34d504: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x34d504u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34d508: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x34d508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x34d50c: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x34d50cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x34d510: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x34d510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x34d514: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x34d514u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x34d518: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x34D518u;
    SET_GPR_U32(ctx, 31, 0x34D520u);
    ctx->pc = 0x34D51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D518u;
    // 0x34d51c: 0xe6030000  swc1        $f3, 0x0($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x34D518u, 0x34D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D520u;
label_34d520:
    // 0x34d520: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x34d520u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x34d524: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x34d524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d528: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x34d528u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x34d52c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x34d52cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x34d530: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x34D530u;
    SET_GPR_U32(ctx, 31, 0x34D538u);
    ctx->pc = 0x34D534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D530u;
    // 0x34d534: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x34D530u, 0x34D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D538u;
label_34d538:
    // 0x34d538: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x34d538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x34d53c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x34d53cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x34d540: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34d540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d544: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34d544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d548: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x34d548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x34d54c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x34d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x34d550: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34d550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34d554: 0xa2000044  sb          $zero, 0x44($s0)
    ctx->pc = 0x34d554u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d558: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x34d558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x34d55c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x34d55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x34d560: 0xa2030045  sb          $v1, 0x45($s0)
    ctx->pc = 0x34d560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 3));
    // 0x34d564: 0x2484ff68  addiu       $a0, $a0, -0x98
    ctx->pc = 0x34d564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967144));
    // 0x34d568: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x34d568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x34d56c: 0x24a565c8  addiu       $a1, $a1, 0x65C8
    ctx->pc = 0x34d56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26056));
    // 0x34d570: 0xc0c34a8  jal         func_30D2A0
    ctx->pc = 0x34D570u;
    SET_GPR_U32(ctx, 31, 0x34D578u);
    ctx->pc = 0x34D574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D570u;
    // 0x34d574: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D2A0u, 0x34D570u, 0x34D578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D578u;
label_34d578:
    // 0x34d578: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x34d578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x34d57c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34d57cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d580: 0x8e222cec  lw          $v0, 0x2CEC($s1)
    ctx->pc = 0x34d580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11500)));
    // 0x34d584: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34d584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d588: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34d588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34d58c: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x34d58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34d590: 0xae222cec  sw          $v0, 0x2CEC($s1)
    ctx->pc = 0x34d590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11500), GPR_U32(ctx, 2));
    // 0x34d594: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34d594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34d598: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x34d598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34d59c: 0x3e00008  jr          $ra
    ctx->pc = 0x34D59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D59Cu;
        // 0x34d5a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D5A4u;
    // 0x34d5a4: 0x0  nop
    ctx->pc = 0x34d5a4u;
    // NOP
    ctx->pc = 0x34d5a8u;
}
