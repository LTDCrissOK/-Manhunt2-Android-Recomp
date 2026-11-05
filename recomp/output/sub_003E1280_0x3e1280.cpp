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

// Function: sub_003E1280
// Address: 0x3e1280 - 0x3e1448
void sub_003E1280_0x3e1280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1280_0x3e1280");
#endif

    switch (ctx->pc) {
        case 0x3e12c8u: goto label_3e12c8;
        case 0x3e13b0u: goto label_3e13b0;
        case 0x3e1410u: goto label_3e1410;
        default: break;
    }

    ctx->pc = 0x3e1280u;

    // 0x3e1280: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3e1280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3e1284: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3e1284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3e1288: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3e1288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3e128c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e128cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1290: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3e1290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3e1294: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e1294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1298: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3e1298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3e129c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3e129cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e12a0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3e12a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x3e12a4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x3e12a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x3e12a8: 0x1232005d  beq         $s1, $s2, . + 4 + (0x5D << 2)
    ctx->pc = 0x3E12A8u;
    {
        const bool branch_taken_0x3e12a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x3E12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12A8u;
        // 0x3e12ac: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e12a8) {
            ctx->pc = 0x3E1420u;
            goto label_3e1420;
        }
    }
    ctx->pc = 0x3E12B0u;
    // 0x3e12b0: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x3e12b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3e12b4: 0x1212005a  beq         $s0, $s2, . + 4 + (0x5A << 2)
    ctx->pc = 0x3E12B4u;
    {
        const bool branch_taken_0x3e12b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x3E12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12B4u;
        // 0x3e12b8: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e12b4) {
            ctx->pc = 0x3E1420u;
            goto label_3e1420;
        }
    }
    ctx->pc = 0x3E12BCu;
    // 0x3e12bc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3e12bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3e12c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e12c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e12c4: 0x0  nop
    ctx->pc = 0x3e12c4u;
    // NOP
label_3e12c8:
    // 0x3e12c8: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x3e12c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3e12cc: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x3e12ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3e12d0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3e12d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e12d4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3e12d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e12d8: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e12d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e12dc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e12dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e12e0: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e12e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e12e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E12E4u;
    {
        const bool branch_taken_0x3e12e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12E4u;
        // 0x3e12e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e12e4) {
            ctx->pc = 0x3E1300u;
            goto label_3e1300;
        }
    }
    ctx->pc = 0x3E12ECu;
    // 0x3e12ec: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x3e12ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e12f0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3e12f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e12f4: 0x0  nop
    ctx->pc = 0x3e12f4u;
    // NOP
    // 0x3e12f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3E12F8u;
    {
        const bool branch_taken_0x3e12f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e12f8) {
            ctx->pc = 0x3E12FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E12F8u;
            // 0x3e12fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1300u;
            goto label_3e1300;
        }
    }
    ctx->pc = 0x3E1300u;
label_3e1300:
    // 0x3e1300: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e1300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e1304: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e1304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e1308: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e1308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e130c: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e130cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e1310: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E1310u;
    {
        const bool branch_taken_0x3e1310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1310u;
        // 0x3e1314: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1310) {
            ctx->pc = 0x3E132Cu;
            goto label_3e132c;
        }
    }
    ctx->pc = 0x3E1318u;
    // 0x3e1318: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x3e1318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e131c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3e131cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e1320: 0x0  nop
    ctx->pc = 0x3e1320u;
    // NOP
    // 0x3e1324: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x3E1324u;
    {
        const bool branch_taken_0x3e1324 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1324u;
        // 0x3e1328: 0x38a20001  xori        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1324) {
            ctx->pc = 0x3E1390u;
            goto label_3e1390;
        }
    }
    ctx->pc = 0x3E132Cu;
label_3e132c:
    // 0x3e132c: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x3e132cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e1330: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e1330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e1334: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E1334u;
    {
        const bool branch_taken_0x3e1334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1334) {
            ctx->pc = 0x3E1338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1334u;
            // 0x3e1338: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1358u;
            goto label_3e1358;
        }
    }
    ctx->pc = 0x3E133Cu;
    // 0x3e133c: 0x14a00014  bnez        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E133Cu;
    {
        const bool branch_taken_0x3e133c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E133Cu;
        // 0x3e1340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e133c) {
            ctx->pc = 0x3E1390u;
            goto label_3e1390;
        }
    }
    ctx->pc = 0x3E1344u;
    // 0x3e1344: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e1344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e1348: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e1348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e134c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x3e134cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3e1350: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3E1350u;
    {
        const bool branch_taken_0x3e1350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1350u;
        // 0x3e1354: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1350) {
            ctx->pc = 0x3E1390u;
            goto label_3e1390;
        }
    }
    ctx->pc = 0x3E1358u;
label_3e1358:
    // 0x3e1358: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e1358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e135c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E135Cu;
    {
        const bool branch_taken_0x3e135c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E135Cu;
        // 0x3e1360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e135c) {
            ctx->pc = 0x3E1390u;
            goto label_3e1390;
        }
    }
    ctx->pc = 0x3E1364u;
    // 0x3e1364: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E1364u;
    {
        const bool branch_taken_0x3e1364 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1364u;
        // 0x3e1368: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1364) {
            ctx->pc = 0x3E138Cu;
            goto label_3e138c;
        }
    }
    ctx->pc = 0x3E136Cu;
    // 0x3e136c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e136cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e1370: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x3e1370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x3e1374: 0x3843020f  xori        $v1, $v0, 0x20F
    ctx->pc = 0x3e1374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3e1378: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1378u;
    {
        const bool branch_taken_0x3e1378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1378u;
        // 0x3e137c: 0x30420007  andi        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1378) {
            ctx->pc = 0x3E138Cu;
            goto label_3e138c;
        }
    }
    ctx->pc = 0x3E1380u;
    // 0x3e1380: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e1380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e1384: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3e1384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3e1388: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e1388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e138c:
    // 0x3e138c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3e138cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e1390:
    // 0x3e1390: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E1390u;
    {
        const bool branch_taken_0x3e1390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1390u;
        // 0x3e1394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1390) {
            ctx->pc = 0x3E13E4u;
            goto label_3e13e4;
        }
    }
    ctx->pc = 0x3E1398u;
    // 0x3e1398: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x3e1398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3e139c: 0x911023  subu        $v0, $a0, $s1
    ctx->pc = 0x3e139cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3e13a0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3e13a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3e13a4: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3E13A4u;
    {
        const bool branch_taken_0x3e13a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3E13A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E13A4u;
        // 0x3e13a8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e13a4) {
            ctx->pc = 0x3E13D0u;
            goto label_3e13d0;
        }
    }
    ctx->pc = 0x3E13ACu;
    // 0x3e13ac: 0x0  nop
    ctx->pc = 0x3e13acu;
    // NOP
label_3e13b0:
    // 0x3e13b0: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x3e13b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x3e13b4: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x3e13b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x3e13b8: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x3e13b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3e13bc: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x3e13bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3e13c0: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x3e13c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e13c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e13c8: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3E13C8u;
    {
        const bool branch_taken_0x3e13c8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3E13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E13C8u;
        // 0x3e13cc: 0xb4680000  sdr         $t0, 0x0($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e13c8) {
            ctx->pc = 0x3E13B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e13b0;
        }
    }
    ctx->pc = 0x3E13D0u;
label_3e13d0:
    // 0x3e13d0: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x3e13d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3e13d4: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x3e13d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3e13d8: 0xb2280007  sdl         $t0, 0x7($s1)
    ctx->pc = 0x3e13d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e13dc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3E13DCu;
    {
        const bool branch_taken_0x3e13dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E13E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E13DCu;
        // 0x3e13e0: 0xb6280000  sdr         $t0, 0x0($s1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e13dc) {
            ctx->pc = 0x3E1414u;
            goto label_3e1414;
        }
    }
    ctx->pc = 0x3E13E4u;
label_3e13e4:
    // 0x3e13e4: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x3e13e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3e13e8: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x3e13e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3e13ec: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x3e13ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e13f0: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x3e13f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e13f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e13f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e13f8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3e13f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e13fc: 0x9fa50014  lwu         $a1, 0x14($sp)
    ctx->pc = 0x3e13fcu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3e1400: 0x9fa20010  lwu         $v0, 0x10($sp)
    ctx->pc = 0x3e1400u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1404: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3e1404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3e1408: 0xc0f845e  jal         func_3E1178
    ctx->pc = 0x3E1408u;
    SET_GPR_U32(ctx, 31, 0x3E1410u);
    ctx->pc = 0x3E140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1408u;
    // 0x3e140c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1178u, 0x3E1408u, 0x3E1410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1410u;
label_3e1410:
    // 0x3e1410: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x3e1410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3e1414:
    // 0x3e1414: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e1414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1418: 0x5612ffab  bnel        $s0, $s2, . + 4 + (-0x55 << 2)
    ctx->pc = 0x3E1418u;
    {
        const bool branch_taken_0x3e1418 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x3e1418) {
            ctx->pc = 0x3E141Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1418u;
            // 0x3e141c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E12C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e12c8;
        }
    }
    ctx->pc = 0x3E1420u;
label_3e1420:
    // 0x3e1420: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3e1420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e1424: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3e1424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e1428: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3e1428u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e142c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3e142cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e1430: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3e1430u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e1434: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3e1434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3e1438: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3e1438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3e143c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E143Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E143Cu;
        // 0x3e1440: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E143Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1444u;
    // 0x3e1444: 0x0  nop
    ctx->pc = 0x3e1444u;
    // NOP
    ctx->pc = 0x3e1448u;
}
