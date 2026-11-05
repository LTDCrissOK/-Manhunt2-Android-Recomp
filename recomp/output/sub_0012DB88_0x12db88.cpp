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

// Function: sub_0012DB88
// Address: 0x12db88 - 0x12dc28
void sub_0012DB88_0x12db88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DB88_0x12db88");
#endif

    switch (ctx->pc) {
        case 0x12dbacu: goto label_12dbac;
        case 0x12dbbcu: goto label_12dbbc;
        case 0x12dbc8u: goto label_12dbc8;
        case 0x12dbe4u: goto label_12dbe4;
        case 0x12dbf8u: goto label_12dbf8;
        case 0x12dc0cu: goto label_12dc0c;
        default: break;
    }

    ctx->pc = 0x12db88u;

    // 0x12db88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12db88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12db8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12db8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12db90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12db90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12db94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12db94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12db98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12db9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12dba0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12dba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12dba4: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12DBA4u;
    SET_GPR_U32(ctx, 31, 0x12DBACu);
    ctx->pc = 0x12DBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DBA4u;
    // 0x12dba8: 0x2405033f  addiu       $a1, $zero, 0x33F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 831));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12DBA4u, 0x12DBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBACu;
label_12dbac:
    // 0x12dbac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12dbacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbb0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12dbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12dbb4: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12DBB4u;
    SET_GPR_U32(ctx, 31, 0x12DBBCu);
    ctx->pc = 0x12DBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DBB4u;
    // 0x12dbb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12DBB4u, 0x12DBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBBCu;
label_12dbbc:
    // 0x12dbbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12dbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbc0: 0xc045f1a  jal         func_117C68
    ctx->pc = 0x12DBC0u;
    SET_GPR_U32(ctx, 31, 0x12DBC8u);
    ctx->pc = 0x12DBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DBC0u;
    // 0x12dbc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C68u, 0x12DBC0u, 0x12DBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBC8u;
label_12dbc8:
    // 0x12dbc8: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x12dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x12dbcc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12dbd0: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x12dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x12dbd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12dbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbd8: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x12dbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x12dbdc: 0xc045f4a  jal         func_117D28
    ctx->pc = 0x12DBDCu;
    SET_GPR_U32(ctx, 31, 0x12DBE4u);
    ctx->pc = 0x12DBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DBDCu;
    // 0x12dbe0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117D28u, 0x12DBDCu, 0x12DBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBE4u;
label_12dbe4:
    // 0x12dbe4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12DBE4u;
    {
        const bool branch_taken_0x12dbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dbe4) {
            ctx->pc = 0x12DBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DBE4u;
            // 0x12dbe8: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DBFCu;
            goto label_12dbfc;
        }
    }
    ctx->pc = 0x12DBECu;
    // 0x12dbec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12dbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbf0: 0xc045f70  jal         func_117DC0
    ctx->pc = 0x12DBF0u;
    SET_GPR_U32(ctx, 31, 0x12DBF8u);
    ctx->pc = 0x12DBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DBF0u;
    // 0x12dbf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117DC0u, 0x12DBF0u, 0x12DBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBF8u;
label_12dbf8:
    // 0x12dbf8: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x12dbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_12dbfc:
    // 0x12dbfc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12dbfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc00: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x12dc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12dc04: 0xc04c662  jal         func_131988
    ctx->pc = 0x12DC04u;
    SET_GPR_U32(ctx, 31, 0x12DC0Cu);
    ctx->pc = 0x12DC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC04u;
    // 0x12dc08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12DC04u, 0x12DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC0Cu;
label_12dc0c:
    // 0x12dc0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12dc0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dc10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12dc10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12dc14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12dc14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dc18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12dc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12dc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x12DC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC1Cu;
        // 0x12dc20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DC24u;
    // 0x12dc24: 0x0  nop
    ctx->pc = 0x12dc24u;
    // NOP
    ctx->pc = 0x12dc28u;
}
