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

// Function: sub_0016DB48
// Address: 0x16db48 - 0x16dc40
void sub_0016DB48_0x16db48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DB48_0x16db48");
#endif

    switch (ctx->pc) {
        case 0x16db64u: goto label_16db64;
        case 0x16db70u: goto label_16db70;
        case 0x16db80u: goto label_16db80;
        case 0x16db90u: goto label_16db90;
        case 0x16dba0u: goto label_16dba0;
        case 0x16dbc0u: goto label_16dbc0;
        case 0x16dbd8u: goto label_16dbd8;
        case 0x16dbe8u: goto label_16dbe8;
        case 0x16dbf4u: goto label_16dbf4;
        case 0x16dc04u: goto label_16dc04;
        case 0x16dc0cu: goto label_16dc0c;
        case 0x16dc1cu: goto label_16dc1c;
        case 0x16dc2cu: goto label_16dc2c;
        default: break;
    }

    ctx->pc = 0x16db48u;

    // 0x16db48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16db48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16db4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16db4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16db50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16db50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16db54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16db54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16db58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16db5c: 0xc05a618  jal         func_169860
    ctx->pc = 0x16DB5Cu;
    SET_GPR_U32(ctx, 31, 0x16DB64u);
    ctx->pc = 0x16DB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB5Cu;
    // 0x16db60: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16DB5Cu, 0x16DB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB64u;
label_16db64:
    // 0x16db64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16db64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db68: 0xc05bd7e  jal         func_16F5F8
    ctx->pc = 0x16DB68u;
    SET_GPR_U32(ctx, 31, 0x16DB70u);
    ctx->pc = 0x16DB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB68u;
    // 0x16db6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F5F8u, 0x16DB68u, 0x16DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB70u;
label_16db70:
    // 0x16db70: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x16DB70u;
    {
        const bool branch_taken_0x16db70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16db70) {
            ctx->pc = 0x16DB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DB70u;
            // 0x16db74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DC30u;
            goto label_16dc30;
        }
    }
    ctx->pc = 0x16DB78u;
    // 0x16db78: 0xc05bd96  jal         func_16F658
    ctx->pc = 0x16DB78u;
    SET_GPR_U32(ctx, 31, 0x16DB80u);
    ctx->pc = 0x16DB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB78u;
    // 0x16db7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F658u, 0x16DB78u, 0x16DB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB80u;
label_16db80:
    // 0x16db80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DB80u;
    {
        const bool branch_taken_0x16db80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db80) {
            ctx->pc = 0x16DB98u;
            goto label_16db98;
        }
    }
    ctx->pc = 0x16DB88u;
    // 0x16db88: 0xc05bd1e  jal         func_16F478
    ctx->pc = 0x16DB88u;
    SET_GPR_U32(ctx, 31, 0x16DB90u);
    ctx->pc = 0x16DB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB88u;
    // 0x16db8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F478u, 0x16DB88u, 0x16DB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB90u;
label_16db90:
    // 0x16db90: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x16DB90u;
    {
        const bool branch_taken_0x16db90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB90u;
        // 0x16db94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db90) {
            ctx->pc = 0x16DC30u;
            goto label_16dc30;
        }
    }
    ctx->pc = 0x16DB98u;
label_16db98:
    // 0x16db98: 0xc05bd4a  jal         func_16F528
    ctx->pc = 0x16DB98u;
    SET_GPR_U32(ctx, 31, 0x16DBA0u);
    ctx->pc = 0x16DB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB98u;
    // 0x16db9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F528u, 0x16DB98u, 0x16DBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBA0u;
label_16dba0:
    // 0x16dba0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x16DBA0u;
    {
        const bool branch_taken_0x16dba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBA0u;
        // 0x16dba4: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dba0) {
            ctx->pc = 0x16DC2Cu;
            goto label_16dc2c;
        }
    }
    ctx->pc = 0x16DBA8u;
    // 0x16dba8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x16dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16dbac: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x16dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x16dbb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16dbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16dbb8: 0xc05bbb0  jal         func_16EEC0
    ctx->pc = 0x16DBB8u;
    SET_GPR_U32(ctx, 31, 0x16DBC0u);
    ctx->pc = 0x16DBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DBB8u;
    // 0x16dbbc: 0x8c51020c  lw          $s1, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EEC0u, 0x16DBB8u, 0x16DBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBC0u;
label_16dbc0:
    // 0x16dbc0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16DBC0u;
    {
        const bool branch_taken_0x16dbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dbc0) {
            ctx->pc = 0x16DBFCu;
            goto label_16dbfc;
        }
    }
    ctx->pc = 0x16DBC8u;
    // 0x16dbc8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x16dbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x16dbcc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16dbccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16dbd0: 0xc05bbf6  jal         func_16EFD8
    ctx->pc = 0x16DBD0u;
    SET_GPR_U32(ctx, 31, 0x16DBD8u);
    ctx->pc = 0x16DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DBD0u;
    // 0x16dbd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EFD8u, 0x16DBD0u, 0x16DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBD8u;
label_16dbd8:
    // 0x16dbd8: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x16DBD8u;
    {
        const bool branch_taken_0x16dbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16dbd8) {
            ctx->pc = 0x16DBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DBD8u;
            // 0x16dbdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DC30u;
            goto label_16dc30;
        }
    }
    ctx->pc = 0x16DBE0u;
    // 0x16dbe0: 0xc05b9ec  jal         func_16E7B0
    ctx->pc = 0x16DBE0u;
    SET_GPR_U32(ctx, 31, 0x16DBE8u);
    ctx->pc = 0x16DBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DBE0u;
    // 0x16dbe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E7B0u, 0x16DBE0u, 0x16DBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBE8u;
label_16dbe8:
    // 0x16dbe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16dbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbec: 0xc043a20  jal         func_10E880
    ctx->pc = 0x16DBECu;
    SET_GPR_U32(ctx, 31, 0x16DBF4u);
    ctx->pc = 0x16DBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DBECu;
    // 0x16dbf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E880u, 0x16DBECu, 0x16DBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBF4u;
label_16dbf4:
    // 0x16dbf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16DBF4u;
    {
        const bool branch_taken_0x16dbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dbf4) {
            ctx->pc = 0x16DC14u;
            goto label_16dc14;
        }
    }
    ctx->pc = 0x16DBFCu;
label_16dbfc:
    // 0x16dbfc: 0xc05b9ec  jal         func_16E7B0
    ctx->pc = 0x16DBFCu;
    SET_GPR_U32(ctx, 31, 0x16DC04u);
    ctx->pc = 0x16DC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DBFCu;
    // 0x16dc00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E7B0u, 0x16DBFCu, 0x16DC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC04u;
label_16dc04:
    // 0x16dc04: 0xc043a2c  jal         func_10E8B0
    ctx->pc = 0x16DC04u;
    SET_GPR_U32(ctx, 31, 0x16DC0Cu);
    ctx->pc = 0x16DC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC04u;
    // 0x16dc08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8B0u, 0x16DC04u, 0x16DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC0Cu;
label_16dc0c:
    // 0x16dc0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DC0Cu;
    {
        const bool branch_taken_0x16dc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC0Cu;
        // 0x16dc10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc0c) {
            ctx->pc = 0x16DC24u;
            goto label_16dc24;
        }
    }
    ctx->pc = 0x16DC14u;
label_16dc14:
    // 0x16dc14: 0xc05b72c  jal         func_16DCB0
    ctx->pc = 0x16DC14u;
    SET_GPR_U32(ctx, 31, 0x16DC1Cu);
    ctx->pc = 0x16DC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC14u;
    // 0x16dc18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DCB0u, 0x16DC14u, 0x16DC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC1Cu;
label_16dc1c:
    // 0x16dc1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16DC1Cu;
    {
        const bool branch_taken_0x16dc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC1Cu;
        // 0x16dc20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc1c) {
            ctx->pc = 0x16DC30u;
            goto label_16dc30;
        }
    }
    ctx->pc = 0x16DC24u;
label_16dc24:
    // 0x16dc24: 0xc05b7f0  jal         func_16DFC0
    ctx->pc = 0x16DC24u;
    SET_GPR_U32(ctx, 31, 0x16DC2Cu);
    ctx->pc = 0x16DC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC24u;
    // 0x16dc28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DFC0u, 0x16DC24u, 0x16DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC2Cu;
label_16dc2c:
    // 0x16dc2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16dc2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16dc30:
    // 0x16dc30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16dc30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16dc34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16dc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dc38: 0x3e00008  jr          $ra
    ctx->pc = 0x16DC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC38u;
        // 0x16dc3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DC40u;
}
