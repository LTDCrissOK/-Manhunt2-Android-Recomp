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

// Function: sub_003BDEF8
// Address: 0x3bdef8 - 0x3be008
void sub_003BDEF8_0x3bdef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BDEF8_0x3bdef8");
#endif

    switch (ctx->pc) {
        case 0x3bdf20u: goto label_3bdf20;
        default: break;
    }

    ctx->pc = 0x3bdef8u;

    // 0x3bdef8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bdef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3bdefc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3bdefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3bdf00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bdf00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdf04: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3bdf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3bdf08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3bdf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3bdf0c: 0x111282  srl         $v0, $s1, 10
    ctx->pc = 0x3bdf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 10));
    // 0x3bdf10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3bdf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3bdf14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3bdf14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdf18: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3BDF18u;
    SET_GPR_U32(ctx, 31, 0x3BDF20u);
    ctx->pc = 0x3BDF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDF18u;
    // 0x3bdf1c: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3BDF18u, 0x3BDF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDF20u;
label_3bdf20:
    // 0x3bdf20: 0x620000a  bltz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x3BDF20u;
    {
        const bool branch_taken_0x3bdf20 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x3BDF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDF20u;
        // 0x3bdf24: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdf20) {
            ctx->pc = 0x3BDF4Cu;
            goto label_3bdf4c;
        }
    }
    ctx->pc = 0x3BDF28u;
    // 0x3bdf28: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3bdf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3bdf2c: 0x322203ff  andi        $v0, $s1, 0x3FF
    ctx->pc = 0x3bdf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1023);
    // 0x3bdf30: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BDF30u;
    {
        const bool branch_taken_0x3bdf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bdf30) {
            ctx->pc = 0x3BDF4Cu;
            goto label_3bdf4c;
        }
    }
    ctx->pc = 0x3BDF38u;
    // 0x3bdf38: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3bdf38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3bdf3c: 0x2482ca48  addiu       $v0, $a0, -0x35B8
    ctx->pc = 0x3bdf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953544));
    // 0x3bdf40: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3bdf40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42CA64u));
    // 0x3bdf44: 0x54710007  bnel        $v1, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BDF44u;
    {
        const bool branch_taken_0x3bdf44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x3bdf44) {
            ctx->pc = 0x3BDF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BDF44u;
            // 0x3bdf48: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BDF64u;
            goto label_3bdf64;
        }
    }
    ctx->pc = 0x3BDF4Cu;
label_3bdf4c:
    // 0x3bdf4c: 0x10c00025  beqz        $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x3BDF4Cu;
    {
        const bool branch_taken_0x3bdf4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDF4Cu;
        // 0x3bdf50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdf4c) {
            ctx->pc = 0x3BDFE4u;
            goto label_3bdfe4;
        }
    }
    ctx->pc = 0x3BDF54u;
    // 0x3bdf54: 0xf  sync
    ctx->pc = 0x3bdf54u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3bdf58: 0x42000038  ei
    ctx->pc = 0x3bdf58u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3bdf5c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3BDF5Cu;
    {
        const bool branch_taken_0x3bdf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDF5Cu;
        // 0x3bdf60: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdf5c) {
            ctx->pc = 0x3BDFE8u;
            goto label_3bdfe8;
        }
    }
    ctx->pc = 0x3BDF64u;
label_3bdf64:
    // 0x3bdf64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3bdf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3bdf68: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3BDF68u;
    {
        const bool branch_taken_0x3bdf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDF68u;
        // 0x3bdf6c: 0xde050018  ld          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdf68) {
            ctx->pc = 0x3BDFCCu;
            goto label_3bdfcc;
        }
    }
    ctx->pc = 0x3BDF70u;
    // 0x3bdf70: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bdf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bdf74: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x3bdf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x3bdf78: 0x9c430000  lwu         $v1, 0x0($v0)
    ctx->pc = 0x3bdf78u;
    SET_GPR_ZE32(ctx, 3, runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x3bdf7c: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x3bdf7cu;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x10000810u)); // MMIO: 0x10000810
    // 0x3bdf80: 0xdc8aca48  ld          $t2, -0x35B8($a0)
    ctx->pc = 0x3bdf80u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 4294953544)));
    // 0x3bdf84: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x3bdf84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x3bdf88: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BDF88u;
    {
        const bool branch_taken_0x3bdf88 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDF88u;
        // 0x3bdf8c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdf88) {
            ctx->pc = 0x3BDF98u;
            goto label_3bdf98;
        }
    }
    ctx->pc = 0x3BDF90u;
    // 0x3bdf90: 0x9c430000  lwu         $v1, 0x0($v0)
    ctx->pc = 0x3bdf90u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bdf94: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3bdf94u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_3bdf98:
    // 0x3bdf98: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x3bdf98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x3bdf9c: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3bdf9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3bdfa0: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x3bdfa0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x3bdfa4: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x3bdfa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x3bdfa8: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x3bdfa8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x3bdfac: 0x1231814  dsllv       $v1, $v1, $t1
    ctx->pc = 0x3bdfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x3bdfb0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3bdfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdfb4: 0xfe120018  sd          $s2, 0x18($s0)
    ctx->pc = 0x3bdfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
    // 0x3bdfb8: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x3bdfb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3bdfbc: 0xfe040010  sd          $a0, 0x10($s0)
    ctx->pc = 0x3bdfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 4));
    // 0x3bdfc0: 0x83182f  dsubu       $v1, $a0, $v1
    ctx->pc = 0x3bdfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x3bdfc4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3BDFC4u;
    {
        const bool branch_taken_0x3bdfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDFC4u;
        // 0x3bdfc8: 0xa3282d  daddu       $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdfc4) {
            ctx->pc = 0x3BDFD0u;
            goto label_3bdfd0;
        }
    }
    ctx->pc = 0x3BDFCCu;
label_3bdfcc:
    // 0x3bdfcc: 0xfe120018  sd          $s2, 0x18($s0)
    ctx->pc = 0x3bdfccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
label_3bdfd0:
    // 0x3bdfd0: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BDFD0u;
    {
        const bool branch_taken_0x3bdfd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDFD0u;
        // 0x3bdfd4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdfd0) {
            ctx->pc = 0x3BDFE4u;
            goto label_3bdfe4;
        }
    }
    ctx->pc = 0x3BDFD8u;
    // 0x3bdfd8: 0xf  sync
    ctx->pc = 0x3bdfd8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3bdfdc: 0x42000038  ei
    ctx->pc = 0x3bdfdcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3bdfe0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3bdfe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bdfe4:
    // 0x3bdfe4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3bdfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3bdfe8:
    // 0x3bdfe8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3bdfe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bdfec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3bdfecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bdff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bdff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bdff4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BDFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BDFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDFF4u;
        // 0x3bdff8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BDFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BDFFCu;
    // 0x3bdffc: 0x0  nop
    ctx->pc = 0x3bdffcu;
    // NOP
    // 0x3be000: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3be000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3be004: 0x0  nop
    ctx->pc = 0x3be004u;
    // NOP
    ctx->pc = 0x3be008u;
}
