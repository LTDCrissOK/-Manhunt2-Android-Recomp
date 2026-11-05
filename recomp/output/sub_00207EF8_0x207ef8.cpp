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

// Function: sub_00207EF8
// Address: 0x207ef8 - 0x207ff8
void sub_00207EF8_0x207ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207EF8_0x207ef8");
#endif

    switch (ctx->pc) {
        case 0x207f18u: goto label_207f18;
        case 0x207f28u: goto label_207f28;
        case 0x207f3cu: goto label_207f3c;
        case 0x207f5cu: goto label_207f5c;
        case 0x207f80u: goto label_207f80;
        case 0x207f8cu: goto label_207f8c;
        case 0x207fa4u: goto label_207fa4;
        case 0x207fb8u: goto label_207fb8;
        case 0x207fd8u: goto label_207fd8;
        case 0x207fe0u: goto label_207fe0;
        default: break;
    }

    ctx->pc = 0x207ef8u;

    // 0x207ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x207efc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x207efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x207f00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x207f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x207f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x207f08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x207f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x207f0c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x207f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x207f10: 0xc08209a  jal         func_208268
    ctx->pc = 0x207F10u;
    SET_GPR_U32(ctx, 31, 0x207F18u);
    ctx->pc = 0x207F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F10u;
    // 0x207f14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208268u, 0x207F10u, 0x207F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F18u;
label_207f18:
    // 0x207f18: 0x8e22175c  lw          $v0, 0x175C($s1)
    ctx->pc = 0x207f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5980)));
    // 0x207f1c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x207F1Cu;
    {
        const bool branch_taken_0x207f1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x207F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F1Cu;
        // 0x207f20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f1c) {
            ctx->pc = 0x207F54u;
            goto label_207f54;
        }
    }
    ctx->pc = 0x207F24u;
    // 0x207f24: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x207f24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_207f28:
    // 0x207f28: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x207f28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x207f2c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207F2Cu;
    {
        const bool branch_taken_0x207f2c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x207f2c) {
            ctx->pc = 0x207F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207F2Cu;
            // 0x207f30: 0x8e22175c  lw          $v0, 0x175C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5980)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207F40u;
            goto label_207f40;
        }
    }
    ctx->pc = 0x207F34u;
    // 0x207f34: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x207F34u;
    SET_GPR_U32(ctx, 31, 0x207F3Cu);
    ctx->pc = 0x207F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F34u;
    // 0x207f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x207F34u, 0x207F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F3Cu;
label_207f3c:
    // 0x207f3c: 0x8e22175c  lw          $v0, 0x175C($s1)
    ctx->pc = 0x207f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5980)));
label_207f40:
    // 0x207f40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x207f40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x207f44: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x207f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x207f48: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x207F48u;
    {
        const bool branch_taken_0x207f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F48u;
        // 0x207f4c: 0x261000f8  addiu       $s0, $s0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f48) {
            ctx->pc = 0x207F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207f28;
        }
    }
    ctx->pc = 0x207F50u;
    // 0x207f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_207f54:
    // 0x207f54: 0xc081e92  jal         func_207A48
    ctx->pc = 0x207F54u;
    SET_GPR_U32(ctx, 31, 0x207F5Cu);
    ctx->pc = 0x207F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F54u;
    // 0x207f58: 0x263233b0  addiu       $s2, $s1, 0x33B0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 13232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207A48u, 0x207F54u, 0x207F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F5Cu;
label_207f5c:
    // 0x207f5c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x207f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x207f60: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x207F60u;
    {
        const bool branch_taken_0x207f60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F60u;
        // 0x207f64: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f60) {
            ctx->pc = 0x207FA4u;
            goto label_207fa4;
        }
    }
    ctx->pc = 0x207F68u;
    // 0x207f68: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x207f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x207f6c: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x207f6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x207f70: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x207f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x207f74: 0x50b00009  beql        $a1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x207F74u;
    {
        const bool branch_taken_0x207f74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x207f74) {
            ctx->pc = 0x207F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207F74u;
            // 0x207f78: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207F9Cu;
            goto label_207f9c;
        }
    }
    ctx->pc = 0x207F7Cu;
    // 0x207f7c: 0x2610ffec  addiu       $s0, $s0, -0x14
    ctx->pc = 0x207f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_207f80:
    // 0x207f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f84: 0xc0b4c1a  jal         func_2D3068
    ctx->pc = 0x207F84u;
    SET_GPR_U32(ctx, 31, 0x207F8Cu);
    ctx->pc = 0x207F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F84u;
    // 0x207f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3068u, 0x207F84u, 0x207F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F8Cu;
label_207f8c:
    // 0x207f8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x207f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x207f90: 0x5450fffb  bnel        $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x207F90u;
    {
        const bool branch_taken_0x207f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x207f90) {
            ctx->pc = 0x207F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207F90u;
            // 0x207f94: 0x2610ffec  addiu       $s0, $s0, -0x14 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207f80;
        }
    }
    ctx->pc = 0x207F98u;
    // 0x207f98: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x207f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_207f9c:
    // 0x207f9c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x207F9Cu;
    SET_GPR_U32(ctx, 31, 0x207FA4u);
    ctx->pc = 0x207FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F9Cu;
    // 0x207fa0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x207F9Cu, 0x207FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207FA4u;
label_207fa4:
    // 0x207fa4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x207fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x207fa8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x207FA8u;
    {
        const bool branch_taken_0x207fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x207fa8) {
            ctx->pc = 0x207FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207FA8u;
            // 0x207fac: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207FBCu;
            goto label_207fbc;
        }
    }
    ctx->pc = 0x207FB0u;
    // 0x207fb0: 0xc0b4c1a  jal         func_2D3068
    ctx->pc = 0x207FB0u;
    SET_GPR_U32(ctx, 31, 0x207FB8u);
    ctx->pc = 0x207FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207FB0u;
    // 0x207fb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3068u, 0x207FB0u, 0x207FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207FB8u;
label_207fb8:
    // 0x207fb8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x207fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_207fbc:
    // 0x207fbc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x207fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x207fc0: 0xae20175c  sw          $zero, 0x175C($s1)
    ctx->pc = 0x207fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5980), GPR_U32(ctx, 0));
    // 0x207fc4: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x207fc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x207fc8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207FC8u;
    {
        const bool branch_taken_0x207fc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x207fc8) {
            ctx->pc = 0x207FD8u;
            goto label_207fd8;
        }
    }
    ctx->pc = 0x207FD0u;
    // 0x207fd0: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x207FD0u;
    SET_GPR_U32(ctx, 31, 0x207FD8u);
    ctx->pc = 0x207FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207FD0u;
    // 0x207fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x207FD0u, 0x207FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207FD8u;
label_207fd8:
    // 0x207fd8: 0xc08234a  jal         func_208D28
    ctx->pc = 0x207FD8u;
    SET_GPR_U32(ctx, 31, 0x207FE0u);
    ctx->pc = 0x207FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207FD8u;
    // 0x207fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208D28u, 0x207FD8u, 0x207FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207FE0u;
label_207fe0:
    // 0x207fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207fe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207fe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x207fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207fec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x207fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x207ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x207FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FF0u;
        // 0x207ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207FF8u;
}
