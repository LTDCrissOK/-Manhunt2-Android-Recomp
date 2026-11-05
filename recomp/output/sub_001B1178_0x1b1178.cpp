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

// Function: sub_001B1178
// Address: 0x1b1178 - 0x1b12c0
void sub_001B1178_0x1b1178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1178_0x1b1178");
#endif

    switch (ctx->pc) {
        case 0x1b1224u: goto label_1b1224;
        case 0x1b123cu: goto label_1b123c;
        case 0x1b1248u: goto label_1b1248;
        case 0x1b1258u: goto label_1b1258;
        case 0x1b1270u: goto label_1b1270;
        default: break;
    }

    ctx->pc = 0x1b1178u;

    // 0x1b1178: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b1178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b117c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b117cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b1180: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b1180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b1184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1188: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b1188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b118c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b118cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b1190: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b1190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b1194: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x1b1194u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1b1198: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x1b1198u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b119c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1b119cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1b11a0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1b11a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b11a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b11a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b11a8: 0x10c3003c  beq         $a2, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1B11A8u;
    {
        const bool branch_taken_0x1b11a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11A8u;
        // 0x1b11ac: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11a8) {
            ctx->pc = 0x1B129Cu;
            goto label_1b129c;
        }
    }
    ctx->pc = 0x1B11B0u;
    // 0x1b11b0: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B11B0u;
    {
        const bool branch_taken_0x1b11b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B11B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11B0u;
        // 0x1b11b4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11b0) {
            ctx->pc = 0x1B11D0u;
            goto label_1b11d0;
        }
    }
    ctx->pc = 0x1B11B8u;
    // 0x1b11b8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1b11b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1b11bc: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1b11bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b11c0: 0x24638658  addiu       $v1, $v1, -0x79A8
    ctx->pc = 0x1b11c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936152));
    // 0x1b11c4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1b11c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b11c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b11cc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1b11ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b11d0:
    // 0x1b11d0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b11d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b11d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b11d8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1b11d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1b11dc: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1b11dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1b11e0: 0x1465002f  bne         $v1, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1B11E0u;
    {
        const bool branch_taken_0x1b11e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B11E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11E0u;
        // 0x1b11e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11e0) {
            ctx->pc = 0x1B12A0u;
            goto label_1b12a0;
        }
    }
    ctx->pc = 0x1B11E8u;
    // 0x1b11e8: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x1b11e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1b11ec: 0x5060002d  beql        $v1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x1B11ECu;
    {
        const bool branch_taken_0x1b11ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b11ec) {
            ctx->pc = 0x1B11F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B11ECu;
            // 0x1b11f0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B12A4u;
            goto label_1b12a4;
        }
    }
    ctx->pc = 0x1B11F4u;
    // 0x1b11f4: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1b11f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1b11f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b11f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b11fc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B11FCu;
    {
        const bool branch_taken_0x1b11fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11FCu;
        // 0x1b1200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11fc) {
            ctx->pc = 0x1B12A0u;
            goto label_1b12a0;
        }
    }
    ctx->pc = 0x1B1204u;
    // 0x1b1204: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x1b1204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1b1208: 0xc477001c  lwc1        $f23, 0x1C($v1)
    ctx->pc = 0x1b1208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1b120c: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x1b120cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x1b1210: 0xc4740014  lwc1        $f20, 0x14($v1)
    ctx->pc = 0x1b1210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1214: 0xc4760010  lwc1        $f22, 0x10($v1)
    ctx->pc = 0x1b1214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b1218: 0xc4750018  lwc1        $f21, 0x18($v1)
    ctx->pc = 0x1b1218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b121c: 0xc06c504  jal         func_1B1410
    ctx->pc = 0x1B121Cu;
    SET_GPR_U32(ctx, 31, 0x1B1224u);
    ctx->pc = 0x1B1220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B121Cu;
    // 0x1b1220: 0x8c500110  lw          $s0, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1410u, 0x1B121Cu, 0x1B1224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1224u;
label_1b1224:
    // 0x1b1224: 0x8e250088  lw          $a1, 0x88($s1)
    ctx->pc = 0x1b1224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1b1228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b1228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b122c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b122cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b1230: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b1230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b1234: 0xc06c4b0  jal         func_1B12C0
    ctx->pc = 0x1B1234u;
    SET_GPR_U32(ctx, 31, 0x1B123Cu);
    ctx->pc = 0x1B1238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1234u;
    // 0x1b1238: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B12C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B12C0u, 0x1B1234u, 0x1B123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B123Cu;
label_1b123c:
    // 0x1b123c: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x1b123cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
    // 0x1b1240: 0xc06c6a2  jal         func_1B1A88
    ctx->pc = 0x1B1240u;
    SET_GPR_U32(ctx, 31, 0x1B1248u);
    ctx->pc = 0x1B1244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1240u;
    // 0x1b1244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A88u, 0x1B1240u, 0x1B1248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1248u;
label_1b1248:
    // 0x1b1248: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x1b1248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1b124c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b124cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1250: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1B1250u;
    SET_GPR_U32(ctx, 31, 0x1B1258u);
    ctx->pc = 0x1B1254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1250u;
    // 0x1b1254: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1B1250u, 0x1B1258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1258u;
label_1b1258:
    // 0x1b1258: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x1b1258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1b125c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1b125cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1b1260: 0xe4550018  swc1        $f21, 0x18($v0)
    ctx->pc = 0x1b1260u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1b1264: 0xe4560010  swc1        $f22, 0x10($v0)
    ctx->pc = 0x1b1264u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1b1268: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x1B1268u;
    SET_GPR_U32(ctx, 31, 0x1B1270u);
    ctx->pc = 0x1B126Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1268u;
    // 0x1b126c: 0x8e2400a0  lw          $a0, 0xA0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x1B1268u, 0x1B1270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1270u;
label_1b1270:
    // 0x1b1270: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x1b1270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1b1274: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b1274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1278: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x1b1278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    // 0x1b127c: 0x9083018d  lbu         $v1, 0x18D($a0)
    ctx->pc = 0x1b127cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 397)));
    // 0x1b1280: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1280u;
    {
        const bool branch_taken_0x1b1280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1280) {
            ctx->pc = 0x1B1290u;
            goto label_1b1290;
        }
    }
    ctx->pc = 0x1B1288u;
    // 0x1b1288: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1288u;
    {
        const bool branch_taken_0x1b1288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1288u;
        // 0x1b128c: 0xa080018d  sb          $zero, 0x18D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 397), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1288) {
            ctx->pc = 0x1B129Cu;
            goto label_1b129c;
        }
    }
    ctx->pc = 0x1B1290u;
label_1b1290:
    // 0x1b1290: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1290u;
    {
        const bool branch_taken_0x1b1290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1290u;
        // 0x1b1294: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1290) {
            ctx->pc = 0x1B129Cu;
            goto label_1b129c;
        }
    }
    ctx->pc = 0x1B1298u;
    // 0x1b1298: 0xa082018d  sb          $v0, 0x18D($a0)
    ctx->pc = 0x1b1298u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 397), (uint8_t)GPR_U32(ctx, 2));
label_1b129c:
    // 0x1b129c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b129cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b12a0:
    // 0x1b12a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b12a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b12a4:
    // 0x1b12a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b12a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b12a8: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x1b12a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1b12ac: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x1b12acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b12b0: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1b12b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b12b4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1b12b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b12b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B12B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B12BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12B8u;
        // 0x1b12bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B12B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B12C0u;
}
