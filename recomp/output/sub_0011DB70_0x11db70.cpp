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

// Function: sub_0011DB70
// Address: 0x11db70 - 0x11dcb8
void sub_0011DB70_0x11db70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DB70_0x11db70");
#endif

    switch (ctx->pc) {
        case 0x11db98u: goto label_11db98;
        case 0x11dbacu: goto label_11dbac;
        case 0x11dbd0u: goto label_11dbd0;
        case 0x11dbfcu: goto label_11dbfc;
        case 0x11dc10u: goto label_11dc10;
        case 0x11dc38u: goto label_11dc38;
        case 0x11dc64u: goto label_11dc64;
        case 0x11dc78u: goto label_11dc78;
        case 0x11dc84u: goto label_11dc84;
        default: break;
    }

    ctx->pc = 0x11db70u;

    // 0x11db70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11db70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11db74: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x11db74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x11db78: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x11db78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x11db7c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11db7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11db80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11db80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11db84: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x11DB84u;
    {
        const bool branch_taken_0x11db84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB84u;
        // 0x11db88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db84) {
            ctx->pc = 0x11DCA0u;
            goto label_11dca0;
        }
    }
    ctx->pc = 0x11DB8Cu;
    // 0x11db8c: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x11db8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x11db90: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x11db90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x11db94: 0x0  nop
    ctx->pc = 0x11db94u;
    // NOP
label_11db98:
    // 0x11db98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11db9c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DB9Cu;
    {
        const bool branch_taken_0x11db9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11db9c) {
            ctx->pc = 0x11DBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DB9Cu;
            // 0x11dba0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DBB4u;
            goto label_11dbb4;
        }
    }
    ctx->pc = 0x11DBA4u;
    // 0x11dba4: 0xc0478ce  jal         func_11E338
    ctx->pc = 0x11DBA4u;
    SET_GPR_U32(ctx, 31, 0x11DBACu);
    ctx->pc = 0x11DBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DBA4u;
    // 0x11dba8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E338u, 0x11DBA4u, 0x11DBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBACu;
label_11dbac:
    // 0x11dbac: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x11DBACu;
    {
        const bool branch_taken_0x11dbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBACu;
        // 0x11dbb0: 0x2605c308  addiu       $a1, $s0, -0x3CF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbac) {
            ctx->pc = 0x11DC7Cu;
            goto label_11dc7c;
        }
    }
    ctx->pc = 0x11DBB4u;
label_11dbb4:
    // 0x11dbb4: 0x28a20041  slti        $v0, $a1, 0x41
    ctx->pc = 0x11dbb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x11dbb8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11DBB8u;
    {
        const bool branch_taken_0x11dbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBB8u;
        // 0x11dbbc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbb8) {
            ctx->pc = 0x11DB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11db98;
        }
    }
    ctx->pc = 0x11DBC0u;
    // 0x11dbc0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11dbc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dbc4: 0x3c070044  lui         $a3, 0x44
    ctx->pc = 0x11dbc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)68 << 16));
    // 0x11dbc8: 0x3c110044  lui         $s1, 0x44
    ctx->pc = 0x11dbc8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)68 << 16));
    // 0x11dbcc: 0x24900310  addiu       $s0, $a0, 0x310
    ctx->pc = 0x11dbccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
label_11dbd0:
    // 0x11dbd0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11dbd4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11DBD4u;
    {
        const bool branch_taken_0x11dbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBD4u;
        // 0x11dbd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbd4) {
            ctx->pc = 0x11DC18u;
            goto label_11dc18;
        }
    }
    ctx->pc = 0x11DBDCu;
    // 0x11dbdc: 0x27a40002  addiu       $a0, $sp, 0x2
    ctx->pc = 0x11dbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x11dbe0: 0x24e9c328  addiu       $t1, $a3, -0x3CD8
    ctx->pc = 0x11dbe0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951720));
    // 0x11dbe4: 0x81220000  lb          $v0, 0x0($t1)
    ctx->pc = 0x11dbe4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11dbe8: 0x81230001  lb          $v1, 0x1($t1)
    ctx->pc = 0x11dbe8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x11dbec: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x11dbecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11dbf0: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x11dbf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x11dbf4: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x11DBF4u;
    SET_GPR_U32(ctx, 31, 0x11DBFCu);
    ctx->pc = 0x11DBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DBF4u;
    // 0x11dbf8: 0x2406007e  addiu       $a2, $zero, 0x7E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x11DBF4u, 0x11DBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBFCu;
label_11dbfc:
    // 0x11dbfc: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x11dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x11dc00: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11DC00u;
    {
        const bool branch_taken_0x11dc00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC00u;
        // 0x11dc04: 0x2625c330  addiu       $a1, $s1, -0x3CD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294951728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc00) {
            ctx->pc = 0x11DC7Cu;
            goto label_11dc7c;
        }
    }
    ctx->pc = 0x11DC08u;
    // 0x11dc08: 0xc0aaf3c  jal         func_2ABCF0
    ctx->pc = 0x11DC08u;
    SET_GPR_U32(ctx, 31, 0x11DC10u);
    ctx->pc = 0x11DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC08u;
    // 0x11dc0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABCF0u, 0x11DC08u, 0x11DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC10u;
label_11dc10:
    // 0x11dc10: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11DC10u;
    {
        const bool branch_taken_0x11dc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC10u;
        // 0x11dc14: 0x2625c330  addiu       $a1, $s1, -0x3CD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294951728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc10) {
            ctx->pc = 0x11DC7Cu;
            goto label_11dc7c;
        }
    }
    ctx->pc = 0x11DC18u;
label_11dc18:
    // 0x11dc18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11dc1c: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x11dc1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x11dc20: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11DC20u;
    {
        const bool branch_taken_0x11dc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC20u;
        // 0x11dc24: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc20) {
            ctx->pc = 0x11DBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dbd0;
        }
    }
    ctx->pc = 0x11DC28u;
    // 0x11dc28: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11dc28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc2c: 0x3c070044  lui         $a3, 0x44
    ctx->pc = 0x11dc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)68 << 16));
    // 0x11dc30: 0x3c110044  lui         $s1, 0x44
    ctx->pc = 0x11dc30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)68 << 16));
    // 0x11dc34: 0x24900410  addiu       $s0, $a0, 0x410
    ctx->pc = 0x11dc34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1040));
label_11dc38:
    // 0x11dc38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11dc3c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11DC3Cu;
    {
        const bool branch_taken_0x11dc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC3Cu;
        // 0x11dc40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc3c) {
            ctx->pc = 0x11DC8Cu;
            goto label_11dc8c;
        }
    }
    ctx->pc = 0x11DC44u;
    // 0x11dc44: 0x27a40002  addiu       $a0, $sp, 0x2
    ctx->pc = 0x11dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x11dc48: 0x24e9c328  addiu       $t1, $a3, -0x3CD8
    ctx->pc = 0x11dc48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951720));
    // 0x11dc4c: 0x81220000  lb          $v0, 0x0($t1)
    ctx->pc = 0x11dc4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11dc50: 0x81230001  lb          $v1, 0x1($t1)
    ctx->pc = 0x11dc50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x11dc54: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x11dc54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11dc58: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x11dc58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x11dc5c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x11DC5Cu;
    SET_GPR_U32(ctx, 31, 0x11DC64u);
    ctx->pc = 0x11DC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC5Cu;
    // 0x11dc60: 0x2406007e  addiu       $a2, $zero, 0x7E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x11DC5Cu, 0x11DC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC64u;
label_11dc64:
    // 0x11dc64: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x11dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x11dc68: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DC68u;
    {
        const bool branch_taken_0x11dc68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC68u;
        // 0x11dc6c: 0x2625c358  addiu       $a1, $s1, -0x3CA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294951768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc68) {
            ctx->pc = 0x11DC7Cu;
            goto label_11dc7c;
        }
    }
    ctx->pc = 0x11DC70u;
    // 0x11dc70: 0xc0aaf3c  jal         func_2ABCF0
    ctx->pc = 0x11DC70u;
    SET_GPR_U32(ctx, 31, 0x11DC78u);
    ctx->pc = 0x11DC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC70u;
    // 0x11dc74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABCF0u, 0x11DC70u, 0x11DC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC78u;
label_11dc78:
    // 0x11dc78: 0x2625c358  addiu       $a1, $s1, -0x3CA8
    ctx->pc = 0x11dc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294951768));
label_11dc7c:
    // 0x11dc7c: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x11DC7Cu;
    SET_GPR_U32(ctx, 31, 0x11DC84u);
    ctx->pc = 0x11DC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC7Cu;
    // 0x11dc80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x11DC7Cu, 0x11DC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC84u;
label_11dc84:
    // 0x11dc84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11DC84u;
    {
        const bool branch_taken_0x11dc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC84u;
        // 0x11dc88: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc84) {
            ctx->pc = 0x11DCA4u;
            goto label_11dca4;
        }
    }
    ctx->pc = 0x11DC8Cu;
label_11dc8c:
    // 0x11dc8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11dc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11dc90: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x11dc90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x11dc94: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x11DC94u;
    {
        const bool branch_taken_0x11dc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC94u;
        // 0x11dc98: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc94) {
            ctx->pc = 0x11DC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dc38;
        }
    }
    ctx->pc = 0x11DC9Cu;
    // 0x11dc9c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x11dc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_11dca0:
    // 0x11dca0: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x11dca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_11dca4:
    // 0x11dca4: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x11dca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x11dca8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11dca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11dcac: 0x3e00008  jr          $ra
    ctx->pc = 0x11DCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCACu;
        // 0x11dcb0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DCB4u;
    // 0x11dcb4: 0x0  nop
    ctx->pc = 0x11dcb4u;
    // NOP
    ctx->pc = 0x11dcb8u;
}
