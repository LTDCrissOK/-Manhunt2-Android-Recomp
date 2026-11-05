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

// Function: sub_002000E0
// Address: 0x2000e0 - 0x200188
void sub_002000E0_0x2000e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002000E0_0x2000e0");
#endif

    switch (ctx->pc) {
        case 0x2000fcu: goto label_2000fc;
        case 0x200130u: goto label_200130;
        case 0x20014cu: goto label_20014c;
        case 0x20016cu: goto label_20016c;
        default: break;
    }

    ctx->pc = 0x2000e0u;

    // 0x2000e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2000e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2000e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2000e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2000e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2000e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2000ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2000ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2000f0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2000f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2000f4: 0xc07f53a  jal         func_1FD4E8
    ctx->pc = 0x2000F4u;
    SET_GPR_U32(ctx, 31, 0x2000FCu);
    ctx->pc = 0x2000F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2000F4u;
    // 0x2000f8: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD4E8u, 0x2000F4u, 0x2000FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2000FCu;
label_2000fc:
    // 0x2000fc: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2000FCu;
    {
        const bool branch_taken_0x2000fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2000fc) {
            ctx->pc = 0x200100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2000FCu;
            // 0x200100: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200178u;
            goto label_200178;
        }
    }
    ctx->pc = 0x200104u;
    // 0x200104: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x200104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x200108: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x200108u;
    {
        const bool branch_taken_0x200108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200108) {
            ctx->pc = 0x20010Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200108u;
            // 0x20010c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200178u;
            goto label_200178;
        }
    }
    ctx->pc = 0x200110u;
    // 0x200110: 0x9202004d  lbu         $v0, 0x4D($s0)
    ctx->pc = 0x200110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x200114: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x200114u;
    {
        const bool branch_taken_0x200114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200114) {
            ctx->pc = 0x200118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200114u;
            // 0x200118: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200178u;
            goto label_200178;
        }
    }
    ctx->pc = 0x20011Cu;
    // 0x20011c: 0x9202004e  lbu         $v0, 0x4E($s0)
    ctx->pc = 0x20011cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x200120: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x200120u;
    {
        const bool branch_taken_0x200120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200120) {
            ctx->pc = 0x200124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200120u;
            // 0x200124: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200178u;
            goto label_200178;
        }
    }
    ctx->pc = 0x200128u;
    // 0x200128: 0xc07fae6  jal         func_1FEB98
    ctx->pc = 0x200128u;
    SET_GPR_U32(ctx, 31, 0x200130u);
    ctx->pc = 0x20012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200128u;
    // 0x20012c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB98u, 0x200128u, 0x200130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200130u;
label_200130:
    // 0x200130: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x200130u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x200134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200138: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x200138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20013c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20013cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200140: 0x24c60710  addiu       $a2, $a2, 0x710
    ctx->pc = 0x200140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1808));
    // 0x200144: 0xc07f982  jal         func_1FE608
    ctx->pc = 0x200144u;
    SET_GPR_U32(ctx, 31, 0x20014Cu);
    ctx->pc = 0x200148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200144u;
    // 0x200148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE608u, 0x200144u, 0x20014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20014Cu;
label_20014c:
    // 0x20014c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20014cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x200150: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x200150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x200154: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x200154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x200158: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x200158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20015c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x20015cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x200160: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x200160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x200164: 0xc08246e  jal         func_2091B8
    ctx->pc = 0x200164u;
    SET_GPR_U32(ctx, 31, 0x20016Cu);
    ctx->pc = 0x200168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200164u;
    // 0x200168: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2091B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2091B8u, 0x200164u, 0x20016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20016Cu;
label_20016c:
    // 0x20016c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20016cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x200170: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x200170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x200174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200178:
    // 0x200178: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x200178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20017c: 0x3e00008  jr          $ra
    ctx->pc = 0x20017Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20017Cu;
        // 0x200180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20017Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200184u;
    // 0x200184: 0x0  nop
    ctx->pc = 0x200184u;
    // NOP
    ctx->pc = 0x200188u;
}
