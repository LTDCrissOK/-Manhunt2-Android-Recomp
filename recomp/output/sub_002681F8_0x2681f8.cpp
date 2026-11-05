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

// Function: sub_002681F8
// Address: 0x2681f8 - 0x268298
void sub_002681F8_0x2681f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002681F8_0x2681f8");
#endif

    switch (ctx->pc) {
        case 0x268240u: goto label_268240;
        case 0x26826cu: goto label_26826c;
        case 0x268278u: goto label_268278;
        case 0x268280u: goto label_268280;
        default: break;
    }

    ctx->pc = 0x2681f8u;

    // 0x2681f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2681f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2681fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2681fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x268200: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x268200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x268204: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x268204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x268208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26820c: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x26820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x268210: 0x5c40001c  bgtzl       $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x268210u;
    {
        const bool branch_taken_0x268210 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x268210) {
            ctx->pc = 0x268214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268210u;
            // 0x268214: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268284u;
            goto label_268284;
        }
    }
    ctx->pc = 0x268218u;
    // 0x268218: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x268218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26821c: 0x92020293  lbu         $v0, 0x293($s0)
    ctx->pc = 0x26821cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 659)));
    // 0x268220: 0xa2110245  sb          $s1, 0x245($s0)
    ctx->pc = 0x268220u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 581), (uint8_t)GPR_U32(ctx, 17));
    // 0x268224: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x268224u;
    {
        const bool branch_taken_0x268224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268224u;
        // 0x268228: 0xa2000246  sb          $zero, 0x246($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 582), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268224) {
            ctx->pc = 0x268240u;
            goto label_268240;
        }
    }
    ctx->pc = 0x26822Cu;
    // 0x26822c: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x26822cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x268230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268234: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x268234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x268238: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x268238u;
    SET_GPR_U32(ctx, 31, 0x268240u);
    ctx->pc = 0x26823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268238u;
    // 0x26823c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x268238u, 0x268240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268240u;
label_268240:
    // 0x268240: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x268240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x268244: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x268244u;
    {
        const bool branch_taken_0x268244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x268248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268244u;
        // 0x268248: 0xa2110293  sb          $s1, 0x293($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 659), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268244) {
            ctx->pc = 0x268254u;
            goto label_268254;
        }
    }
    ctx->pc = 0x26824Cu;
    // 0x26824c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26824cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268250: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x268250u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_268254:
    // 0x268254: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x268254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x268258: 0x9043bd24  lbu         $v1, -0x42DC($v0)
    ctx->pc = 0x268258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBD24u));
    // 0x26825c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26825Cu;
    {
        const bool branch_taken_0x26825c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26825c) {
            ctx->pc = 0x268278u;
            goto label_268278;
        }
    }
    ctx->pc = 0x268264u;
    // 0x268264: 0xc0c580c  jal         func_316030
    ctx->pc = 0x268264u;
    SET_GPR_U32(ctx, 31, 0x26826Cu);
    ctx->pc = 0x268268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268264u;
    // 0x268268: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316030u, 0x268264u, 0x26826Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26826Cu;
label_26826c:
    // 0x26826c: 0x8e050220  lw          $a1, 0x220($s0)
    ctx->pc = 0x26826cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x268270: 0xc0c86b2  jal         func_321AC8
    ctx->pc = 0x268270u;
    SET_GPR_U32(ctx, 31, 0x268278u);
    ctx->pc = 0x268274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268270u;
    // 0x268274: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321AC8u, 0x268270u, 0x268278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268278u;
label_268278:
    // 0x268278: 0xc099e8c  jal         func_267A30
    ctx->pc = 0x268278u;
    SET_GPR_U32(ctx, 31, 0x268280u);
    ctx->pc = 0x26827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268278u;
    // 0x26827c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A30u, 0x268278u, 0x268280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268280u;
label_268280:
    // 0x268280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x268280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_268284:
    // 0x268284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x268284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x268288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x268288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26828c: 0x3e00008  jr          $ra
    ctx->pc = 0x26828Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26828Cu;
        // 0x268290: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26828Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268294u;
    // 0x268294: 0x0  nop
    ctx->pc = 0x268294u;
    // NOP
    ctx->pc = 0x268298u;
}
