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

// Function: sub_00307748
// Address: 0x307748 - 0x307808
void sub_00307748_0x307748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307748_0x307748");
#endif

    switch (ctx->pc) {
        case 0x3077bcu: goto label_3077bc;
        case 0x3077d8u: goto label_3077d8;
        case 0x3077e8u: goto label_3077e8;
        case 0x3077f4u: goto label_3077f4;
        default: break;
    }

    ctx->pc = 0x307748u;

    // 0x307748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x307748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30774c: 0x24020191  addiu       $v0, $zero, 0x191
    ctx->pc = 0x30774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 401));
    // 0x307750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x307750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x307754: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x307754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x307758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x307758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30775c: 0x8e050338  lw          $a1, 0x338($s0)
    ctx->pc = 0x30775cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x307760: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x307760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x307764: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x307764u;
    {
        const bool branch_taken_0x307764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x307768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307764u;
        // 0x307768: 0x24020192  addiu       $v0, $zero, 0x192 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 402));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307764) {
            ctx->pc = 0x307774u;
            goto label_307774;
        }
    }
    ctx->pc = 0x30776Cu;
    // 0x30776c: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x30776Cu;
    {
        const bool branch_taken_0x30776c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30776c) {
            ctx->pc = 0x3077ECu;
            goto label_3077ec;
        }
    }
    ctx->pc = 0x307774u;
label_307774:
    // 0x307774: 0x8e041200  lw          $a0, 0x1200($s0)
    ctx->pc = 0x307774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4608)));
    // 0x307778: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x307778u;
    {
        const bool branch_taken_0x307778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307778) {
            ctx->pc = 0x3077ECu;
            goto label_3077ec;
        }
    }
    ctx->pc = 0x307780u;
    // 0x307780: 0x8ca200a0  lw          $v0, 0xA0($a1)
    ctx->pc = 0x307780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x307784: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x307784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x307788: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x307788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30778c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x30778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x307790: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x307790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307794: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x307794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307798: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x307798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30779c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30779cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3077a0: 0x0  nop
    ctx->pc = 0x3077a0u;
    // NOP
    // 0x3077a4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x3077A4u;
    {
        const bool branch_taken_0x3077a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3077A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3077A4u;
        // 0x3077a8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3077a4) {
            ctx->pc = 0x3077ECu;
            goto label_3077ec;
        }
    }
    ctx->pc = 0x3077ACu;
    // 0x3077ac: 0x8c86036c  lw          $a2, 0x36C($a0)
    ctx->pc = 0x3077acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x3077b0: 0x30c60020  andi        $a2, $a2, 0x20
    ctx->pc = 0x3077b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x3077b4: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x3077B4u;
    SET_GPR_U32(ctx, 31, 0x3077BCu);
    ctx->pc = 0x3077B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3077B4u;
    // 0x3077b8: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x3077B4u, 0x3077BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077BCu;
label_3077bc:
    // 0x3077bc: 0x8e041200  lw          $a0, 0x1200($s0)
    ctx->pc = 0x3077bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4608)));
    // 0x3077c0: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x3077c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x3077c4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3077c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3077c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3077C8u;
    {
        const bool branch_taken_0x3077c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3077c8) {
            ctx->pc = 0x3077E0u;
            goto label_3077e0;
        }
    }
    ctx->pc = 0x3077D0u;
    // 0x3077d0: 0xc0cda26  jal         func_336898
    ctx->pc = 0x3077D0u;
    SET_GPR_U32(ctx, 31, 0x3077D8u);
    ctx->pc = 0x3077D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3077D0u;
    // 0x3077d4: 0x24050051  addiu       $a1, $zero, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x3077D0u, 0x3077D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077D8u;
label_3077d8:
    // 0x3077d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3077D8u;
    {
        const bool branch_taken_0x3077d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3077DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3077D8u;
        // 0x3077dc: 0xae001200  sw          $zero, 0x1200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3077d8) {
            ctx->pc = 0x3077ECu;
            goto label_3077ec;
        }
    }
    ctx->pc = 0x3077E0u;
label_3077e0:
    // 0x3077e0: 0xc0cda26  jal         func_336898
    ctx->pc = 0x3077E0u;
    SET_GPR_U32(ctx, 31, 0x3077E8u);
    ctx->pc = 0x3077E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3077E0u;
    // 0x3077e4: 0x24050052  addiu       $a1, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x3077E0u, 0x3077E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077E8u;
label_3077e8:
    // 0x3077e8: 0xae001200  sw          $zero, 0x1200($s0)
    ctx->pc = 0x3077e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4608), GPR_U32(ctx, 0));
label_3077ec:
    // 0x3077ec: 0xc0915b6  jal         func_2456D8
    ctx->pc = 0x3077ECu;
    SET_GPR_U32(ctx, 31, 0x3077F4u);
    ctx->pc = 0x3077F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3077ECu;
    // 0x3077f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2456D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2456D8u, 0x3077ECu, 0x3077F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077F4u;
label_3077f4:
    // 0x3077f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3077f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3077f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3077f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3077fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3077FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3077FCu;
        // 0x307800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3077FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307804u;
    // 0x307804: 0x0  nop
    ctx->pc = 0x307804u;
    // NOP
    ctx->pc = 0x307808u;
}
