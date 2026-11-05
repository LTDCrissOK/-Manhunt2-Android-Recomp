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

// Function: sub_0029DB10
// Address: 0x29db10 - 0x29dc28
void sub_0029DB10_0x29db10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DB10_0x29db10");
#endif

    switch (ctx->pc) {
        case 0x29db10u: goto label_29db10;
        case 0x29db14u: goto label_29db14;
        case 0x29db18u: goto label_29db18;
        case 0x29db1cu: goto label_29db1c;
        case 0x29db20u: goto label_29db20;
        case 0x29db24u: goto label_29db24;
        case 0x29db28u: goto label_29db28;
        case 0x29db2cu: goto label_29db2c;
        case 0x29db30u: goto label_29db30;
        case 0x29db34u: goto label_29db34;
        case 0x29db38u: goto label_29db38;
        case 0x29db3cu: goto label_29db3c;
        case 0x29db40u: goto label_29db40;
        case 0x29db44u: goto label_29db44;
        case 0x29db48u: goto label_29db48;
        case 0x29db4cu: goto label_29db4c;
        case 0x29db50u: goto label_29db50;
        case 0x29db54u: goto label_29db54;
        case 0x29db58u: goto label_29db58;
        case 0x29db5cu: goto label_29db5c;
        case 0x29db60u: goto label_29db60;
        case 0x29db64u: goto label_29db64;
        case 0x29db68u: goto label_29db68;
        case 0x29db6cu: goto label_29db6c;
        case 0x29db70u: goto label_29db70;
        case 0x29db74u: goto label_29db74;
        case 0x29db78u: goto label_29db78;
        case 0x29db7cu: goto label_29db7c;
        case 0x29db80u: goto label_29db80;
        case 0x29db84u: goto label_29db84;
        case 0x29db88u: goto label_29db88;
        case 0x29db8cu: goto label_29db8c;
        case 0x29db90u: goto label_29db90;
        case 0x29db94u: goto label_29db94;
        case 0x29db98u: goto label_29db98;
        case 0x29db9cu: goto label_29db9c;
        case 0x29dba0u: goto label_29dba0;
        case 0x29dba4u: goto label_29dba4;
        case 0x29dba8u: goto label_29dba8;
        case 0x29dbacu: goto label_29dbac;
        case 0x29dbb0u: goto label_29dbb0;
        case 0x29dbb4u: goto label_29dbb4;
        case 0x29dbb8u: goto label_29dbb8;
        case 0x29dbbcu: goto label_29dbbc;
        case 0x29dbc0u: goto label_29dbc0;
        case 0x29dbc4u: goto label_29dbc4;
        case 0x29dbc8u: goto label_29dbc8;
        case 0x29dbccu: goto label_29dbcc;
        case 0x29dbd0u: goto label_29dbd0;
        case 0x29dbd4u: goto label_29dbd4;
        case 0x29dbd8u: goto label_29dbd8;
        case 0x29dbdcu: goto label_29dbdc;
        case 0x29dbe0u: goto label_29dbe0;
        case 0x29dbe4u: goto label_29dbe4;
        case 0x29dbe8u: goto label_29dbe8;
        case 0x29dbecu: goto label_29dbec;
        case 0x29dbf0u: goto label_29dbf0;
        case 0x29dbf4u: goto label_29dbf4;
        case 0x29dbf8u: goto label_29dbf8;
        case 0x29dbfcu: goto label_29dbfc;
        case 0x29dc00u: goto label_29dc00;
        case 0x29dc04u: goto label_29dc04;
        case 0x29dc08u: goto label_29dc08;
        case 0x29dc0cu: goto label_29dc0c;
        case 0x29dc10u: goto label_29dc10;
        case 0x29dc14u: goto label_29dc14;
        case 0x29dc18u: goto label_29dc18;
        case 0x29dc1cu: goto label_29dc1c;
        case 0x29dc20u: goto label_29dc20;
        case 0x29dc24u: goto label_29dc24;
        default: break;
    }

    ctx->pc = 0x29db10u;

label_29db10:
    // 0x29db10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29db10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29db14:
    // 0x29db14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29db14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29db18:
    // 0x29db18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29db18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29db1c:
    // 0x29db1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29db1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29db20:
    // 0x29db20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29db20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29db24:
    // 0x29db24: 0xc0a7d12  jal         func_29F448
label_29db28:
    if (ctx->pc == 0x29DB28u) {
        ctx->pc = 0x29DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB24u;
        // 0x29db28: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB2Cu;
        goto label_29db2c;
    }
    ctx->pc = 0x29DB24u;
    SET_GPR_U32(ctx, 31, 0x29DB2Cu);
    ctx->pc = 0x29DB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DB24u;
    // 0x29db28: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F448u, 0x29DB24u, 0x29DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DB2Cu;
label_29db2c:
    // 0x29db2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_29db30:
    if (ctx->pc == 0x29DB30u) {
        ctx->pc = 0x29DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB2Cu;
        // 0x29db30: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB34u;
        goto label_29db34;
    }
    ctx->pc = 0x29DB2Cu;
    {
        const bool branch_taken_0x29db2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB2Cu;
        // 0x29db30: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db2c) {
            ctx->pc = 0x29DB54u;
            goto label_29db54;
        }
    }
    ctx->pc = 0x29DB34u;
label_29db34:
    // 0x29db34: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
label_29db38:
    if (ctx->pc == 0x29DB38u) {
        ctx->pc = 0x29DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB34u;
        // 0x29db38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB3Cu;
        goto label_29db3c;
    }
    ctx->pc = 0x29DB34u;
    {
        const bool branch_taken_0x29db34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB34u;
        // 0x29db38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db34) {
            ctx->pc = 0x29DC14u;
            goto label_29dc14;
        }
    }
    ctx->pc = 0x29DB3Cu;
label_29db3c:
    // 0x29db3c: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x29db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_29db40:
    // 0x29db40: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x29db40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_29db44:
    // 0x29db44: 0x40f809  jalr        $v0
label_29db48:
    if (ctx->pc == 0x29DB48u) {
        ctx->pc = 0x29DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB44u;
        // 0x29db48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB4Cu;
        goto label_29db4c;
    }
    ctx->pc = 0x29DB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29DB4Cu);
        ctx->pc = 0x29DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB44u;
        // 0x29db48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DB44u, 0x29DB4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29DB4Cu;
label_29db4c:
    // 0x29db4c: 0x10000032  b           . + 4 + (0x32 << 2)
label_29db50:
    if (ctx->pc == 0x29DB50u) {
        ctx->pc = 0x29DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB4Cu;
        // 0x29db50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB54u;
        goto label_29db54;
    }
    ctx->pc = 0x29DB4Cu;
    {
        const bool branch_taken_0x29db4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB4Cu;
        // 0x29db50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db4c) {
            ctx->pc = 0x29DC18u;
            goto label_29dc18;
        }
    }
    ctx->pc = 0x29DB54u;
label_29db54:
    // 0x29db54: 0x3c013a03  lui         $at, 0x3A03
    ctx->pc = 0x29db54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14851 << 16));
label_29db58:
    // 0x29db58: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x29db58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_29db5c:
    // 0x29db5c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29db5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_29db60:
    // 0x29db60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29db60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29db64:
    // 0x29db64: 0x26290014  addiu       $t1, $s1, 0x14
    ctx->pc = 0x29db64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_29db68:
    // 0x29db68: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x29db68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_29db6c:
    // 0x29db6c: 0xa81018  mult        $v0, $a1, $t0
    ctx->pc = 0x29db6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29db70:
    // 0x29db70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29db70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29db74:
    // 0x29db74: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x29db74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_29db78:
    // 0x29db78: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x29db78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_29db7c:
    // 0x29db7c: 0x0  nop
    ctx->pc = 0x29db7cu;
    // NOP
label_29db80:
    // 0x29db80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29db80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29db84:
    // 0x29db84: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_29db88:
    if (ctx->pc == 0x29DB88u) {
        ctx->pc = 0x29DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB84u;
        // 0x29db88: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB8Cu;
        goto label_29db8c;
    }
    ctx->pc = 0x29DB84u;
    {
        const bool branch_taken_0x29db84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29db84) {
            ctx->pc = 0x29DB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DB84u;
            // 0x29db88: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DBC4u;
            goto label_29dbc4;
        }
    }
    ctx->pc = 0x29DB8Cu;
label_29db8c:
    // 0x29db8c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x29db8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29db90:
    // 0x29db90: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x29db90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29db94:
    // 0x29db94: 0x46030080  add.s       $f2, $f0, $f3
    ctx->pc = 0x29db94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_29db98:
    // 0x29db98: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x29db98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_29db9c:
    // 0x29db9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29db9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29dba0:
    // 0x29dba0: 0x0  nop
    ctx->pc = 0x29dba0u;
    // NOP
label_29dba4:
    // 0x29dba4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_29dba8:
    if (ctx->pc == 0x29DBA8u) {
        ctx->pc = 0x29DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBA4u;
        // 0x29dba8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBACu;
        goto label_29dbac;
    }
    ctx->pc = 0x29DBA4u;
    {
        const bool branch_taken_0x29dba4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29dba4) {
            ctx->pc = 0x29DBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DBA4u;
            // 0x29dba8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DBC4u;
            goto label_29dbc4;
        }
    }
    ctx->pc = 0x29DBACu;
label_29dbac:
    // 0x29dbac: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x29dbacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29dbb0:
    // 0x29dbb0: 0x0  nop
    ctx->pc = 0x29dbb0u;
    // NOP
label_29dbb4:
    // 0x29dbb4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_29dbb8:
    if (ctx->pc == 0x29DBB8u) {
        ctx->pc = 0x29DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBB4u;
        // 0x29dbb8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBBCu;
        goto label_29dbbc;
    }
    ctx->pc = 0x29DBB4u;
    {
        const bool branch_taken_0x29dbb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29dbb4) {
            ctx->pc = 0x29DBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DBB4u;
            // 0x29dbb8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DBC4u;
            goto label_29dbc4;
        }
    }
    ctx->pc = 0x29DBBCu;
label_29dbbc:
    // 0x29dbbc: 0x10000004  b           . + 4 + (0x4 << 2)
label_29dbc0:
    if (ctx->pc == 0x29DBC0u) {
        ctx->pc = 0x29DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBBCu;
        // 0x29dbc0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBC4u;
        goto label_29dbc4;
    }
    ctx->pc = 0x29DBBCu;
    {
        const bool branch_taken_0x29dbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBBCu;
        // 0x29dbc0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbbc) {
            ctx->pc = 0x29DBD0u;
            goto label_29dbd0;
        }
    }
    ctx->pc = 0x29DBC4u;
label_29dbc4:
    // 0x29dbc4: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x29dbc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_29dbc8:
    // 0x29dbc8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_29dbcc:
    if (ctx->pc == 0x29DBCCu) {
        ctx->pc = 0x29DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBC8u;
        // 0x29dbcc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBD0u;
        goto label_29dbd0;
    }
    ctx->pc = 0x29DBC8u;
    {
        const bool branch_taken_0x29dbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBC8u;
        // 0x29dbcc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbc8) {
            ctx->pc = 0x29DB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29db80;
        }
    }
    ctx->pc = 0x29DBD0u;
label_29dbd0:
    // 0x29dbd0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x29dbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29dbd4:
    // 0x29dbd4: 0x2ca20019  sltiu       $v0, $a1, 0x19
    ctx->pc = 0x29dbd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_29dbd8:
    // 0x29dbd8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_29dbdc:
    if (ctx->pc == 0x29DBDCu) {
        ctx->pc = 0x29DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBD8u;
        // 0x29dbdc: 0xa81018  mult        $v0, $a1, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBE0u;
        goto label_29dbe0;
    }
    ctx->pc = 0x29DBD8u;
    {
        const bool branch_taken_0x29dbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBD8u;
        // 0x29dbdc: 0xa81018  mult        $v0, $a1, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbd8) {
            ctx->pc = 0x29DB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29db70;
        }
    }
    ctx->pc = 0x29DBE0u;
label_29dbe0:
    // 0x29dbe0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29dbe4:
    // 0x29dbe4: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
label_29dbe8:
    if (ctx->pc == 0x29DBE8u) {
        ctx->pc = 0x29DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBE4u;
        // 0x29dbe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBECu;
        goto label_29dbec;
    }
    ctx->pc = 0x29DBE4u;
    {
        const bool branch_taken_0x29dbe4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x29DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBE4u;
        // 0x29dbe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbe4) {
            ctx->pc = 0x29DC00u;
            goto label_29dc00;
        }
    }
    ctx->pc = 0x29DBECu;
label_29dbec:
    // 0x29dbec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29dbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29dbf0:
    // 0x29dbf0: 0xc0a770a  jal         func_29DC28
label_29dbf4:
    if (ctx->pc == 0x29DBF4u) {
        ctx->pc = 0x29DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBF0u;
        // 0x29dbf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBF8u;
        goto label_29dbf8;
    }
    ctx->pc = 0x29DBF0u;
    SET_GPR_U32(ctx, 31, 0x29DBF8u);
    ctx->pc = 0x29DBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DBF0u;
    // 0x29dbf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DC28u, 0x29DBF0u, 0x29DBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DBF8u;
label_29dbf8:
    // 0x29dbf8: 0x10000004  b           . + 4 + (0x4 << 2)
label_29dbfc:
    if (ctx->pc == 0x29DBFCu) {
        ctx->pc = 0x29DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBF8u;
        // 0x29dbfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DC00u;
        goto label_29dc00;
    }
    ctx->pc = 0x29DBF8u;
    {
        const bool branch_taken_0x29dbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBF8u;
        // 0x29dbfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbf8) {
            ctx->pc = 0x29DC0Cu;
            goto label_29dc0c;
        }
    }
    ctx->pc = 0x29DC00u;
label_29dc00:
    // 0x29dc00: 0xc0a7718  jal         func_29DC60
label_29dc04:
    if (ctx->pc == 0x29DC04u) {
        ctx->pc = 0x29DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC00u;
        // 0x29dc04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DC08u;
        goto label_29dc08;
    }
    ctx->pc = 0x29DC00u;
    SET_GPR_U32(ctx, 31, 0x29DC08u);
    ctx->pc = 0x29DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DC00u;
    // 0x29dc04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DC60u, 0x29DC00u, 0x29DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DC08u;
label_29dc08:
    // 0x29dc08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29dc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29dc0c:
    // 0x29dc0c: 0xc0a7ca2  jal         func_29F288
label_29dc10:
    if (ctx->pc == 0x29DC10u) {
        ctx->pc = 0x29DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC0Cu;
        // 0x29dc10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DC14u;
        goto label_29dc14;
    }
    ctx->pc = 0x29DC0Cu;
    SET_GPR_U32(ctx, 31, 0x29DC14u);
    ctx->pc = 0x29DC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DC0Cu;
    // 0x29dc10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F288u, 0x29DC0Cu, 0x29DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DC14u;
label_29dc14:
    // 0x29dc14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29dc14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29dc18:
    // 0x29dc18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29dc18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29dc1c:
    // 0x29dc1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29dc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29dc20:
    // 0x29dc20: 0x3e00008  jr          $ra
label_29dc24:
    if (ctx->pc == 0x29DC24u) {
        ctx->pc = 0x29DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC20u;
        // 0x29dc24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DC28u;
        goto label_fallthrough_0x29dc20;
    }
    ctx->pc = 0x29DC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC20u;
        // 0x29dc24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29dc20:
    ctx->pc = 0x29DC28u;
}
