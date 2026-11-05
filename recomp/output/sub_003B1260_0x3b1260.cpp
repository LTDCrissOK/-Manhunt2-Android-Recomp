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

// Function: sub_003B1260
// Address: 0x3b1260 - 0x3b1328
void sub_003B1260_0x3b1260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1260_0x3b1260");
#endif

    switch (ctx->pc) {
        case 0x3b1260u: goto label_3b1260;
        case 0x3b1264u: goto label_3b1264;
        case 0x3b1268u: goto label_3b1268;
        case 0x3b126cu: goto label_3b126c;
        case 0x3b1270u: goto label_3b1270;
        case 0x3b1274u: goto label_3b1274;
        case 0x3b1278u: goto label_3b1278;
        case 0x3b127cu: goto label_3b127c;
        case 0x3b1280u: goto label_3b1280;
        case 0x3b1284u: goto label_3b1284;
        case 0x3b1288u: goto label_3b1288;
        case 0x3b128cu: goto label_3b128c;
        case 0x3b1290u: goto label_3b1290;
        case 0x3b1294u: goto label_3b1294;
        case 0x3b1298u: goto label_3b1298;
        case 0x3b129cu: goto label_3b129c;
        case 0x3b12a0u: goto label_3b12a0;
        case 0x3b12a4u: goto label_3b12a4;
        case 0x3b12a8u: goto label_3b12a8;
        case 0x3b12acu: goto label_3b12ac;
        case 0x3b12b0u: goto label_3b12b0;
        case 0x3b12b4u: goto label_3b12b4;
        case 0x3b12b8u: goto label_3b12b8;
        case 0x3b12bcu: goto label_3b12bc;
        case 0x3b12c0u: goto label_3b12c0;
        case 0x3b12c4u: goto label_3b12c4;
        case 0x3b12c8u: goto label_3b12c8;
        case 0x3b12ccu: goto label_3b12cc;
        case 0x3b12d0u: goto label_3b12d0;
        case 0x3b12d4u: goto label_3b12d4;
        case 0x3b12d8u: goto label_3b12d8;
        case 0x3b12dcu: goto label_3b12dc;
        case 0x3b12e0u: goto label_3b12e0;
        case 0x3b12e4u: goto label_3b12e4;
        case 0x3b12e8u: goto label_3b12e8;
        case 0x3b12ecu: goto label_3b12ec;
        case 0x3b12f0u: goto label_3b12f0;
        case 0x3b12f4u: goto label_3b12f4;
        case 0x3b12f8u: goto label_3b12f8;
        case 0x3b12fcu: goto label_3b12fc;
        case 0x3b1300u: goto label_3b1300;
        case 0x3b1304u: goto label_3b1304;
        case 0x3b1308u: goto label_3b1308;
        case 0x3b130cu: goto label_3b130c;
        case 0x3b1310u: goto label_3b1310;
        case 0x3b1314u: goto label_3b1314;
        case 0x3b1318u: goto label_3b1318;
        case 0x3b131cu: goto label_3b131c;
        case 0x3b1320u: goto label_3b1320;
        case 0x3b1324u: goto label_3b1324;
        default: break;
    }

    ctx->pc = 0x3b1260u;

label_3b1260:
    // 0x3b1260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b1260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b1264:
    // 0x3b1264: 0x2cc30034  sltiu       $v1, $a2, 0x34
    ctx->pc = 0x3b1264u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
label_3b1268:
    // 0x3b1268: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b1268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3b126c:
    // 0x3b126c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b126cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b1270:
    // 0x3b1270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b1270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3b1274:
    // 0x3b1274: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x3b1274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3b1278:
    // 0x3b1278: 0x24a40007  addiu       $a0, $a1, 0x7
    ctx->pc = 0x3b1278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_3b127c:
    // 0x3b127c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b127cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1280:
    // 0x3b1280: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b1280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3b1284:
    // 0x3b1284: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b1284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1288:
    // 0x3b1288: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
label_3b128c:
    if (ctx->pc == 0x3B128Cu) {
        ctx->pc = 0x3B128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1288u;
        // 0x3b128c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1290u;
        goto label_3b1290;
    }
    ctx->pc = 0x3B1288u;
    {
        const bool branch_taken_0x3b1288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1288u;
        // 0x3b128c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1288) {
            ctx->pc = 0x3B130Cu;
            goto label_3b130c;
        }
    }
    ctx->pc = 0x3B1290u;
label_3b1290:
    // 0x3b1290: 0x2411fff8  addiu       $s1, $zero, -0x8
    ctx->pc = 0x3b1290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_3b1294:
    // 0x3b1294: 0x918824  and         $s1, $a0, $s1
    ctx->pc = 0x3b1294u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
label_3b1298:
    // 0x3b1298: 0xc0efab3  jal         func_3BEACC
label_3b129c:
    if (ctx->pc == 0x3B129Cu) {
        ctx->pc = 0x3B129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1298u;
        // 0x3b129c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B12A0u;
        goto label_3b12a0;
    }
    ctx->pc = 0x3B1298u;
    SET_GPR_U32(ctx, 31, 0x3B12A0u);
    ctx->pc = 0x3B129Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1298u;
    // 0x3b129c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B1298u, 0x3B12A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B12A0u;
label_3b12a0:
    // 0x3b12a0: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x3b12a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_3b12a4:
    // 0x3b12a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3b12a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b12a8:
    // 0x3b12a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b12a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b12ac:
    // 0x3b12ac: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3b12acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3b12b0:
    // 0x3b12b0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3b12b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3b12b4:
    // 0x3b12b4: 0x40f809  jalr        $v0
label_3b12b8:
    if (ctx->pc == 0x3B12B8u) {
        ctx->pc = 0x3B12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12B4u;
        // 0x3b12b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B12BCu;
        goto label_3b12bc;
    }
    ctx->pc = 0x3B12B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B12BCu);
        ctx->pc = 0x3B12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12B4u;
        // 0x3b12b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B12B4u, 0x3B12BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B12BCu;
label_3b12bc:
    // 0x3b12bc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3b12bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b12c0:
    // 0x3b12c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b12c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b12c4:
    // 0x3b12c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b12c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b12c8:
    // 0x3b12c8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3b12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3b12cc:
    // 0x3b12cc: 0x40f809  jalr        $v0
label_3b12d0:
    if (ctx->pc == 0x3B12D0u) {
        ctx->pc = 0x3B12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12CCu;
        // 0x3b12d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B12D4u;
        goto label_3b12d4;
    }
    ctx->pc = 0x3B12CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B12D4u);
        ctx->pc = 0x3B12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12CCu;
        // 0x3b12d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B12CCu, 0x3B12D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B12D4u;
label_3b12d4:
    // 0x3b12d4: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x3b12d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_3b12d8:
    // 0x3b12d8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3b12d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b12dc:
    // 0x3b12dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b12dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b12e0:
    // 0x3b12e0: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x3b12e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
label_3b12e4:
    // 0x3b12e4: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x3b12e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_3b12e8:
    // 0x3b12e8: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x3b12e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_3b12ec:
    // 0x3b12ec: 0x83800b  movn        $s0, $a0, $v1
    ctx->pc = 0x3b12ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_3b12f0:
    // 0x3b12f0: 0x108083  sra         $s0, $s0, 2
    ctx->pc = 0x3b12f0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 2));
label_3b12f4:
    // 0x3b12f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b12f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b12f8:
    // 0x3b12f8: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x3b12f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
label_3b12fc:
    // 0x3b12fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3b12fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3b1300:
    // 0x3b1300: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x3b1300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_3b1304:
    // 0x3b1304: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x3b1304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_3b1308:
    // 0x3b1308: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x3b1308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_3b130c:
    // 0x3b130c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b130cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b1310:
    // 0x3b1310: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b1310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3b1314:
    // 0x3b1314: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b1314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b1318:
    // 0x3b1318: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3b1318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3b131c:
    // 0x3b131c: 0x3e00008  jr          $ra
label_3b1320:
    if (ctx->pc == 0x3B1320u) {
        ctx->pc = 0x3B1320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B131Cu;
        // 0x3b1320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1324u;
        goto label_3b1324;
    }
    ctx->pc = 0x3B131Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B131Cu;
        // 0x3b1320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B131Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1324u;
label_3b1324:
    // 0x3b1324: 0x0  nop
    ctx->pc = 0x3b1324u;
    // NOP
    ctx->pc = 0x3b1328u;
}
