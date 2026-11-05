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

// Function: sub_00108E48
// Address: 0x108e48 - 0x108fd8
void sub_00108E48_0x108e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108E48_0x108e48");
#endif

    switch (ctx->pc) {
        case 0x108e48u: goto label_108e48;
        case 0x108e4cu: goto label_108e4c;
        case 0x108e50u: goto label_108e50;
        case 0x108e54u: goto label_108e54;
        case 0x108e58u: goto label_108e58;
        case 0x108e5cu: goto label_108e5c;
        case 0x108e60u: goto label_108e60;
        case 0x108e64u: goto label_108e64;
        case 0x108e68u: goto label_108e68;
        case 0x108e6cu: goto label_108e6c;
        case 0x108e70u: goto label_108e70;
        case 0x108e74u: goto label_108e74;
        case 0x108e78u: goto label_108e78;
        case 0x108e7cu: goto label_108e7c;
        case 0x108e80u: goto label_108e80;
        case 0x108e84u: goto label_108e84;
        case 0x108e88u: goto label_108e88;
        case 0x108e8cu: goto label_108e8c;
        case 0x108e90u: goto label_108e90;
        case 0x108e94u: goto label_108e94;
        case 0x108e98u: goto label_108e98;
        case 0x108e9cu: goto label_108e9c;
        case 0x108ea0u: goto label_108ea0;
        case 0x108ea4u: goto label_108ea4;
        case 0x108ea8u: goto label_108ea8;
        case 0x108eacu: goto label_108eac;
        case 0x108eb0u: goto label_108eb0;
        case 0x108eb4u: goto label_108eb4;
        case 0x108eb8u: goto label_108eb8;
        case 0x108ebcu: goto label_108ebc;
        case 0x108ec0u: goto label_108ec0;
        case 0x108ec4u: goto label_108ec4;
        case 0x108ec8u: goto label_108ec8;
        case 0x108eccu: goto label_108ecc;
        case 0x108ed0u: goto label_108ed0;
        case 0x108ed4u: goto label_108ed4;
        case 0x108ed8u: goto label_108ed8;
        case 0x108edcu: goto label_108edc;
        case 0x108ee0u: goto label_108ee0;
        case 0x108ee4u: goto label_108ee4;
        case 0x108ee8u: goto label_108ee8;
        case 0x108eecu: goto label_108eec;
        case 0x108ef0u: goto label_108ef0;
        case 0x108ef4u: goto label_108ef4;
        case 0x108ef8u: goto label_108ef8;
        case 0x108efcu: goto label_108efc;
        case 0x108f00u: goto label_108f00;
        case 0x108f04u: goto label_108f04;
        case 0x108f08u: goto label_108f08;
        case 0x108f0cu: goto label_108f0c;
        case 0x108f10u: goto label_108f10;
        case 0x108f14u: goto label_108f14;
        case 0x108f18u: goto label_108f18;
        case 0x108f1cu: goto label_108f1c;
        case 0x108f20u: goto label_108f20;
        case 0x108f24u: goto label_108f24;
        case 0x108f28u: goto label_108f28;
        case 0x108f2cu: goto label_108f2c;
        case 0x108f30u: goto label_108f30;
        case 0x108f34u: goto label_108f34;
        case 0x108f38u: goto label_108f38;
        case 0x108f3cu: goto label_108f3c;
        case 0x108f40u: goto label_108f40;
        case 0x108f44u: goto label_108f44;
        case 0x108f48u: goto label_108f48;
        case 0x108f4cu: goto label_108f4c;
        case 0x108f50u: goto label_108f50;
        case 0x108f54u: goto label_108f54;
        case 0x108f58u: goto label_108f58;
        case 0x108f5cu: goto label_108f5c;
        case 0x108f60u: goto label_108f60;
        case 0x108f64u: goto label_108f64;
        case 0x108f68u: goto label_108f68;
        case 0x108f6cu: goto label_108f6c;
        case 0x108f70u: goto label_108f70;
        case 0x108f74u: goto label_108f74;
        case 0x108f78u: goto label_108f78;
        case 0x108f7cu: goto label_108f7c;
        case 0x108f80u: goto label_108f80;
        case 0x108f84u: goto label_108f84;
        case 0x108f88u: goto label_108f88;
        case 0x108f8cu: goto label_108f8c;
        case 0x108f90u: goto label_108f90;
        case 0x108f94u: goto label_108f94;
        case 0x108f98u: goto label_108f98;
        case 0x108f9cu: goto label_108f9c;
        case 0x108fa0u: goto label_108fa0;
        case 0x108fa4u: goto label_108fa4;
        case 0x108fa8u: goto label_108fa8;
        case 0x108facu: goto label_108fac;
        case 0x108fb0u: goto label_108fb0;
        case 0x108fb4u: goto label_108fb4;
        case 0x108fb8u: goto label_108fb8;
        case 0x108fbcu: goto label_108fbc;
        case 0x108fc0u: goto label_108fc0;
        case 0x108fc4u: goto label_108fc4;
        case 0x108fc8u: goto label_108fc8;
        case 0x108fccu: goto label_108fcc;
        case 0x108fd0u: goto label_108fd0;
        case 0x108fd4u: goto label_108fd4;
        default: break;
    }

    ctx->pc = 0x108e48u;

label_108e48:
    // 0x108e48: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x108e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_108e4c:
    // 0x108e4c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x108e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_108e50:
    // 0x108e50: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x108e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
label_108e54:
    // 0x108e54: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x108e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_108e58:
    // 0x108e58: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x108e58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_108e5c:
    // 0x108e5c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x108e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_108e60:
    // 0x108e60: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x108e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_108e64:
    // 0x108e64: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x108e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_108e68:
    // 0x108e68: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x108e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_108e6c:
    // 0x108e6c: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x108e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
label_108e70:
    // 0x108e70: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x108e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_108e74:
    // 0x108e74: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x108e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_108e78:
    // 0x108e78: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x108e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_108e7c:
    // 0x108e7c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x108e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_108e80:
    // 0x108e80: 0x40f809  jalr        $v0
label_108e84:
    if (ctx->pc == 0x108E84u) {
        ctx->pc = 0x108E88u;
        goto label_108e88;
    }
    ctx->pc = 0x108E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108E88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108E80u, 0x108E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108E88u;
label_108e88:
    // 0x108e88: 0x8c540224  lw          $s4, 0x224($v0)
    ctx->pc = 0x108e88u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 548)));
label_108e8c:
    // 0x108e8c: 0x12800045  beqz        $s4, . + 4 + (0x45 << 2)
label_108e90:
    if (ctx->pc == 0x108E90u) {
        ctx->pc = 0x108E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E8Cu;
        // 0x108e90: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108E94u;
        goto label_108e94;
    }
    ctx->pc = 0x108E8Cu;
    {
        const bool branch_taken_0x108e8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x108E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E8Cu;
        // 0x108e90: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e8c) {
            ctx->pc = 0x108FA4u;
            goto label_108fa4;
        }
    }
    ctx->pc = 0x108E94u;
label_108e94:
    // 0x108e94: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x108e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_108e98:
    // 0x108e98: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x108e98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108e9c:
    // 0x108e9c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x108e9cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_108ea0:
    // 0x108ea0: 0x24420328  addiu       $v0, $v0, 0x328
    ctx->pc = 0x108ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 808));
label_108ea4:
    // 0x108ea4: 0x27a30014  addiu       $v1, $sp, 0x14
    ctx->pc = 0x108ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_108ea8:
    // 0x108ea8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x108ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_108eac:
    // 0x108eac: 0x24a50338  addiu       $a1, $a1, 0x338
    ctx->pc = 0x108eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 824));
label_108eb0:
    // 0x108eb0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x108eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_108eb4:
    // 0x108eb4: 0xc072666  jal         func_1C9998
label_108eb8:
    if (ctx->pc == 0x108EB8u) {
        ctx->pc = 0x108EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EB4u;
        // 0x108eb8: 0xac650018  sw          $a1, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108EBCu;
        goto label_108ebc;
    }
    ctx->pc = 0x108EB4u;
    SET_GPR_U32(ctx, 31, 0x108EBCu);
    ctx->pc = 0x108EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EB4u;
    // 0x108eb8: 0xac650018  sw          $a1, 0x18($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9998u, 0x108EB4u, 0x108EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EBCu;
label_108ebc:
    // 0x108ebc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x108ebcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108ec0:
    // 0x108ec0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x108ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_108ec4:
    // 0x108ec4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x108ec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108ec8:
    // 0x108ec8: 0xc072812  jal         func_1CA048
label_108ecc:
    if (ctx->pc == 0x108ECCu) {
        ctx->pc = 0x108ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EC8u;
        // 0x108ecc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108ED0u;
        goto label_108ed0;
    }
    ctx->pc = 0x108EC8u;
    SET_GPR_U32(ctx, 31, 0x108ED0u);
    ctx->pc = 0x108ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EC8u;
    // 0x108ecc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA048u, 0x108EC8u, 0x108ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108ED0u;
label_108ed0:
    // 0x108ed0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x108ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108ed4:
    // 0x108ed4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x108ed4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108ed8:
    // 0x108ed8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108edc:
    // 0x108edc: 0x0  nop
    ctx->pc = 0x108edcu;
    // NOP
label_108ee0:
    // 0x108ee0: 0xc0ac932  jal         func_2B24C8
label_108ee4:
    if (ctx->pc == 0x108EE4u) {
        ctx->pc = 0x108EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EE0u;
        // 0x108ee4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108EE8u;
        goto label_108ee8;
    }
    ctx->pc = 0x108EE0u;
    SET_GPR_U32(ctx, 31, 0x108EE8u);
    ctx->pc = 0x108EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EE0u;
    // 0x108ee4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B24C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B24C8u, 0x108EE0u, 0x108EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EE8u;
label_108ee8:
    // 0x108ee8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x108ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108eec:
    // 0x108eec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x108eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_108ef0:
    // 0x108ef0: 0x56020003  bnel        $s0, $v0, . + 4 + (0x3 << 2)
label_108ef4:
    if (ctx->pc == 0x108EF4u) {
        ctx->pc = 0x108EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EF0u;
        // 0x108ef4: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108EF8u;
        goto label_108ef8;
    }
    ctx->pc = 0x108EF0u;
    {
        const bool branch_taken_0x108ef0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x108ef0) {
            ctx->pc = 0x108EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108EF0u;
            // 0x108ef4: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108F00u;
            goto label_108f00;
        }
    }
    ctx->pc = 0x108EF8u;
label_108ef8:
    // 0x108ef8: 0x10000018  b           . + 4 + (0x18 << 2)
label_108efc:
    if (ctx->pc == 0x108EFCu) {
        ctx->pc = 0x108EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EF8u;
        // 0x108efc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F00u;
        goto label_108f00;
    }
    ctx->pc = 0x108EF8u;
    {
        const bool branch_taken_0x108ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EF8u;
        // 0x108efc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ef8) {
            ctx->pc = 0x108F5Cu;
            goto label_108f5c;
        }
    }
    ctx->pc = 0x108F00u;
label_108f00:
    // 0x108f00: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x108f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_108f04:
    // 0x108f04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x108f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_108f08:
    // 0x108f08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_108f0c:
    // 0x108f0c: 0xc072818  jal         func_1CA060
label_108f10:
    if (ctx->pc == 0x108F10u) {
        ctx->pc = 0x108F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F0Cu;
        // 0x108f10: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F14u;
        goto label_108f14;
    }
    ctx->pc = 0x108F0Cu;
    SET_GPR_U32(ctx, 31, 0x108F14u);
    ctx->pc = 0x108F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F0Cu;
    // 0x108f10: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA060u, 0x108F0Cu, 0x108F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F14u;
label_108f14:
    // 0x108f14: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
label_108f18:
    if (ctx->pc == 0x108F18u) {
        ctx->pc = 0x108F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F14u;
        // 0x108f18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F1Cu;
        goto label_108f1c;
    }
    ctx->pc = 0x108F14u;
    {
        const bool branch_taken_0x108f14 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x108F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F14u;
        // 0x108f18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f14) {
            ctx->pc = 0x108F38u;
            goto label_108f38;
        }
    }
    ctx->pc = 0x108F1Cu;
label_108f1c:
    // 0x108f1c: 0xc0f6da6  jal         func_3DB698
label_108f20:
    if (ctx->pc == 0x108F20u) {
        ctx->pc = 0x108F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F1Cu;
        // 0x108f20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F24u;
        goto label_108f24;
    }
    ctx->pc = 0x108F1Cu;
    SET_GPR_U32(ctx, 31, 0x108F24u);
    ctx->pc = 0x108F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F1Cu;
    // 0x108f20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x108F1Cu, 0x108F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F24u;
label_108f24:
    // 0x108f24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_108f28:
    if (ctx->pc == 0x108F28u) {
        ctx->pc = 0x108F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F24u;
        // 0x108f28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F2Cu;
        goto label_108f2c;
    }
    ctx->pc = 0x108F24u;
    {
        const bool branch_taken_0x108f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F24u;
        // 0x108f28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f24) {
            ctx->pc = 0x108F38u;
            goto label_108f38;
        }
    }
    ctx->pc = 0x108F2Cu;
label_108f2c:
    // 0x108f2c: 0xc072894  jal         func_1CA250
label_108f30:
    if (ctx->pc == 0x108F30u) {
        ctx->pc = 0x108F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F2Cu;
        // 0x108f30: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F34u;
        goto label_108f34;
    }
    ctx->pc = 0x108F2Cu;
    SET_GPR_U32(ctx, 31, 0x108F34u);
    ctx->pc = 0x108F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F2Cu;
    // 0x108f30: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA250u, 0x108F2Cu, 0x108F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F34u;
label_108f34:
    // 0x108f34: 0x2c2980a  movz        $s3, $s6, $v0
    ctx->pc = 0x108f34u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 22));
label_108f38:
    // 0x108f38: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
label_108f3c:
    if (ctx->pc == 0x108F3Cu) {
        ctx->pc = 0x108F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F38u;
        // 0x108f3c: 0x13880b  movn        $s1, $zero, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F40u;
        goto label_108f40;
    }
    ctx->pc = 0x108F38u;
    {
        const bool branch_taken_0x108f38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x108f38) {
            ctx->pc = 0x108F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108F38u;
            // 0x108f3c: 0x13880b  movn        $s1, $zero, $s3 (Delay Slot)
            if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108F5Cu;
            goto label_108f5c;
        }
    }
    ctx->pc = 0x108F40u;
label_108f40:
    // 0x108f40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x108f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_108f44:
    // 0x108f44: 0xc0f6da6  jal         func_3DB698
label_108f48:
    if (ctx->pc == 0x108F48u) {
        ctx->pc = 0x108F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F44u;
        // 0x108f48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F4Cu;
        goto label_108f4c;
    }
    ctx->pc = 0x108F44u;
    SET_GPR_U32(ctx, 31, 0x108F4Cu);
    ctx->pc = 0x108F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F44u;
    // 0x108f48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x108F44u, 0x108F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F4Cu;
label_108f4c:
    // 0x108f4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x108f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108f50:
    // 0x108f50: 0x2c2900b  movn        $s2, $s6, $v0
    ctx->pc = 0x108f50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 22));
label_108f54:
    // 0x108f54: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
label_108f58:
    if (ctx->pc == 0x108F58u) {
        ctx->pc = 0x108F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F54u;
        // 0x108f58: 0x13880b  movn        $s1, $zero, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F5Cu;
        goto label_108f5c;
    }
    ctx->pc = 0x108F54u;
    {
        const bool branch_taken_0x108f54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x108f54) {
            ctx->pc = 0x108F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108F54u;
            // 0x108f58: 0x13880b  movn        $s1, $zero, $s3 (Delay Slot)
            if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108F5Cu;
            goto label_108f5c;
        }
    }
    ctx->pc = 0x108F5Cu;
label_108f5c:
    // 0x108f5c: 0x5620ffe0  bnel        $s1, $zero, . + 4 + (-0x20 << 2)
label_108f60:
    if (ctx->pc == 0x108F60u) {
        ctx->pc = 0x108F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F5Cu;
        // 0x108f60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F64u;
        goto label_108f64;
    }
    ctx->pc = 0x108F5Cu;
    {
        const bool branch_taken_0x108f5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x108f5c) {
            ctx->pc = 0x108F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108F5Cu;
            // 0x108f60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108ee0;
        }
    }
    ctx->pc = 0x108F64u;
label_108f64:
    // 0x108f64: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_108f68:
    if (ctx->pc == 0x108F68u) {
        ctx->pc = 0x108F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F64u;
        // 0x108f68: 0x27c20338  addiu       $v0, $fp, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F6Cu;
        goto label_108f6c;
    }
    ctx->pc = 0x108F64u;
    {
        const bool branch_taken_0x108f64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F64u;
        // 0x108f68: 0x27c20338  addiu       $v0, $fp, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f64) {
            ctx->pc = 0x108F80u;
            goto label_108f80;
        }
    }
    ctx->pc = 0x108F6Cu;
label_108f6c:
    // 0x108f6c: 0x26e30328  addiu       $v1, $s7, 0x328
    ctx->pc = 0x108f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 808));
label_108f70:
    // 0x108f70: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x108f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_108f74:
    // 0x108f74: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x108f74u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_108f78:
    // 0x108f78: 0x1000000a  b           . + 4 + (0xA << 2)
label_108f7c:
    if (ctx->pc == 0x108F7Cu) {
        ctx->pc = 0x108F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F78u;
        // 0x108f7c: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F80u;
        goto label_108f80;
    }
    ctx->pc = 0x108F78u;
    {
        const bool branch_taken_0x108f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F78u;
        // 0x108f7c: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f78) {
            ctx->pc = 0x108FA4u;
            goto label_108fa4;
        }
    }
    ctx->pc = 0x108F80u;
label_108f80:
    // 0x108f80: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_108f84:
    if (ctx->pc == 0x108F84u) {
        ctx->pc = 0x108F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F80u;
        // 0x108f84: 0x27c30338  addiu       $v1, $fp, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F88u;
        goto label_108f88;
    }
    ctx->pc = 0x108F80u;
    {
        const bool branch_taken_0x108f80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F80u;
        // 0x108f84: 0x27c30338  addiu       $v1, $fp, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f80) {
            ctx->pc = 0x108F90u;
            goto label_108f90;
        }
    }
    ctx->pc = 0x108F88u;
label_108f88:
    // 0x108f88: 0x10000002  b           . + 4 + (0x2 << 2)
label_108f8c:
    if (ctx->pc == 0x108F8Cu) {
        ctx->pc = 0x108F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F88u;
        // 0x108f8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F90u;
        goto label_108f90;
    }
    ctx->pc = 0x108F88u;
    {
        const bool branch_taken_0x108f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F88u;
        // 0x108f8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f88) {
            ctx->pc = 0x108F94u;
            goto label_108f94;
        }
    }
    ctx->pc = 0x108F90u;
label_108f90:
    // 0x108f90: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x108f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_108f94:
    // 0x108f94: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x108f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
label_108f98:
    // 0x108f98: 0x26e20328  addiu       $v0, $s7, 0x328
    ctx->pc = 0x108f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 808));
label_108f9c:
    // 0x108f9c: 0xaea40004  sw          $a0, 0x4($s5)
    ctx->pc = 0x108f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
label_108fa0:
    // 0x108fa0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x108fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_108fa4:
    // 0x108fa4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x108fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_108fa8:
    // 0x108fa8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x108fa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_108fac:
    // 0x108fac: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x108facu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_108fb0:
    // 0x108fb0: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x108fb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_108fb4:
    // 0x108fb4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x108fb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_108fb8:
    // 0x108fb8: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x108fb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_108fbc:
    // 0x108fbc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x108fbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_108fc0:
    // 0x108fc0: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x108fc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_108fc4:
    // 0x108fc4: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x108fc4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_108fc8:
    // 0x108fc8: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x108fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_108fcc:
    // 0x108fcc: 0x3e00008  jr          $ra
label_108fd0:
    if (ctx->pc == 0x108FD0u) {
        ctx->pc = 0x108FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FCCu;
        // 0x108fd0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108FD4u;
        goto label_108fd4;
    }
    ctx->pc = 0x108FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FCCu;
        // 0x108fd0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108FD4u;
label_108fd4:
    // 0x108fd4: 0x0  nop
    ctx->pc = 0x108fd4u;
    // NOP
    ctx->pc = 0x108fd8u;
}
