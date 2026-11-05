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

// Function: sub_00395EB8
// Address: 0x395eb8 - 0x395fc8
void sub_00395EB8_0x395eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395EB8_0x395eb8");
#endif

    switch (ctx->pc) {
        case 0x395eb8u: goto label_395eb8;
        case 0x395ebcu: goto label_395ebc;
        case 0x395ec0u: goto label_395ec0;
        case 0x395ec4u: goto label_395ec4;
        case 0x395ec8u: goto label_395ec8;
        case 0x395eccu: goto label_395ecc;
        case 0x395ed0u: goto label_395ed0;
        case 0x395ed4u: goto label_395ed4;
        case 0x395ed8u: goto label_395ed8;
        case 0x395edcu: goto label_395edc;
        case 0x395ee0u: goto label_395ee0;
        case 0x395ee4u: goto label_395ee4;
        case 0x395ee8u: goto label_395ee8;
        case 0x395eecu: goto label_395eec;
        case 0x395ef0u: goto label_395ef0;
        case 0x395ef4u: goto label_395ef4;
        case 0x395ef8u: goto label_395ef8;
        case 0x395efcu: goto label_395efc;
        case 0x395f00u: goto label_395f00;
        case 0x395f04u: goto label_395f04;
        case 0x395f08u: goto label_395f08;
        case 0x395f0cu: goto label_395f0c;
        case 0x395f10u: goto label_395f10;
        case 0x395f14u: goto label_395f14;
        case 0x395f18u: goto label_395f18;
        case 0x395f1cu: goto label_395f1c;
        case 0x395f20u: goto label_395f20;
        case 0x395f24u: goto label_395f24;
        case 0x395f28u: goto label_395f28;
        case 0x395f2cu: goto label_395f2c;
        case 0x395f30u: goto label_395f30;
        case 0x395f34u: goto label_395f34;
        case 0x395f38u: goto label_395f38;
        case 0x395f3cu: goto label_395f3c;
        case 0x395f40u: goto label_395f40;
        case 0x395f44u: goto label_395f44;
        case 0x395f48u: goto label_395f48;
        case 0x395f4cu: goto label_395f4c;
        case 0x395f50u: goto label_395f50;
        case 0x395f54u: goto label_395f54;
        case 0x395f58u: goto label_395f58;
        case 0x395f5cu: goto label_395f5c;
        case 0x395f60u: goto label_395f60;
        case 0x395f64u: goto label_395f64;
        case 0x395f68u: goto label_395f68;
        case 0x395f6cu: goto label_395f6c;
        case 0x395f70u: goto label_395f70;
        case 0x395f74u: goto label_395f74;
        case 0x395f78u: goto label_395f78;
        case 0x395f7cu: goto label_395f7c;
        case 0x395f80u: goto label_395f80;
        case 0x395f84u: goto label_395f84;
        case 0x395f88u: goto label_395f88;
        case 0x395f8cu: goto label_395f8c;
        case 0x395f90u: goto label_395f90;
        case 0x395f94u: goto label_395f94;
        case 0x395f98u: goto label_395f98;
        case 0x395f9cu: goto label_395f9c;
        case 0x395fa0u: goto label_395fa0;
        case 0x395fa4u: goto label_395fa4;
        case 0x395fa8u: goto label_395fa8;
        case 0x395facu: goto label_395fac;
        case 0x395fb0u: goto label_395fb0;
        case 0x395fb4u: goto label_395fb4;
        case 0x395fb8u: goto label_395fb8;
        case 0x395fbcu: goto label_395fbc;
        case 0x395fc0u: goto label_395fc0;
        case 0x395fc4u: goto label_395fc4;
        default: break;
    }

    ctx->pc = 0x395eb8u;

label_395eb8:
    // 0x395eb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_395ebc:
    // 0x395ebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x395ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_395ec0:
    // 0x395ec0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x395ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_395ec4:
    // 0x395ec4: 0xc0ebe50  jal         func_3AF940
label_395ec8:
    if (ctx->pc == 0x395EC8u) {
        ctx->pc = 0x395ECCu;
        goto label_395ecc;
    }
    ctx->pc = 0x395EC4u;
    SET_GPR_U32(ctx, 31, 0x395ECCu);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x395EC4u, 0x395ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395ECCu;
label_395ecc:
    // 0x395ecc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x395eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_395ed0:
    // 0x395ed0: 0x24500be0  addiu       $s0, $v0, 0xBE0
    ctx->pc = 0x395ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3040));
label_395ed4:
    // 0x395ed4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x395ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395ed8:
    // 0x395ed8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_395edc:
    if (ctx->pc == 0x395EDCu) {
        ctx->pc = 0x395EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395ED8u;
        // 0x395edc: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395EE0u;
        goto label_395ee0;
    }
    ctx->pc = 0x395ED8u;
    {
        const bool branch_taken_0x395ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395ED8u;
        // 0x395edc: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ed8) {
            ctx->pc = 0x395EF0u;
            goto label_395ef0;
        }
    }
    ctx->pc = 0x395EE0u;
label_395ee0:
    // 0x395ee0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_395ee4:
    // 0x395ee4: 0x80ebe56  j           func_3AF958
label_395ee8:
    if (ctx->pc == 0x395EE8u) {
        ctx->pc = 0x395EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395EE4u;
        // 0x395ee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395EECu;
        goto label_395eec;
    }
    ctx->pc = 0x395EE4u;
    ctx->pc = 0x395EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395EE4u;
    // 0x395ee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF958u;
    sub_003AF958_0x3af958(rdram, ctx, runtime); return;
    ctx->pc = 0x395EECu;
label_395eec:
    // 0x395eec: 0x0  nop
    ctx->pc = 0x395eecu;
    // NOP
label_395ef0:
    // 0x395ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x395ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395ef4:
    // 0x395ef4: 0xc0ebe56  jal         func_3AF958
label_395ef8:
    if (ctx->pc == 0x395EF8u) {
        ctx->pc = 0x395EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395EF4u;
        // 0x395ef8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395EFCu;
        goto label_395efc;
    }
    ctx->pc = 0x395EF4u;
    SET_GPR_U32(ctx, 31, 0x395EFCu);
    ctx->pc = 0x395EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395EF4u;
    // 0x395ef8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x395EF4u, 0x395EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395EFCu;
label_395efc:
    // 0x395efc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x395efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_395f00:
    // 0x395f00: 0x8c430be4  lw          $v1, 0xBE4($v0)
    ctx->pc = 0x395f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3044)));
label_395f04:
    // 0x395f04: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_395f08:
    if (ctx->pc == 0x395F08u) {
        ctx->pc = 0x395F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F04u;
        // 0x395f08: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F0Cu;
        goto label_395f0c;
    }
    ctx->pc = 0x395F04u;
    {
        const bool branch_taken_0x395f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F04u;
        // 0x395f08: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395f04) {
            ctx->pc = 0x395F14u;
            goto label_395f14;
        }
    }
    ctx->pc = 0x395F0Cu;
label_395f0c:
    // 0x395f0c: 0x60f809  jalr        $v1
label_395f10:
    if (ctx->pc == 0x395F10u) {
        ctx->pc = 0x395F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F0Cu;
        // 0x395f10: 0x8c440be8  lw          $a0, 0xBE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F14u;
        goto label_395f14;
    }
    ctx->pc = 0x395F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x395F14u);
        ctx->pc = 0x395F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F0Cu;
        // 0x395f10: 0x8c440be8  lw          $a0, 0xBE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3048)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395F0Cu, 0x395F14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395F14u;
label_395f14:
    // 0x395f14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x395f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_395f18:
    // 0x395f18: 0xc0e8ca4  jal         func_3A3290
label_395f1c:
    if (ctx->pc == 0x395F1Cu) {
        ctx->pc = 0x395F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F18u;
        // 0x395f1c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F20u;
        goto label_395f20;
    }
    ctx->pc = 0x395F18u;
    SET_GPR_U32(ctx, 31, 0x395F20u);
    ctx->pc = 0x395F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395F18u;
    // 0x395f1c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3290u, 0x395F18u, 0x395F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395F20u;
label_395f20:
    // 0x395f20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x395f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_395f24:
    // 0x395f24: 0xc0e69ae  jal         func_39A6B8
label_395f28:
    if (ctx->pc == 0x395F28u) {
        ctx->pc = 0x395F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F24u;
        // 0x395f28: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F2Cu;
        goto label_395f2c;
    }
    ctx->pc = 0x395F24u;
    SET_GPR_U32(ctx, 31, 0x395F2Cu);
    ctx->pc = 0x395F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395F24u;
    // 0x395f28: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A6B8u, 0x395F24u, 0x395F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395F2Cu;
label_395f2c:
    // 0x395f2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x395f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_395f30:
    // 0x395f30: 0xc0e6984  jal         func_39A610
label_395f34:
    if (ctx->pc == 0x395F34u) {
        ctx->pc = 0x395F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F30u;
        // 0x395f34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F38u;
        goto label_395f38;
    }
    ctx->pc = 0x395F30u;
    SET_GPR_U32(ctx, 31, 0x395F38u);
    ctx->pc = 0x395F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395F30u;
    // 0x395f34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x395F30u, 0x395F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395F38u;
label_395f38:
    // 0x395f38: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x395f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_395f3c:
    // 0x395f3c: 0xc0e55d0  jal         func_395740
label_395f40:
    if (ctx->pc == 0x395F40u) {
        ctx->pc = 0x395F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F3Cu;
        // 0x395f40: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F44u;
        goto label_395f44;
    }
    ctx->pc = 0x395F3Cu;
    SET_GPR_U32(ctx, 31, 0x395F44u);
    ctx->pc = 0x395F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395F3Cu;
    // 0x395f40: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395740u, 0x395F3Cu, 0x395F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395F44u;
label_395f44:
    // 0x395f44: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x395f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_395f48:
    // 0x395f48: 0xc0e6984  jal         func_39A610
label_395f4c:
    if (ctx->pc == 0x395F4Cu) {
        ctx->pc = 0x395F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F48u;
        // 0x395f4c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F50u;
        goto label_395f50;
    }
    ctx->pc = 0x395F48u;
    SET_GPR_U32(ctx, 31, 0x395F50u);
    ctx->pc = 0x395F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395F48u;
    // 0x395f4c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x395F48u, 0x395F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395F50u;
label_395f50:
    // 0x395f50: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x395f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_395f54:
    // 0x395f54: 0xc0e69ae  jal         func_39A6B8
label_395f58:
    if (ctx->pc == 0x395F58u) {
        ctx->pc = 0x395F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F54u;
        // 0x395f58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F5Cu;
        goto label_395f5c;
    }
    ctx->pc = 0x395F54u;
    SET_GPR_U32(ctx, 31, 0x395F5Cu);
    ctx->pc = 0x395F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395F54u;
    // 0x395f58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A6B8u, 0x395F54u, 0x395F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395F5Cu;
label_395f5c:
    // 0x395f5c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x395f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_395f60:
    // 0x395f60: 0xc0e8ca4  jal         func_3A3290
label_395f64:
    if (ctx->pc == 0x395F64u) {
        ctx->pc = 0x395F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F60u;
        // 0x395f64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F68u;
        goto label_395f68;
    }
    ctx->pc = 0x395F60u;
    SET_GPR_U32(ctx, 31, 0x395F68u);
    ctx->pc = 0x395F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395F60u;
    // 0x395f64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3290u, 0x395F60u, 0x395F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395F68u;
label_395f68:
    // 0x395f68: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x395f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_395f6c:
    // 0x395f6c: 0xc0e69be  jal         func_39A6F8
label_395f70:
    if (ctx->pc == 0x395F70u) {
        ctx->pc = 0x395F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F6Cu;
        // 0x395f70: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F74u;
        goto label_395f74;
    }
    ctx->pc = 0x395F6Cu;
    SET_GPR_U32(ctx, 31, 0x395F74u);
    ctx->pc = 0x395F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395F6Cu;
    // 0x395f70: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A6F8u, 0x395F6Cu, 0x395F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395F74u;
label_395f74:
    // 0x395f74: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x395f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_395f78:
    // 0x395f78: 0x8c430bec  lw          $v1, 0xBEC($v0)
    ctx->pc = 0x395f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3052)));
label_395f7c:
    // 0x395f7c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x395f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_395f80:
    // 0x395f80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_395f84:
    if (ctx->pc == 0x395F84u) {
        ctx->pc = 0x395F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F80u;
        // 0x395f84: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F88u;
        goto label_395f88;
    }
    ctx->pc = 0x395F80u;
    {
        const bool branch_taken_0x395f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F80u;
        // 0x395f84: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395f80) {
            ctx->pc = 0x395F90u;
            goto label_395f90;
        }
    }
    ctx->pc = 0x395F88u;
label_395f88:
    // 0x395f88: 0x60f809  jalr        $v1
label_395f8c:
    if (ctx->pc == 0x395F8Cu) {
        ctx->pc = 0x395F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F88u;
        // 0x395f8c: 0x8c440bf0  lw          $a0, 0xBF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3056)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F90u;
        goto label_395f90;
    }
    ctx->pc = 0x395F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x395F90u);
        ctx->pc = 0x395F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F88u;
        // 0x395f8c: 0x8c440bf0  lw          $a0, 0xBF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3056)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395F88u, 0x395F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395F90u;
label_395f90:
    // 0x395f90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_395f94:
    // 0x395f94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x395f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_395f98:
    // 0x395f98: 0x3e00008  jr          $ra
label_395f9c:
    if (ctx->pc == 0x395F9Cu) {
        ctx->pc = 0x395F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F98u;
        // 0x395f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395FA0u;
        goto label_395fa0;
    }
    ctx->pc = 0x395F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F98u;
        // 0x395f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395FA0u;
label_395fa0:
    // 0x395fa0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x395fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_395fa4:
    // 0x395fa4: 0x0  nop
    ctx->pc = 0x395fa4u;
    // NOP
label_395fa8:
    // 0x395fa8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x395fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_395fac:
    // 0x395fac: 0x0  nop
    ctx->pc = 0x395facu;
    // NOP
label_395fb0:
    // 0x395fb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x395fb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_395fb4:
    // 0x395fb4: 0x0  nop
    ctx->pc = 0x395fb4u;
    // NOP
label_395fb8:
    // 0x395fb8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x395fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_395fbc:
    // 0x395fbc: 0x0  nop
    ctx->pc = 0x395fbcu;
    // NOP
label_395fc0:
    // 0x395fc0: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x395fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
label_395fc4:
    // 0x395fc4: 0x0  nop
    ctx->pc = 0x395fc4u;
    // NOP
    ctx->pc = 0x395fc8u;
}
