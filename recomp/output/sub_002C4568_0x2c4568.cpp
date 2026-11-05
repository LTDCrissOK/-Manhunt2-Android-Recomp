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

// Function: sub_002C4568
// Address: 0x2c4568 - 0x2c4630
void sub_002C4568_0x2c4568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4568_0x2c4568");
#endif

    switch (ctx->pc) {
        case 0x2c4598u: goto label_2c4598;
        case 0x2c45e4u: goto label_2c45e4;
        case 0x2c45f8u: goto label_2c45f8;
        default: break;
    }

    ctx->pc = 0x2c4568u;

    // 0x2c4568: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c4568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c456c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c456cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c4570: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2c4570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2c4574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c4574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4578: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c4578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c457c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2c457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2c4580: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4580u;
    {
        const bool branch_taken_0x2c4580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4580u;
        // 0x2c4584: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4580) {
            ctx->pc = 0x2C4590u;
            goto label_2c4590;
        }
    }
    ctx->pc = 0x2C4588u;
    // 0x2c4588: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2C4588u;
    {
        const bool branch_taken_0x2c4588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4588u;
        // 0x2c458c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4588) {
            ctx->pc = 0x2C4608u;
            goto label_2c4608;
        }
    }
    ctx->pc = 0x2C4590u;
label_2c4590:
    // 0x2c4590: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C4590u;
    SET_GPR_U32(ctx, 31, 0x2C4598u);
    ctx->pc = 0x2C4594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4590u;
    // 0x2c4594: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C4590u, 0x2C4598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4598u;
label_2c4598:
    // 0x2c4598: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2c4598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c459c: 0x14c0000f  bnez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2C459Cu;
    {
        const bool branch_taken_0x2c459c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C45A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C459Cu;
        // 0x2c45a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c459c) {
            ctx->pc = 0x2C45DCu;
            goto label_2c45dc;
        }
    }
    ctx->pc = 0x2C45A4u;
    // 0x2c45a4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2c45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2c45a8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2c45a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c45ac: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2c45acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c45b0: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2c45b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2c45b4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2c45b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c45b8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2c45b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c45bc: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2c45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2c45c0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2c45c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c45c4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2c45c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c45c8: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x2c45c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2c45cc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2c45ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c45d0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2c45d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c45d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C45D4u;
    {
        const bool branch_taken_0x2c45d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45D4u;
        // 0x2c45d8: 0x8e050080  lw          $a1, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c45d4) {
            ctx->pc = 0x2C45E8u;
            goto label_2c45e8;
        }
    }
    ctx->pc = 0x2C45DCu;
label_2c45dc:
    // 0x2c45dc: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x2C45DCu;
    SET_GPR_U32(ctx, 31, 0x2C45E4u);
    ctx->pc = 0x2C45E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C45DCu;
    // 0x2c45e0: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x2C45DCu, 0x2C45E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C45E4u;
label_2c45e4:
    // 0x2c45e4: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x2c45e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_2c45e8:
    // 0x2c45e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c45e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c45ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c45ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c45f0: 0xc0b1ace  jal         func_2C6B38
    ctx->pc = 0x2C45F0u;
    SET_GPR_U32(ctx, 31, 0x2C45F8u);
    ctx->pc = 0x2C45F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C45F0u;
    // 0x2c45f4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6B38u, 0x2C45F0u, 0x2C45F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C45F8u;
label_2c45f8:
    // 0x2c45f8: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2c45f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2c45fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c45fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4600: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2c4600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4604: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2c4604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2c4608:
    // 0x2c4608: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c4608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c460c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2c460cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c4610: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c4610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4614: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4614u;
        // 0x2c4618: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C461Cu;
    // 0x2c461c: 0x0  nop
    ctx->pc = 0x2c461cu;
    // NOP
    // 0x2c4620: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c4620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4624: 0x0  nop
    ctx->pc = 0x2c4624u;
    // NOP
    // 0x2c4628: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c4628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c462c: 0x0  nop
    ctx->pc = 0x2c462cu;
    // NOP
    ctx->pc = 0x2c4630u;
}
