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

// Function: sub_003CAF98
// Address: 0x3caf98 - 0x3cb048
void sub_003CAF98_0x3caf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CAF98_0x3caf98");
#endif

    switch (ctx->pc) {
        case 0x3cafd8u: goto label_3cafd8;
        default: break;
    }

    ctx->pc = 0x3caf98u;

    // 0x3caf98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3caf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3caf9c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3caf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3cafa0: 0x3c110043  lui         $s1, 0x43
    ctx->pc = 0x3cafa0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
    // 0x3cafa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3cafa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3cafa8: 0x8e25d5fc  lw          $a1, -0x2A04($s1)
    ctx->pc = 0x3cafa8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x42D5FCu));
    // 0x3cafac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3cafacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cafb0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3cafb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3cafb4: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x3cafb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x3cafb8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3CAFB8u;
    {
        const bool branch_taken_0x3cafb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CAFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFB8u;
        // 0x3cafbc: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cafb8) {
            ctx->pc = 0x3CAFE0u;
            goto label_3cafe0;
        }
    }
    ctx->pc = 0x3CAFC0u;
    // 0x3cafc0: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x3cafc0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
    // 0x3cafc4: 0xae20d5fc  sw          $zero, -0x2A04($s1)
    ctx->pc = 0x3cafc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294956540), GPR_U32(ctx, 0));
    // 0x3cafc8: 0x26421d40  addiu       $v0, $s2, 0x1D40
    ctx->pc = 0x3cafc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 7488));
    // 0x3cafcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3cafccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cafd0: 0xc0f45b0  jal         func_3D16C0
    ctx->pc = 0x3CAFD0u;
    SET_GPR_U32(ctx, 31, 0x3CAFD8u);
    ctx->pc = 0x3CAFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAFD0u;
    // 0x3cafd4: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D16C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D16C0u, 0x3CAFD0u, 0x3CAFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAFD8u;
label_3cafd8:
    // 0x3cafd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3CAFD8u;
    {
        const bool branch_taken_0x3cafd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFD8u;
        // 0x3cafdc: 0x8e25d5fc  lw          $a1, -0x2A04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cafd8) {
            ctx->pc = 0x3CAFE4u;
            goto label_3cafe4;
        }
    }
    ctx->pc = 0x3CAFE0u;
label_3cafe0:
    // 0x3cafe0: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x3cafe0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
label_3cafe4:
    // 0x3cafe4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3cafe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3cafe8: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3CAFE8u;
    {
        const bool branch_taken_0x3cafe8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CAFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFE8u;
        // 0x3cafec: 0x26421d40  addiu       $v0, $s2, 0x1D40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 7488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cafe8) {
            ctx->pc = 0x3CB020u;
            goto label_3cb020;
        }
    }
    ctx->pc = 0x3CAFF0u;
    // 0x3caff0: 0x26441d40  addiu       $a0, $s2, 0x1D40
    ctx->pc = 0x3caff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7488));
    // 0x3caff4: 0xae20d5fc  sw          $zero, -0x2A04($s1)
    ctx->pc = 0x3caff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294956540), GPR_U32(ctx, 0));
    // 0x3caff8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x3caff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3caffc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3caffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cb000: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x3cb000u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x3cb004: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3cb004u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cb008: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3cb008u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cb00c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3cb00cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cb010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3cb010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cb014: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3cb014u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cb018: 0x80f45b0  j           func_3D16C0
    ctx->pc = 0x3CB018u;
    ctx->pc = 0x3CB01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB018u;
    // 0x3cb01c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D16C0u;
    sub_003D16C0_0x3d16c0(rdram, ctx, runtime); return;
    ctx->pc = 0x3CB020u;
label_3cb020:
    // 0x3cb020: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x3cb020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3cb024: 0xae23d5fc  sw          $v1, -0x2A04($s1)
    ctx->pc = 0x3cb024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294956540), GPR_U32(ctx, 3));
    // 0x3cb028: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3cb028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3cb02c: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x3cb02cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x3cb030: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3cb030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cb034: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3cb034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cb038: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3cb038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cb03c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3cb03cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cb040: 0x3e00008  jr          $ra
    ctx->pc = 0x3CB040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CB044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB040u;
        // 0x3cb044: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CB048u;
}
